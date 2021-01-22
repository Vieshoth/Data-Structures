#include <iostream>

using namespace  std;

int x =0;

int
funcb(int n)
{
    //static int x =0;
        if(n>0){
            return x++ + funcb(n-1) ;
            // sum = ++x + funcb(n-1) ; //the addition operation gets executed while returing i.e descending
            // return sum;
        }
    return 0;
}

int
main()
{
    int num=5;
    // cout << "calling funca recursive function: " << funca(x) << endl;
    cout << "calling funcd recursive function: " << funcb(num) << endl;
}




/*
#include <iostream>

using namespace  std;

int
funcb(int n)
{
    static int x =0,sum;
        if(n>0){
            x++;
            return x + funcb(n-1) ;
        }
    return 0;
}

int
main()
{
    int num=5;
    cout << "calling funcd recursive function: " << funcb(num) << endl;
}
*/
