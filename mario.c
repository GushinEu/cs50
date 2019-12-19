#include <stdio.h>
void main (void)
{
	char a = '#';
	int y;

	printf("Write a number :");
	scanf("%d",&y);
	for(int z = 1; z <= y; z++){

		for(int q = y; q > z; q--){
			printf(" ");
		}
		for(int x = 0; x < z; x++){
			
			printf("%c",a);
		}
		printf("\n");
}
	return;
}

