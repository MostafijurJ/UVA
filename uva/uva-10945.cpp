#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
string k;
while(getline(cin,k))
{
    if(k == "DONE")
       break;

    string R = "", t;
    for(int x=0; x<k.size(); x++)
        if(isalpha(k[x]))
            R += tolower(k[x]);

    t =R;
    reverse(R.begin(), R.end());
    if(R == t)
      printf("You won't be eaten!\n");
    else
        printf("Uh oh..\n");
}
return 0;
}
