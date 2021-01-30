#include <iostream>
#include <string>

using namespace std;

#define NUMBEROFALPHABETS 26

#define UPPERCASESTART 65
#define UPPERCASEEND UPPERCASESTART + NUMBEROFALPHABETS

#define LOWERCASESTART 97
#define LOWERCASEEND LOWERCASESTART + NUMBEROFALPHABETS

int main()
{
    string str= "Welcome";
    //char str[100];

    getline(cin, str);
    //cin >> str;

    string::iterator it;

    for(it = str.begin(); it!=str.end(); it++){
        if(*it < UPPERCASEEND && *it >= UPPERCASESTART){
            *it = LOWERCASESTART + (*it - UPPERCASESTART);
        }
        else if(*it < LOWERCASEEND && *it >= LOWERCASESTART){
            *it = UPPERCASESTART + (*it - LOWERCASESTART);
        }
    }

    cout << "sting case changed: " << str << endl ;
}
