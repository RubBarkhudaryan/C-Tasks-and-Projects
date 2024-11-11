#include <iostream>
template<typename T, typename Y>
auto plus(T x, Y y)
{
	return x + y;
}

template<typename T>
auto plus(T x, T y)
{
	return x + y;
}

template<typename T, typename Y>
auto minus(T x, Y y)
{
	return x - y;
}

template<typename T, typename Y>
auto print(Y(*ptr)(T x, Y y), T& x, Y& y)
{
	return ptr(y, x);
}

template<typename T, typename Y>
auto print(T(*ptr)(T x, Y y), T& x, Y& y)
{
	return ptr(y, x);
}

template<typename T>
T print(T(*ptr)(T x, T y), T& x, T& y)
{
	return ptr(y, x);
}

//int main()
//{
//	int x{ 10 }, y{ 20 };
//	double a{ 1.25 }, b{ 5.69 };
//	std::cout << print(plus, b, x) << '\n';
//	std::cout << print(minus, a, y) << '\n';
//
//	std::cout << print(plus, b, x) << '\n';
//	std::cout << print(minus, a, y) << '\n';
//
//	std::cout << print(plus, a, b) << '\n';
//	std::cout << print(minus, a, b) << '\n';
//
//	std::cout << print(plus, x, y) << '\n';
//	std::cout << print(minus, x, y) << '\n';
//	return 0;
//}


//Example 2


/*
	#include <iostream>
template<typename T, typename Y>
auto plus(T x, Y y)
{
  return x + y;
}

template<typename T, typename Y>
auto minus(T x, Y y)
{
  return x - y;
}

template<typename T, typename Y>
auto print(Y (*ptr)(T x, Y y), T& x, Y& y)
{
  return ptr( y, x) ;
}

template<typename T, typename Y>
auto print(T(*ptr)(T x, Y y), T& x, Y& y)
{
  return ptr(y, x);
}

int main()
{
  int x{ 10 }, y{ 20 };
  double a{ 1.25 }, b{ 5.69 };
  std::cout << print(plus, b, x) << '\n';
  std::cout << print(minus, a, y) << '\n';

  std::cout << print(plus, b, x) << '\n';
  std::cout << print(minus, a, y) << '\n';

  std::cout << print(plus, a, b) << '\n';
  std::cout << print(minus, a, b) << '\n';
  return 0;
}
*/
