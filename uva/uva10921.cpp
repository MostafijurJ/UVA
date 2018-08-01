#include<bits/stdc++.h>
using namespace std;

int main()
{
    string k;

   while(cin >> k)
   {
    for(int i=0;i<k.size();i++){

        if(k[i] == 'A' || k[i] == 'B' || k[i]=='C')
            k[i] = '2';
          else  if(k[i] == 'D' || k[i] == 'E' || k[i]=='F')
                k[i] = '3';
             else if(k[i] == 'G' || k[i] == 'H' || k[i]=='I')
                 k[i] = '4';
               else if(k[i] == 'J' || k[i] == 'K' || k[i]=='L')
                    k[i] = '5';

                  else if(k[i] == 'M' || k[i] == 'N' || k[i]=='O')
                       k[i] = '6';
               else if(k[i] == 'P' || k[i] == 'Q' || k[i]=='R' || k[i]=='S')
                    k[i] = '7';

          else  if(k[i] == 'T' || k[i] == 'U' || k[i]=='V')
             k[i] = '8';
      else if(k[i] == 'W' || k[i] == 'X' || k[i]=='Y' || k[i] =='Z')
            k[i] = '9';
    }
    cout << k <<endl;
   }

    return 0;
}
