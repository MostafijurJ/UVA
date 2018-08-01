#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long  x, k, T, p, q;

	scanf("%lld", &T);

	while(T)
	{
		scanf("%lld %lld", &x, &k);

		q = x % k;
		if(x >= k)
			p = (x - q) / (x / k) - q;
		else
			p = 0;
		printf("%lld %lld\n", p, q);

		T--;
	}
    return 0;
}
