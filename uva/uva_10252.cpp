
/*
    Mostafijur Rahman KAJOL
     CSE'15, JUST
   ************************
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    string k, kk;
    while(cin >> k >> kk){
            char arr[100000];
        int len, len2,pk=0;
        len =k.size();
        len2 = kk.size();
        if(len<len2){
        for(int i=0; i<k.size(); i++){
            for(int j=0; j<kk.size(); j++){
                if(k[i]==kk[j]){
                    arr[pk++]= k[i];
                    break;
                }

            }
         }
        }
        else{
            for(int i=0; i<kk.size(); i++){
            for(int j=0; j<k.size(); j++){
                if(kk[i]==k[j]){
                    arr[pk++]= kk[i];
                    break;
                }

            }
         }
        }
    sort(arr, arr+pk);
    for(int i=0;i<pk;i++)
        cout  << arr[i];
        cout << endl;
    }
    return 0;
}
