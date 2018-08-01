#include<bits\stdc++.h>

using namespace std;

int gcd ( int a, int b ) {
    if ( b == 0 ) return a;

    return gcd ( b, a % b );
}

int main()
{
    int tst;
    cin >> tst;
    while(tst--){
        int value;
        int gc=0;
        scanf("%d^\n",&value);
        gc = gcd(gc,value);
        cout << gc <<endl;
    }
    return 0;
}
