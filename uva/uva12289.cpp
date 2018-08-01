
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {
	int t;
	char k[20];

	scanf("%d", &t);
	while (t--) {
		scanf("%s", k);
		if (strlen(k) > 3)
			printf("3\n");
		else {
			if(k[0] == 'o' &&k[1] == 'n' && k[2] == 'e') printf("1\n");
			else if(k[0] == 'o' && k[1] == 'n') printf("1\n");
			else if(k[0] == 'o' && k[2] == 'e') printf("1\n");
			else if(k[1] == 'n' && k[2] == 'e') printf("1\n");
			else if(k[0] == 't' && k[1] == 'w' && k[2] == 'o') printf("2\n");
			else if(k[0] == 't' && k[1] == 'w') printf("2\n");
			else if(k[0] == 't' && k[2] == 'o') printf("2\n");
			else if(k[1] == 'w' && k[2] == 'o') printf("2\n");
		}
	}

	return 0;
}
