#include<bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    string k;

  while( getline(cin,k)){

    for(int i=0; i<k.size(); i++){
        if(k[i] == '=')
            k[i] = '-';
            else if(k[i]=='-')
                k[i] = '0';
                else if(k[i]=='0')
                    k[i] = '9';
                  else if(k[i]=='9')
                     k[i] = '8';
                     else if(k[i]=='8')
                         k[i] = '7';
                          else if(k[i]=='7')
                                k[i] = '6';
                                else if(k[i]=='6')
                                    k[i] = '5';
                                    else if(k[i]=='5')
                                       k[i] = '4';
                                       else if(k[i]=='4')
                                         k[i] = '3';
                                         else if(k[i]=='3')
                                           k[i] = '2';
                                           else if(k[i]=='2')
                                              k[i] = '1';
                                              else if(k[i]=='1')
                                                k[i] = '`';

                                       else if(k[i]=='\\')
                                            k[i] = ']';
                                    else if(k[i]==']')
                                     k[i] = '[';
                                 else if(k[i]=='[')
                                    k[i] = 'P';
                                else if(k[i]=='P')
                                    k[i] = 'O';
                            else if(k[i]=='O')
                              k[i] = 'I';
                        else if(k[i]=='I')
                         k[i] = 'U';
                    else if(k[i]=='U')
                     k[i] = 'Y';
                    else if(k[i]=='Y')
                         k[i] = 'T';
                else if(k[i]=='T')
                         k[i] = 'R';
            else if(k[i]=='R')
                        k[i] = 'E';
            else if(k[i]=='E')
                    k[i] = 'W';
        else if(k[i]=='W')
                k[i] = 'Q';


     else if(k[i]=='\'')
        k[i] = ';';
     else if(k[i]==';')
        k[i] = 'L';
       else if(k[i]=='L')
        k[i] = 'K';
         else if(k[i]=='K')
           k[i] = 'J';
            else if(k[i]=='J')
            k[i] = 'H';
             else if(k[i]=='H')
              k[i] = 'G';
              else if(k[i]=='G')
             k[i] = 'F';
             else if(k[i]=='F')
               k[i] = 'D';
               else if(k[i]=='D')
                  k[i] = 'S';
                  else if(k[i]=='S')
                     k[i] = 'A';

                    else if(k[i] == '/')
                    k[i] = '.';
                else if(k[i]=='.')
                  k[i] = ',';
            else if(k[i]==',')
            k[i] = 'M';
        else if(k[i]=='M')
         k[i] = 'N';
       else if(k[i]=='N')
        k[i] = 'B';
     else if(k[i]=='B')
        k[i] = 'V';
  else if(k[i]=='V')
    k[i] = 'C';
 else if(k[i]=='C')
   k[i] = 'X';
  else if(k[i]=='X')
    k[i] = 'Z';
    }
    cout << k <<endl;
  }
    return 0;
}
