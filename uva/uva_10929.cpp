/*

        Mostafijur Rahman Kajol
        JUST, CSE'15

        150135
                             */

#include<bits/stdc++.h>

using namespace std;

int  div(string k)
{
    long long  sum=0, num=0,dig;
    for(int i=0; i<k.size(); i++){
        dig= (int) k[i]-48;
        if(i%2)
            sum -= dig;
        else sum += dig;
       /// cout << dig << " ";
        ///cout << sum << " ";
    }
    if(sum%11==0)
        cout << k << " is a multiple of 11."<<endl;
    else
        cout << k << " is not a multiple of 11."<<endl;
}



int main()
{
    string num;
    while(cin >> num){
            if(num=="0")
            return 0;
        div(num);
    }

    return 0;
}

