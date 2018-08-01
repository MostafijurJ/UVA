
/*
    Mostafijur Rahman KAJOL
     CSE'15, JUST
   ************************
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,string> mp;
    map<string,string> :: iterator it;

    string a,b,c;
    char ch;
    while(cin >> a >> b){
        if(a.empty())
            break;
        mp[b]=a;
    }
    for(it=mp.begin(); it!=mp.end(); it++){
        cout << it->first <<endl;
    }

    return 0;
}
