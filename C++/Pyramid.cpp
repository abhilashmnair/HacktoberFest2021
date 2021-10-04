#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int x = 1; x <= rows; ++x)
    {
        for(int j = 1; j <= x; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
