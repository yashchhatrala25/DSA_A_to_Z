#include<bits/stdc++.h>
using namespace std;

// Write a program that takes an input of age - Part 1
// and prints if you are adult or not - Part 2
// >= 18 => yes
// < 18 => no
int main() {
    // Part 1
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"You'r age is: "<<age<<"\n";

    // Part 2
    if(age > 18) {
        cout<<"You are adult: ";
    } else {
        cout<<"You are child: ";
    }
    return 0;
}