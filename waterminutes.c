#include <stdio.h>
void main (void)
{
int oneMinute = 6,
    bottle = oneMinute*2,
    howMuch,
    total;   

printf("Введите количество минут?");
scanf("%d",&howMuch);
total = howMuch*bottle;
printf("Вы тратите %d литров воды за %d минут.\n",total,howMuch);

	return ;
}

