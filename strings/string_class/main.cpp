#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";

    cout << "string length" << str.length() << endl;
    cout << "size length" << str.size() << endl;
    cout << "string capacity" << str.capacity() << endl;
    str.resize(30);
    cout << "string capacity" << str.capacity() << endl;

    if(str.empty()){
        cout << "string empty" << endl;
    }

    str.clear();
    cout << "string length" << str.length() << endl;

    if(str.empty()){
        cout << "string empty" << endl;
    }

    cout << "string max_size" << str.max_size() << endl;

}
