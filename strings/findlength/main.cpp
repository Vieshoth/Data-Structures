#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str= "Welcome";
    int count=0;


    /* Usual method */
//    for (int i=0; str[i];i++){
//        count++;
//    }

    /* using string iterator */
    string::iterator it;
    for (it=str.begin(); it!=str.end();it++){
        count++;
    }

    cout << "count: "<< count << endl;


}
