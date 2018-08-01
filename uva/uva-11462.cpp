#include<bits/stdc++.h>

using namespace std;

int arr[101];

int main()
{
    while(1){
        int n;
        cin >> n;
        if(n==0)
            return 0;
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            arr[k]++;
        }
        int check=0;
        for(int i=0; i<=100; i++){
            for(int j=0; j<arr[i]; j++){
                check++;
                cout << i;
                if(check!=n)cout << " ";
            }
        }
        cout << endl;
        for(int i=0; i<=100; i++)
            arr[i] = 0;
    }
    return 0;
}
