#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	long long max1= -10e9-1,  max2 = -10e9-1;
	for (int i=0;i<n;i++){
		if (a[i] > max1) {
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i] > max2){
			max2 = a[i];
		}
	}
	printf ("%lld %lld ", max1, max2);
}
