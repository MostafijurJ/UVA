#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    string k;
     cin >> k;
     int sum =0,m=1;
     for(int i=0;i<k.size();i++){
        if(k[i]=='O'){
             /// cout << m <<endl;
            sum += m;
            m++;
        }
        else if(k[i]=='X'){
            m=1;
        }
     }

     cout << sum <<endl;
    }
    return 0;
}
