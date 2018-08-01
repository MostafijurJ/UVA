#include<bits/stdc++.h>

using namespace std;

int main()
{

    int tc;
    scanf("%d",&tc);
    while(tc--){
        int arr[5];
        for(int i=0;i<5; i++)
            scanf("%d",&arr[i]);
        int ck=0,sum=1;
        for(int i=0; i<4; i++){
            if(arr[i+1]-arr[i]==sum)
                ck++;
        }
        if(ck==4) printf("Y\n");
        else printf("N\n");
    }
}
