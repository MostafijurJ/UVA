#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<string,string>mep;
    int L,N;
    scanf("%d%d",&L,&N);
    while(L--)
    {
        string a,b;
        cin>>a>>b;
        mep[a]=b;
    }
    while(N--)
    {
        string s;
        cin>>s;
        int len=s.size();
        string  pp=mep[s];
        if(pp[0]!='\0')
        {
            string res=mep[s];
            cout<<res;
        }
        else if(s[len-1]=='y')
        {

            if(s[len-2]=='a'||s[len-2]=='e'||s[len-2]=='i'||s[len-2]=='o'||s[len-2]=='u')cout<<s<<"s";
            else
            {
                string res=s.substr(0,len-1);
                cout<<res<<"ies";
            }
        }
        else if(s[len-1]=='o'||s[len-1]=='s'||s[len-1]=='x'||(s[len-2]=='c'&&s[len-1]=='h')||(s[len-2]=='s'&&s[len-1]=='h'))
        {
            cout<<s<<"es";
        }
        else
        {
            cout<<s<<"s";
        }
        printf("\n");
    }

    return 0;
}
