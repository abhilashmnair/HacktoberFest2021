// C++ Program illustrating 
// Basic vector iterators

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declaration of vector
	vector<int> V;

    // Taking input in vector
	for (int i = 1; i <= 5; i++)
		V.push_back(i);

    // Printing
	cout << "Output of begin and end: ";
	for (auto i = V.begin(); i != V.end(); ++i)
		cout << *i << " ";

    // Printing
	cout << "\nOutput of cbegin and cend: ";
	for (auto i = V.cbegin(); i != V.cend(); ++i)
		cout << *i << " ";

    // Printing in reverse order
	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = V.rbegin(); ir != V.rend(); ++ir)
		cout << *ir << " ";

    // Printing in reverse order
	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = V.crbegin(); ir != V.crend(); ++ir)
		cout << *ir << " ";

	return 0;
}