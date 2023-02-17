#include <iostream>
#include <vector>
class Point
{
public:

	// Default Constructor
	Point()
	{
		std::cout << "Enter Value X\n";
		int valueX;
		std::cin >> valueX;
		x = valueX;
		std::cout << "Enter Value Y\n";
		int valueY;
		std::cin >> valueY;
		y = valueY;
	}

	// Get value of field x
	int GetX()
	{
		return x;
	}

	// Get value of field y
	int GetY()
	{
		return y;
	}

	~Point()
	{
	
	}
private:
		int x;
		int y;
};
int main()
{

	// Vector Declaration
	std::vector<Point> PointVec;

	// Initialize all Vector Values 
	for (size_t i = 0; i < 5; i++)
	{
		PointVec.push_back(Point());
	}

	// Using Default Loop
	std::cout << "Default Loop:" << "\n";
	for (size_t i = 0; i < PointVec.size(); i++)
	{
		std::cout << "Value in Index: " << i << "\n";
		std::cout << "Value X:" << PointVec[i].GetX() << "\n";
		std::cout << "Value Y:" << PointVec[i].GetY() << "\n";
	}
	std::cout << "\n";

	// Using Iterator
	std::vector<Point>::iterator it = PointVec.begin();
	std::cout << "Iterator Based Loop:" << "\n";
	for (int i = 0; it != PointVec.end(); it++, i++)
	{
		std::cout << "Value in Index: " << i << "\n";
		std::cout << "Value X:" << it->GetX() << "\n";
		std::cout << "Value Y:" << it->GetY() << "\n";
	}
	std::cout << "\n";

	// For-Each Based Iterator
	std::cout << "For-Each Iterator Based Loop:" << "\n";
	for (auto it : PointVec)
	{
		std::cout << "Value X:" << it.GetX() << "\n";
		std::cout << "Value Y:" << it.GetY() << "\n";
	}
	std::cout << "\n";
}