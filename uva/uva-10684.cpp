
#include<bits/stdc++.h>

using namespace std;

int N, n;

int main() {
    for(;;) {
        scanf("%d", &N);
        if(N == 0) break;

        int sum = 0, max = -1000;
        for(int i = 0; i < N; i++) {
            scanf("%d", &n);
            sum += n;

            if(sum > max)
                max = sum;
            if(sum < 0)
                sum = 0;
        }

        if(sum > 0)
            printf("The maximum winning streak is %d.\n", max);
        else
            printf("Losing streak.\n");
    }
}
