#include<iostream>

using namespace std;

//int pow(int x, int n)
//{
//    if(n==0)
//        return 1;
//    else
//        return pow(x, n-1)*x;
//}

int pow(int x, int n) //reduced steps
{
    if(n==0)
        return 1;
    if(n%2==0)
        return pow(x*x, n/2);
    else
        return pow(x*x, n/2)*x;

}


int main()
{
    cout<<pow(3, 3)<<endl;

}
