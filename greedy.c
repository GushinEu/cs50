#include <stdio.h>
void main (void)
{
	float money;
	int newMoney,
	count=0;

	printf("Введите сумму в $, ответ - количество монет сдачи \n");
	scanf("%f",&money);
	newMoney = money*100;

	while(newMoney >= 25){
		newMoney -= 25 ;
		count++;
	}
	while(newMoney >= 10){
		newMoney -= 10;
		count++;
	}
	while(newMoney >= 5){
		newMoney -= 5;
		count++;
	}
	while(newMoney >= 1){
		newMoney -= 1;
		count++;
	}
	printf("%d\n", count);

	return ;
}