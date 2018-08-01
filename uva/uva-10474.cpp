
/*

        Mostafijur Rahman Kajol
        JUST, CSE'15
                             */
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,cs=1;
    while(cin >> n >> q){
            if(n==0 && q==0) return 0;
        int arr[1000],brr[1000];

        for(int i=0;i<n;i++) cin >> arr[i];
        for(int i=0;i<q;i++) cin >> brr[i];
        sort(arr,arr+n);
        printf("CASE# %d:\n",cs++);
        int k=0;
        for(int i=0;i<q;i++){
            for(int j=0;j<n;j++){
                if(brr[i]==arr[j]){
                    cout<<brr[i]<<" found at "<<j+1<<endl; break ;}
                    else k++;
            }
            if(k==n) cout <<brr[i] <<" not found"<<endl;
        }

    }

    return 0;
}
