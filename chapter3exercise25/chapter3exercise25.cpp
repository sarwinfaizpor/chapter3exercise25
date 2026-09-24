#include <iostream>
int main()
{
	double rowlength;
	double endpostspas;
	double vinespace;
	int numberOfvines;
	std::cout << "Enter the length of the row in feet: ";
	std::cin >> rowlength;
	std::cout << "Enter the space used by each end post in feet: ";
	std::cin >> endpostspas;
	std::cout << "Enter the space between each vine in feet: ";
	std::cin >> vinespace;
	numberOfvines = (rowlength - 2 * endpostspas) / vinespace;
	std::cout << "Number of grapevines: " << numberOfvines << std::endl;
	return 0;
}