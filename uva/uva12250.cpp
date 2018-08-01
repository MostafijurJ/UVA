
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>
#include<stdio.h>
#include<istream>
#include<math.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    map <string,string>MY;
    map <string,string>::iterator it;
    MY["HELLO"] = "ENGLISH";
    MY["HOLA"] = "SPANISH";
    MY["HALLO"] = "GERMAN";
    MY["BONJOUR"] = "FRENCH";
    MY["CIAO"] = "ITALIAN";
    MY["ZDRAVSTVUJTE"]= "RUSSIAN";
    string k;
    int j=1;
    while(cin >> k){
                if(k[0]=='#')
                    return 0;
        it = MY.find(k);
        if(it==MY.end())
           cout <<"Case "<<j<<": "<<"UNKNOWN" <<endl;
        else
            cout <<"Case "<<j<<": "<< MY[k] <<endl;
            j++;
    }

   return 0;
}
