#include "main.h"

//#define MAX_VAL 750
//int main(int, char**)
//{
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		const int value = rand();
//		numbers[i] = value;
//		mirror[i] = value;
//	}
//	//SCOPE
//	{
//		Array<int> tmp = numbers;
//		Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
//	delete [] mirror;//
//	return 0;
//}

int	main()
{
	std::cout << "[INT]" << std::endl;
	try
	{
		Array<int> a;
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Array<int> a(3);
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Array<int> a(3);
		for (int i = 0; i < 3; i++)
		{
			a[i] = i;
		}
		std::cout << "a: " << a << std::endl;
		Array<int> b(a);
		std::cout << "b: " << b << std::endl;
		Array<int> c;
		c = a;
		std::cout << "c: " << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[INT CONST]" << std::endl;
	try
	{
		Array<int> const a(3);
		for (int i = 0; i < 3; i++)
		{
//			a[i] = i;
		}
		std::cout << "a: " << a << std::endl;
		Array<int> const b(a);
		std::cout << "b: " << b << std::endl;
		Array<int> const c;
//		c = a;
		std::cout << "c: " << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[CHAR]" << std::endl;
	try
	{
		Array<char> a;
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Array<char> a(3);
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Array<char> a(3);
		for (int i = 0; i < 3; i++)
		{
			a[i] = 'a' + i;
		}
		std::cout << "a: " << a << std::endl;
		Array<char> b(a);
		std::cout << "b: " << b << std::endl;
		Array<char> c;
		c = a;
		std::cout << "c: " << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[CHAR CONST]" << std::endl;
	try
	{
		Array<char> const a(3);
		for (int i = 0; i < 3; i++)
		{
//			a[i] = 'a' + i;
		}
		std::cout << "a: " << a << std::endl;
		Array<char> const b(a);
		std::cout << "b: " << b << std::endl;
		Array<char> const c;
//		c = a;
		std::cout << "c: " << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[STRING]" << std::endl;
	try
	{
		Array<std::string> a;
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Array<std::string> a(3);
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Array<std::string> a(3);
		for (int i = 0; i < 3; i++)
		{
			a[i] = std::string(3, 'a' + i);
		}
		std::cout << "a: " << a << std::endl;
		Array<std::string> b(a);
		std::cout << "b: " << b << std::endl;
		Array<std::string> c;
		c = a;
		std::cout << "c: " << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[STRING CONST]" << std::endl;
	try
	{
		Array<std::string> const a(3);
		for (int i = 0; i < 3; i++)
		{
//			a[i] = std::string(3, 'a' + i);
		}
		std::cout << "a: " << a << std::endl;
		Array<std::string> const b(a);
		std::cout << "b: " << b << std::endl;
		Array<std::string> const c;
//		c = a;
		std::cout << "c: " << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[ERRORS]" << std::endl;
	try
	{
		Array<int> a(3);
		std::cout << "a: " << a[-1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Array<int> a(3);
		std::cout << "a: " << a[3] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
