
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,j=1;
    cin >> t;
    while(t--){


        int cd,cm,y2,d2,m2,cy;
        char a,aa,aaa,aaaa;

        cin >> cd >> a >> cm >> aa >> cy;
        cin >> d2 >> aaa >> m2 >> aaaa >> y2;
       /// if(d2>d1 &&  m2>=m1 && y2>=y1)
           /// cout <<"Invalid date" <<endl;

            if(cd<d2){
                 cd+= 30;
                 m2=m2+1;
             }
             int p = cd-d2;
             if(cm<m2){
                cm += 12;
                y2= y2+1;
             }
             int pp = cm-m2;
             int ppp = cy-y2;
             int x = ((ppp*365)+(pp*30)+p)/365;
             printf("Case #%d: ",j++);
                if(ppp<0){
                    cout << "Invalid birth date"<<endl;
                   /// return 0;
                }

               else  if(x>130){
                        cout << "Check birth date"<<endl;
                  ///  return 0 ;
                }

            else  cout << x <<endl;
    }

   return 0;
}
