#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int x = n%10;
	while (n >=10){
		n/=10;
	}
	printf ("%d %d", n, x);
	return 0;
}
