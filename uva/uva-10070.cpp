#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

   while( cin >> n){
        if((n%4==0 && n%100 !=0) || n%400==0){
            cout <<"This is Leap Year."<<endl;
             if(n%15==0)
                    cout <<"This is huluculu festival year."<<endl;
                if(n%55==0)
                    cout <<"This is Bulukulu festival year."<<endl;
        }
       else  if(n%15==0)
                    cout <<"This is huluculu festival year."<<endl;
               else  if(n%55==0)
                    cout <<"This is Bulukulu festival year."<<endl;
        else
            cout <<"This is an ordinary year."<<endl;
   }
    return 0;
}
