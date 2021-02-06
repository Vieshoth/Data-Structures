#include <iostream>

using namespace std;

void TOH(int n, int A, int B, int C){

    if(n>0){
        TOH(n-1, A, C, B);
        printf("from %d to %d using %d\n", A, C, B);
        TOH(n-1, B, A, C);

    }
}

int main()
{
    int n, A =1, B=2, C=3;
    cout << "Enter the number:" << endl;
    cin >> n;
    TOH(n, A, B, C);
}
