
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,j=1;;

    cin >> T;
    getchar();
    while(T--)
    {
        string k;
        int sum =0;
        getline(cin , k);
            for(int i=0; i<k.size(); i++){
                if(k[i] == 'a' || k[i]=='d'|| k[i] == 'g' || k[i]=='j' || k[i] == 'm' || k[i]=='p'|| k[i] == 't' || k[i]=='w' || k[i]==' ')
                    sum += 1;
            else if(k[i] == 'b' || k[i]=='e' || k[i] == 'h' || k[i]=='k'|| k[i] == 'n' || k[i]=='q' || k[i] == 'u' || k[i]=='x')
                    sum += 2;
                    else if(k[i] == 'c' || k[i]=='f' || k[i] == 'i' || k[i]=='l' || k[i] == 'o' || k[i]=='r' || k[i] == 'v' || k[i]=='y')
                        sum += 3;
                    else if(k[i] =='s' || k[i]=='z')
                        sum += 4;
            }

            cout << "Case #"<<j<<": " << sum <<endl;
            j++;
    }
    return 0;
}
