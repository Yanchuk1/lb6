// Исполнитель: Янчук Дмитрий Сергеевич
// Группа: П3-19
// Ввести с клавиатуры номер дня недели. Вывести на экран его название.Использовать перечисление (enum)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum week
{
Monday,
Tuesday,
Wednesday,
Thursday,
Friday,
Saturday,
Sunday
};

int main()
{
setlocale(LC_ALL, "Rus");
int d;

printf("Введите номер дня из недели: ");
scanf("%d", &d);

switch(d)
{
case(1): printf("Monday"); break;
case(2): printf("Tuesday"); break;
case(3): printf("Wednesday"); break;
case(4): printf("Thursday"); break;
case(5): printf("Friday"); break;
case(6): printf("Saturday"); break;
case(7): printf("Sunday"); break;
default: printf("ERROR");
}
return 0;
}
