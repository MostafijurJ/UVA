/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>
#include<stdio.h>
#include<istream>
#include<math.h>
#include<string.h>
#include<algorithm>
int re(int j);

using namespace std;

int main()
{
    char input[1000];
    int i,len,n;
    while (cin.getline(input,1000))
    {
        n = 0;
        if ( (input[0] -48) >= 0 && input[0]-48 <= 9)
        {
            len = strlen(input);
            reverse(input, input+len);
            for (i = 0; input[i]; ++i)
            {
                n = n * 10 + input[i]-48;
                if ( (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || n == 32 || n == 33
                        ||n == 44 || n == 46 || n == 58 || n == 59 || n == 63)
                {
                    printf("%c",n);
                    n = 0;
                }
            }
        }
        else        for (i=strlen(input)-1;i>=0;i--)
            {
                int j=input[i];
                re(j);
            }
        printf("\n");
    }
    return 0;
}
int re(int j)
{
    int b;
    int sum=0;
    while (j>0)
    {
        b=j%10;
        printf("%d",b);
        j=j/10;
    }
    return sum;
}
