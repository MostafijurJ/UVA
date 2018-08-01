#include<bits/stdc++.h>

using  namespace std;
map<char,int>mp;
void mapset(){
    mp['B']=mp['F']=mp['P']=mp['V']=1;
    mp['C']=mp['G']=mp['J']=mp['K']=mp['Q']=mp['S']=mp['X']=mp['Z']=2;
    mp['D']=mp['T']=3;
    mp['M']=mp['N']=5;
    mp['L']=4;
    mp['R']=6;
}
int main()
{
   mapset();
   string s;
   while(cin >> s){
        int len =s.size();
        for(int i=0; i<len; i++){
            if(mp[s[i]]!=mp[s[i+1]]&& mp[s[i]]!=0)
                cout << mp[s[i]];
        }
        cout << endl;
   }

    return 0;
}
