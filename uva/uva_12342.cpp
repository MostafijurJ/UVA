/*
    Mostafijur Rahman KAJOL
     CSE'15, JUST
   ************************

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cn,cs=1;
    cin >> cn;
    while(cn--){
        long long tk;
        cin >> tk;
        float  tax=0;
        float a1,a2,a3,a4,a5;
        if(tk-180000>0){
                a1 = tk-180000;
                if(a1<=300000){
                    tax +=(a1*0.1);
                    if(tax<2000)
                        tax = 2000;
                }
                else{
                        tax += (300000*0.1);
                    a2 = (a1-300000);
                    if(a2<=400000){
                        tax += (a2*.15);
                    }
                    else{
                        tax += (400000*0.15);
                        a3 = (a2-400000);
                            if(a3<=300000){
                                tax +=(a3*.20);
                            }
                          else  {
                              tax += (300000*0.20);
                                a4 = a3-300000;
                              tax += (a4*0.25);
                        }
                    }
                }
        }
        printf("Case %d: ",cs++);
        cout << tax <<endl;
    }
    return 0;
}

