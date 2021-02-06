#include <iostream>

using namespace std;

int fact(int n){

    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int combinationFact(int n, int r){

    int fn = fact(n);
    int fr = fact(r);
    int fnr = fact(n-r);

    return fn / (fnr*fr);
}

int combination(int n, int r){

    if(r==0 && n==r){
        return 1;
    }
    else {
        return combination(n-1, r-1)* combination(n-1, r);
    }
}

int permutationFact(int n, int r){

    int fn = fact(n);
    //int fx = fact(x);
    int fnr = fact(n-r);

    return fn / (fnr);
}

int main()
{
    int n, r, comb=0;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "Enter the number:" << endl;
    cin >> r;
    comb = combinationFact(n, r);
    cout << comb;

}
