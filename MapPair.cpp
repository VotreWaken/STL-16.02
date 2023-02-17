#include <iostream>
#include <map>
#include <string>
int main()
{
	// Initialize Map
	std::map<std::string, int> map;

	// Insert Values into the Map
	int userValue;
	std::string userName;


	// Initialize all Map Values
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "Enter Student Name: " << "\n";
		getline(std::cin, userName);
		std::cout << "Enter Average Score to Student: " << i + 1 << "\n";
		std::cin >> userValue;
		map.insert(std::pair<std::string, int>(userName, userValue));
		std::cin.ignore();
	}

	// Loop Using Iterator
	for (auto it = map.begin(); it != map.end(); it++)
	{
		std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
	}
}
