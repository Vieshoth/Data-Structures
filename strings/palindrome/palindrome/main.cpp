#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str= "Welcome";
    string revstr;
    //char str[100];

    //getline(cin, str);
    cin >> str;

    string::reverse_iterator it;


    for(it = str.rbegin(); it!=str.rend(); it++){
        revstr.push_back(*it);
    }

    if(str.compare(revstr) == 0 )
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;
}
