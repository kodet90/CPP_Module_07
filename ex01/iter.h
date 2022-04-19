#ifndef CPP_MODULE_07_EX01_ITER_H
#define CPP_MODULE_07_EX01_ITER_H

template<typename T>
void	iter(T * array, int length, void (*function)(T const &))
{
	for (int i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

template<typename T, typename U>
void	iter(T * array, int length, U (*function)(U))
{
	for (int i = 0; i < length; i++)
	{
		array[i] = function(array[i]);
	}
}

#endif //CPP_MODULE_07_EX01_ITER_H
