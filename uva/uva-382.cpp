#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int n;

    int m=1;
    while(cin >>n){
        if(m==1)
            cout << "PERFECTION OUTPUT"<<endl;
        if(n==0){
        cout <<"END OF OUTPUT"<<endl;
        return 0;}
     int sum =0;
     for(int i=1; i<=n/2;i++){
        if(n%i==0)
            sum += i;
     }
    m++;
     if(sum == n)
        printf("%5d  PERFECT\n",n);
     else if(sum<n)
        printf("%5d  DEFICIENT\n",n);
     else
      printf("%5d  ABUNDANT\n",n);

   }
     return 0;
 }
