#include <bits/stdc++.h>
using namespace std;

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/

int main()
{
    // Step 1
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    cout << "your marks: ";

    if (25 > marks)
    {
        cout << "F";
    }
    else if (44 >= marks)
    {
        cout << "E";
    }
    else if (49 >= marks)
    {
        cout << "D";
    }
    else if (59 >= marks)
    {
        cout << "C";
    }
    else if (79 >= marks)
    {
        cout << "B";
    }
    else if (100 >= marks)
    {
        cout << "A";
    }
    else
    {
        cout << "Enter valid input...";
    }
    return 0;
}