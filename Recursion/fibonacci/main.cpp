#include <iostream>

using namespace std;

int arr[10]={-1};

int rfib(int n){    // reduced steps more effecient than fib() function

    if (n<=1){
        if(arr[n] == -1)
            arr[n] = n;
        return arr[n];
    }
    else{
        if(arr[n-1] == -1)
            arr[n-1] = rfib(n-1);
        if(arr[n-2] == -1)
            arr[n-2] = rfib(n-2);
        return arr[n-1] + arr[n-2];
    }
}

int fib(int n){

    if (n<=1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}



int main()
{
    int x = 0;;
    while(x<10)
        arr[x++] = -1;
    cout << rfib(8) << endl;
}
