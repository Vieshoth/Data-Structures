#include <iostream>
using namespace std;

int factors(int n){

    int x=1, sum=0;

    cout << "Factors are" << endl;
    while(x<=n)
    {
        if(n%x == 0){
            cout << x << endl;
            sum = sum + x;
        }
        x++;
    }
    cout << "sum of factorrs are: " << sum <<endl;
    return sum;
}


int main()
{
    int n;

    cout << "Enter the number" << endl;
    cin >> n;

    if((2*n)==factors(n))
        cout << "n is a perfect number" << endl;
    else
        cout << "n is not a perfect number" << endl;


}
