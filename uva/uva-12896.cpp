/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
     int arr[n],brr[n];
      char er = '"';
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    for(int i=0;i<n;i++)
        cin >> brr[i];


        for(int i=0;i<n;i++){
            if(arr[i]== 2){
                if(brr[i]==1)
                    cout <<"a";
                else if(brr[i]==2)
                    cout <<"b";
                else if(brr[i]==3)
                    cout <<"c";
            }
                else if(arr[i]==3){
                    if(brr[i]==1)
                        cout <<"d";
                    else if(brr[i]==2)
                        cout <<"e";
                    else if(brr[i]==3)
                        cout <<"f";
                }

                    else if(arr[i]==4){
                        if(brr[i]==1)
                            cout <<"g";
                        else if(brr[i]==2)
                            cout <<"h";
                        else if(brr[i]==3)
                            cout <<"i";
                    }

                         else if(arr[i]==5){
                            if(brr[i]==1)
                                cout <<"j";
                            else if(brr[i]==2)
                                cout <<"k";
                            else if(brr[i]==3)
                                cout <<"l";
                         }

                        else if(arr[i]==6){
                            if(brr[i]==1)
                                cout <<"m";
                            else if(brr[i]==2)
                                cout <<"n";
                            else if(brr[i]==3)
                                cout <<"o";
                        }

                     else if(arr[i]==7){
                        if(brr[i]==1)
                            cout <<"p";
                        else if(brr[i]==2)
                            cout <<"q";
                        else if(brr[i]==3)
                            cout <<"r";
                            else if(brr[i]==4)
                                cout << "s";
                     }

                         else if(arr[i]==8){
                            if(brr[i]==1)
                                cout <<"t";
                            else if(brr[i]==2)
                                cout <<"u";
                            else if(brr[i]==3)
                                cout <<"v";
                         }

                         else if(arr[i]==9){
                        if(brr[i]==1)
                            cout <<"w";
                        else if(brr[i]==2)
                            cout <<"x";
                        else if(brr[i]==3)
                            cout <<"y";
                            else if(brr[i]==4)
                                cout << "z";
                        }

                        else if(arr[i]==0){
                            if(brr[i]==1)
                            cout <<" ";
                        }

                        else if(arr[i]==1){
                            if(brr[i]==1)
                                cout <<".";
                            else if(brr[i]==2)
                                cout <<",";
                            else if(brr[i]==3)
                                cout <<"?";
                            else if(brr[i]==4)
                                cout <<er;
                    }
        }
        cout << endl;
    }

   return 0;
}

