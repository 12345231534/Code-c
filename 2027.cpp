#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	char x = 'a';
	for (int i=1;i<=n;i++){
		if(i%2==1){
			for (int j=1;j<=i;j++){
				printf("%c ", x);
				x += 1;
			}
		}
		else{
			char a = x+ i-1;
			for (int j=1;j<=i;j++){
				printf("%c ", a);
				a--;
				x++;
			}
		}
		printf("\n");
	}
}
