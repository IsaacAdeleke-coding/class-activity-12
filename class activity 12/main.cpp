//
//  main.cpp
//  class activity 12
//
//  Created by Isaac Adeleke on 9/16/24.
//

#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for a positive number
    cout << "Enter a positive number: ";
    cin >> n;

    // Check if the input is positive
    if (n < 0) {
        cout << "Please enter a positive number." << endl;
        return 1;  // Exit with error code
    }

    // Calculate the factorial
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    // Print the result
    cout << "The factorial of " << n << " is " << factorial << endl;

    return 0;
}


/*
 Enter a positive number: 5
 The factorial of 5 is 120
 Program ended with exit code: 0
 */

