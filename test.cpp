#include <iostream>
#include <iterator>
#include <vector>
#include <list>
using namespace std;

int	main(void)
{
	std::vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

	// for (std::string planet : planets)
	// 	cout << planet << endl;
	for (vector<string>::iterator it = planets.begin(); it != planets.end(); it++)
		cout << *it << endl;
	return 0;
}
