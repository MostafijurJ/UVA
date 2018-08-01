#include<bits/stdc++.h>

using namespace std;
long base3(long n);

int main() {

    long n;

    while(cin >> n){
          ///  if(n<0)
           /// return 0;
        cout <<base3(n)<<endl;
    }
    return 0;
}

long base3(long n) {
    int re;
 long b = 0, i = 1;

    while(n != 0) {
        re= n%(3);
        n = n/(3);
        b= b + (re*i);
        i = i*10;
    }
    return b;
}
