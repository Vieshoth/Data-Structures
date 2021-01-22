#include <iostream>

using namespace std;

void funca(int n)
{

    if(n>0){
        cout << n << endl; //the instructions before the recursion function call is executed in the ascending order
        funca(n-1);
    }
}

void funcd(int n)
{

    if(n>0){
        funcd(n-1);
        cout << n << endl; //the instructions before the recursion function call is executed in the descending order
    }
}


void funcad(int n)
{

    if(n>0){
        cout << " >> " << n ; //the instructions before the recursion function call is executed in the ascending order
        funcad(n-1);
        cout << " << " << n ; //the instructions before the recursion function call is executed in the descending order

    }
    else{
        cout << endl;
    }
}

int main()
{
    int x=3;
//    cout << "calling funca recursive function" << endl;
//    funca(x);
//    cout << "calling funcd recursive function" << endl << endl << endl;
//    funcd(x);


    cout << "calling funcad recursive function" << endl ;
    funcad(x);

}
