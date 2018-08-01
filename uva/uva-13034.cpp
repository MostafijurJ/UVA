/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int t,j=1;
    cin >> t;
    while(t--){
        int arr[13];
        int m=0;
        for(int i=0;i<13;i++)
            cin >> arr[i];
        for(int i=0;i<13;i++){
            if(arr[i]>0)
                m++;
        }
        printf("Set #%d: ",j++);
        if(m==13) cout <<"Yes"<<endl;
        else cout << "No"<<endl;
    }
   return 0;
}


