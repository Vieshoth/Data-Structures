#include <iostream>

using namespace std;

int main()
{
    int n, x=1;

    cout << "Enter the number" << endl;
    cin >> n;

    cout << "Factors are" << endl;
    while(x<=n)
    {
        if(n%x == 0)
            cout << x << endl;
        x++;
    }

}
