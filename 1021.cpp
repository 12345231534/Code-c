#include <stdio.h>

int tong( int n){
	int sum =0;
	while (n){
		sum += n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int n;
	scanf ("%d", &n);
	int a = tong(n);
	printf("%d", a);
}
