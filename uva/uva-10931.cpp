#include<bits/stdc++.h>
 using namespace std;

 typedef long long int ll;

string tobin(ll n)
{
    string bin = "";
    while(n)
    {
        bin = (char)(n % 2 + 48) + bin;
        n >>= 1;
    }
    return bin;
}
int cnt(string st)
{
    int res=0;
    int k= st.size();
    for(int i= 0; i<k; i++){
        if(st[i]=='1'){
                res++;
        }
    }

    return res;
}
int main()
{
    ll n;
   while(cin >> n){
        if(n==0)
        return 0;
    string k="";
    k = tobin(n);
    cout <<"The parity of ";
    cout << k <<" is ";
    cout << cnt(k)<<" (mod 2)."<<endl;
   }
    return 0;
}

