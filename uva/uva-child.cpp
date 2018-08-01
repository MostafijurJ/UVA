#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long k,kk;
  char ch;
  while(cin>> k >> ch>>kk ){
    if(ch=='/')
      cout <<k/kk<<endl;
    else if(ch=='%')
      cout <<k%kk<<endl;
  }
  return 0;
}
