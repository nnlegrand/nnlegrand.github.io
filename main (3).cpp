/******************************************************************************
This is a demo of literals
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int age;         // variabl to hold user's name
   string name;     // variable to hold user's name
   
   // prompt the user for the name
   cout << "What is your name?"<< endl;
   getline(cin, name);       // allows for the user to enter their name with spaces
   
   // prompt the user for their age
   cout<< " How old are you? "<< endl;
   cin >> age;       // allows for user to enter their age
   
   //display the user's name and age
   cout << " Name: " << name << endl;
   cout << "Age:" << age << endl;
    
    return 0;
}
