/******************************************************************************
This is a demo of literals
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number =12 ;           // variable holds number without decimal places
    double number2 = 15.5;     // variable holds umber with decimal places 
    char letter = 'A';         // variable that holds character in ''
    string phrase = "ABCD";    // variable that holds the phrase "ABCD"
    bool valid = true;         // variable that holds the value true
    
    cout << number << endl;     // displays the value if number 
    cout << number2 << endl;    // displays the value of number2
    cout << letter << endl;     // displays value of lettter
    cout << phrase << endl;     // displays the value of phrase
    cout << valid << endl;      // displays the value of valid
    
    return 0;
}
