#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    string arr[100],brr[100];
    for(int i=0;i<a;i++){
        cin >> arr[i] >>brr[i];
    }
    string k;
    for(int i=0;i<b;i++){
        cin >> k;
         int l=k.size();
         for(int i=0;i<a;i++){
            if(k==arr[i]){
                cout << brr[i]<<endl;
                break;
            }
         }

    if(k[l-1]=='o' || k[l-1]=='s' || (k[l-2]=='c' && k[l-1]=='h') || (k[l-2]=='s' && k[l-1]=='h') || k[l-1]=='x'){
                    k[l]='e';
                    k[l+1]='s';
            l= l+2;
            for(int i=0;i<l;i++)cout <<k[i];
            cout << endl;
            }
            else if(k[l-2]=='r' && k[l-1]=='y'){
                k[l-1]='i';
                k[l]='e';
                k[l+1]='s';
                l+=2;
                for(int i=0;i<l;i++)cout <<k[i] ;
                cout << endl;
            }
            else{
                k[l]='s';
                l++;
                for(int i=0;i<l;i++)cout <<k[i];
                cout  << endl;
            }
        }
    return 0;
}
