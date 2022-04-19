#include "main.h"

//class Awesome
//{
//
//public:
//	Awesome( void ) : _n( 42 ) { return; }
//	int get( void ) const { return this->_n; }
//
//private:
//	int _n;
//};
//
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
//
//template< typename T >
//void print( T const & x ) { std::cout << x << std::endl; return; }
//
//int main() {
//	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//	Awesome tab2[5];
//
//	iter( tab, 5, print );
//	iter( tab2, 5, print );
//
//	return 0;
//}

int	main()
{
	{
		int	a[] = {10, 20, 30};
		int	length = sizeof(a) / sizeof(int);
		iter<int>(a, length, justprint);
	}
	{
		char	a[] = "Hello";
		int		length = sizeof(a) / sizeof(char);
		iter<char, int>(a, length, toupper);
		std::cout << a << std::endl;
	}
	return 0;
}
