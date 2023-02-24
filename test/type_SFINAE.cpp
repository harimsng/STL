// from https://en.cppreference.com/w/cpp/language/sfinae
#include <iostream>

template<int I>
void div(char(*)[I % 2 == 0] = 0)
{
	std::cout << "even\n";
    // this overload is selected when I is even
}

// ambiguous function call
// template<int I>
// void div(int(*)[I % 2 == 0] = 0)
// {
// 	std::cout << "even\n";
//     // this overload is selected when I is even
// }

template<int I>
void div(char(*)[I % 2 == 1] = 0)
{
	std::cout << "odd\n";
    // this overload is selected when I is odd
}

int main()
{
	div<1>();
	div<2>();
}
