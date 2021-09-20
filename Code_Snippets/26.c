#include<stdio.h>
int main(){
	int n,rows,col;
	printf("Enter the numer of rows: ");
	scanf("%d",&n);
	for(rows=n;rows>=1;rows--){
		for(col=1;col<=rows;col++){
			printf("%d ",rows);
		}
		printf("\n");
	}
}
