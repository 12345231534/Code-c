#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int a[n][n];
	int m =n;
	int x =n;
	for (int i=0;i<n;i++){
		int m =n-i-1;
		
		for (int j = n-1;j>=0;j--){
			if(m!=0){
				a[i][j] = m;
				m--;
			}
			else{
				a[i][j] =0;
			}
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf ("%d ", a[i][j]);
		}
		printf("\n");
	}
}
