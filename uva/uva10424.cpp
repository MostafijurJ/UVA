#include<bits/stdc++.h>
using namespace std;

int main()
{
    string m,n;
    while(cin >> m >> n){
            int t;
        for(int i=0; i<m.size();i++){
            if(m[i]>= 'a' && m[i]<= 'z')
                t += m[i]-96;
            else if(m[i]>= 'A' && m[i]<= 'Z')
                t += m[i]-64;
        }
    cout << t <<endl;
    }
    return 0;
}
