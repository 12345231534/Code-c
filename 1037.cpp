#include <stdio.h>
int main(){
	int a,b;
	long long sum =0;
	scanf("%d %d", &a, &b);
	if (a>b){
		int tmp = a;
		a =b;
		b= tmp;
	}
	for (int i =a;i<=b;i++){
		sum += i;
	}
	printf ("%lld", sum);
}
