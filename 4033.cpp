#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int a[n], b[n];
	for (int i=0;i<n;i++){
		scanf("%d", &a[i]);
		b[a[i]] =1;
	}
	for(int i=0;i<n;i++){
		if (b[a[i]] >=1){
			printf ("%d ", a[i]);
			b[a[i]]=0;
		}
	}
}
