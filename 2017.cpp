#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	for (int i=1;i<=n;i++){
		int l =1;
		for (int j=1;j<=i;j++){
			printf("%d", l);
			l+=2;
		}
		int x = i*2-3;
		for (int j=x;j>=1;j-=2){
			printf("%d", j);
		}
		printf("\n");
	}
}
