#include <bits/stdc++.h>
using namespace std;

/*
Taken the age from the user and then dicide accordinagly
1. If age < 18,
    print -> not eligible for job
2. If age >= 18,
    print -> eligible for job
3. If age >= 55 and age <= 57,
    print -> eligible for job but retirement soon.
4. If age > 57,
    print -> retirement time.
*/

int main()
{
    // Step 1
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Step 2
    if (age < 18)
    {
        cout << "Not eligible for job.";
    }
    // Step 3
    else if (age <= 54)
    {
        cout << "Eligible for job.";
    }
    // Step 4
    else if (age <= 57)
    {
        cout << "Eligible for job but retirement soon.";
    }
    // Step 5
    else if (age > 57)
    {
        cout << "Retirement time.";
    }
    // Step 6
    else
    {
        cout << "Enter valid input...";
    }
    return 0;
}