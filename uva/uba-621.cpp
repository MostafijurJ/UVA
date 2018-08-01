
 /*
 ---------*********--------
   Mostafijur Rahman Kajol
        CSE, JUST
      ----*****---- */

#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
     cin >> s;
        int i=s.size();
        if(s=="1" || s=="4" || s=="78")
            cout << "+"<<endl;
        else if(s[i-2]=='3' && s[i-1]=='5')
            cout<<"-"<<endl;
        else if(s[0]=='9' && s[i-1])
            cout << "*"<<endl;
        else
            cout <<"?"<<endl;

        }

    return 0;
}
