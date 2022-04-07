// Usually when you sign up for an account to buy something, your credit card number, phone number or answer
// to a secret question is partially obscured in some way. Since someone could look over your shoulder, you
//don't want that shown on your screen. Hence, the website masks these strings.

// // Your task is to create a function that takes a string, transforms all but the last four characters 
// into "#" and returns the new masked string.

// Examples
// maskify("4556364607935616") ➞ "############5616"

// maskify("64607935616") ➞ "#######5616"

// maskify("1") ➞ "1"

// maskify("") ➞ ""

#include<iostream>
using namespace std;

std::string maskify(std::string str) {
	if (str.length()>=4)
    {
        for (int i = 0; i < str.length()-4; i++)
        {
            str[i] = '#';
        }
        
    }
    return str;
}

int main()
{
    cout<<maskify("12345");
    return 0;
}