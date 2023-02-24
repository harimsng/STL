#include <iostream>

class	SomeObject
{
};

int	main()
{
	int					SomeObject = 1; // compilable
	class SomeObject	someObject; // class keyword is necessary
	
	std::cout << SomeObject << '\n';
}
