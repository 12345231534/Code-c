#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int x =1;
	for (int i=1;i<=n;i++){
		if(i%2==1){
			for (int j=1;j<=i;j++){
				printf("%d ",x);
				x++;
			}
		}
		else{
			int m =x+i-1;
			for (int j=1;j<=i;j++){
				printf("%d ", m);
				m--;
				x++;
			}
		}
		printf("\n");
	}
}
