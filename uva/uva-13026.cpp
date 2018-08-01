#include<bits/stdc++.h>
using namespace std;


/// Using Vectore
int main()
{
    vector<string>v;
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--){
        string k,kk;
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            cin >> k;
            v.push_back(k);
        }
        int ans;
        cin >> kk ;

        printf("Case %d:\n",cs++);
        for(int i=0; i<n; i++){
            ans=0;
            for(int j=0; j<(kk.size()); j++){
                if(kk[j] != v[i][j])
                  ans++;
            }
            if(ans<=1) cout << v[i] <<endl;
            v.clear();
        }

    }
}
