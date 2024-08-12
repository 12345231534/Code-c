#include <stdio.h>

int isOddMore(long long n){
	int le =0;
	int chan =0;
	int s;
	while (n>0){
		s = n%10;
		if (s%2 ==0){
			chan++;
		}
		else {
			le++;
		}
		n/=10;
	}
	if (chan<le){
		return 1;
	}
	return 0;
}
int isOdd(long long n){
	if (n%2!=0){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		if(isOdd(n) && isOddMore(n)){
			printf ("YES\n");
		}
		else {
			printf ("NO\n");
		}
	}
}
