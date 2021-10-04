#include <iostream>
using namespace std;
// making a c program to detect amstrong number of 3 digits
//Armstrong number is a number that is equal to the sum of cubes of its digits
// 153,370,371,407 are 3 digit Amstrong number
//contributed by subho004

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}