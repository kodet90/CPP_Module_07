#ifndef CPP_MODULE_07_EX02_ARRAY_H
#define CPP_MODULE_07_EX02_ARRAY_H

template<typename T>
class	Array
{

public:
	Array<T>(): _array(NULL), _size(0) {}
	Array<T>(unsigned int const value): _array(NULL), _size(value)
	{
		this->_array = new T[this->_size];
	}
	virtual	~Array()
	{
		delete [] this->_array;
	}
	Array<T>(Array<T> const & array): _array(NULL), _size(0)
	{
		*this = array;
	}
	Array<T> &	operator=(Array<T> const & array)
	{
		if (this != &array)
		{
			delete [] this->_array;
			this->_array = new T[array._size];
			for (unsigned int i = 0; i < array._size; i++)
			{
				this->_array[i] = array._array[i];
			}
			this->_size = array._size;
		}
		return *this;
	}

	T &	operator[](long const index)
	{
		if (index >= this->_size || index < 0)
		{
			throw std::overflow_error("Index out of bounds");
		}
		return this->_array[index];
	}
	T const &	operator[](long const index) const
	{
		if (index >= this->_size || index < 0)
		{
			throw std::overflow_error("Index out of bounds");
		}
		return this->_array[index];
	}
	unsigned int	size() const
	{
		return this->_size;
	}

private:
	T *				_array;
	unsigned int	_size;

};

template<typename T>
std::ostream &	operator<<(std::ostream &o, Array<T> const & array)
{
	o << "{";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		o << array[i];
		if (i + 1 < array.size())
		{
			o << ", ";
		}
	}
	o << "}";
	return o;
}

template<>
std::ostream &	operator<<<char>(std::ostream &o, Array<char> const & array)
{
	o << "{";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		o << "'" << array[i] << "'";
		if (i + 1 < array.size())
		{
			o << ", ";
		}
	}
	o << "}";
	return o;
}

template<>
std::ostream &	operator<<<std::string>(std::ostream &o, Array<std::string> const & array)
{
	o << "{";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		o << "\"" << array[i] << "\"";
		if (i + 1 < array.size())
		{
			o << ", ";
		}
	}
	o << "}";
	return o;
}

#endif //CPP_MODULE_07_EX02_ARRAY_H
