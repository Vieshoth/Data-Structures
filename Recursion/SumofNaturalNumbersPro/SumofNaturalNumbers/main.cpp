#include <iostream>

using namespace std;

int sumNumbers(int n){

    if(n>0){
        return n + sumNumbers(n-1);
    }
    else
        return 0;
}

int fact(int n){

    if(n>0){
        return n * fact(n-1);
    }
    else if(n==0)
        return 1;
}


int main()
{
    int x;
    cin >> x;

    cout << "Sum of x is: " << sumNumbers(x) << endl;
    cout << "Fact of x is: " << fact(x) << endl;


}
