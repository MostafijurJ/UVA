/* Mostafijur  Rahman Kajol
        CSE_15, JUST
                        */


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,j=1;

    cin >> t;

    while(t--){
        int a1,a2,a3,a4,ct1,ct2,ct3;
        int  av;
        cin >> a1 >> a2 >> a3 >> a4 >> ct1 >> ct2 >> ct3;

        if(ct1>=ct2 && ct3>=ct2)
          av = (ct1+ct3)/2;
        else if(ct2>=ct1 && ct3>=ct1)
            av =(ct2+ct3)/2;
        else if(ct2>= ct3  && ct1>= ct3)
            av = (ct1+ct2)/2;
          ///  cout << av << endl;
        printf("Case %d: ",j++);
        float mark = a1+a2+a3+a4+av;
        ///cout  << mark;
        if(mark >=90)
            cout << "A"<<endl;
        else if(mark>= 80 && mark<90)
            cout << "B"<<endl;
            else if(mark>=70 && mark<80)
                cout << "C"<<endl;
            else if(mark>=60 && mark<70)
                cout << "D"<<endl;
            else if(mark<60)
                cout << "F"<<endl;
    }
    return 0;
}
