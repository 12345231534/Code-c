#include <stdio.h>;
int main(){
	int t;
	scanf ("%d/n", &t);
	while (t--){
	int n;
	scanf("%d", &n);
	int k=n;
	int m;
	while (k/10 >=1){
		 k /=10;
		 m=k;

	}
	if (m == n%10){
		printf ("YES\n");
		
	}
	else printf ("NO\n");
	
}
return 0;
}
