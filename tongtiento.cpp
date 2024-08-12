#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
		
	}
	long long prefix[n];
	for (int i=0;i<n;i++){
		if (i==0) prefix[0]= a[0];
		else prefix[i] = prefix[i-1] + a[i];
	}
	int l, r;
	scanf("%d%d", &l, &r);
	l--; r--;
	if (l==0) printf ("%lld",prefix[r]);
	else printf ("%lld", prefix[r]-prefix[l-1]);
}
