#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    while(1){
    int n,a,b,p=0,i,j;
        cin >> n;
    if(n==0)
        return 0;
            for(i=1;i<60;i++){
                for( j=0; j<=i;j++){
                        if(n==(i*i*i-j*j*j)){
                            a=1;
                            break;
                        }

                        }

                        if(a==1)
                        break ;
                    }
            if(a==1)cout << i <<" " << j <<endl;
            else
            cout << "No solution"<<endl;
    }
    return 0;
}
