#include <stdio.h>
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		int odd =0, even = 0;
		scanf ("%d", &n);
		while (n !=0){
			if (n%2 ==1) {
				++odd;
			}
			else ++even;
			n/=10;
		}
		printf ("%d %d", odd, even);
		printf ("\n");
		
	}
	
}
