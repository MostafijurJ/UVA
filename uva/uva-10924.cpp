#include<bits/stdc++.h>
using namespace std;

int  main()
{
    string k;
    while(cin >> k){
     int sum=0;
     for(int i=0;i<k.size();i++){
        if(k[i]== 'a') sum += 1;
        else if(k[i]=='b') sum += 2;
        else if(k[i]=='c') sum += 3;
        else if(k[i]=='d') sum += 4;
        else if(k[i]=='e') sum += 5;
        else if(k[i]=='f') sum += 6;
        else if(k[i]=='g') sum += 7;
        else if(k[i]=='h') sum += 8;
        else if(k[i]=='i') sum += 9;
        else if(k[i]=='j') sum += 10;
        else if(k[i]=='k') sum += 11;
        else if(k[i]=='l') sum += 12;
        else if(k[i]=='m') sum += 13;
        else if(k[i]=='n') sum += 14;
        else if(k[i]=='o') sum += 15;
        else if(k[i]=='p') sum += 16;
        else if(k[i]=='q') sum += 17;
        else if(k[i]=='r') sum += 18;
        else if(k[i]=='s') sum += 19;
        else if(k[i]=='t') sum += 20;
        else if(k[i]=='u') sum += 21;
        else if(k[i]=='v') sum += 22;
        else if(k[i]=='w') sum += 23;
        else if(k[i]=='x') sum += 24;
        else if(k[i]=='y') sum += 25;
        else if(k[i]=='z') sum += 26;
        else if(k[i]=='A') sum += 27;
        else if(k[i]=='B') sum += 28;
        else if(k[i]=='C') sum += 29;
        else if(k[i]=='D') sum += 30;
        else if(k[i]=='E') sum += 31;
        else if(k[i]=='F') sum += 32;
        else if(k[i]=='G') sum += 33;
        else if(k[i]=='H') sum += 34;
        else if(k[i]=='I') sum += 35;
        else if(k[i]=='J') sum += 36;
        else if(k[i]=='K') sum += 37;
        else if(k[i]=='L') sum += 38;
        else if(k[i]=='M') sum += 39;
        else if(k[i]=='N') sum += 40;
        else if(k[i]=='O') sum += 41;
        else if(k[i]=='P') sum += 42;
        else if(k[i]=='Q') sum += 43;
        else if(k[i]=='R') sum += 44;
        else if(k[i]=='S') sum += 45;
        else if(k[i]=='T') sum += 46;
        else if(k[i]=='U') sum += 47;
        else if(k[i]=='V') sum += 48;
        else if(k[i]=='W') sum += 49;
        else if(k[i]=='X') sum += 50;
        else if(k[i]=='Y') sum += 51;
        else if(k[i]=='Z') sum += 52;
     }
     int n = sum;
     int ck=0;
     for(int i=2;i<n;i++){
        if(n%i==0)
            ck=1;
    }
    if(ck==0)
        cout <<"It is a prime word."<<endl;
    else cout << "It is not a prime word."<< endl;

    }
    return 0;

}
