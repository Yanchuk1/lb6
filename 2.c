// Исполнитель: Янчук Дмитрий Сергеевич
// Группа: П3-19
// C клавиатуры ввести строку состоящую из нескольких слов, разделенных одним пробелом. Для хранения строки использовать новый тип данных TEXT.Выделенный с помощью typedef.

#include <stdio.h>
#include <stdlib.h>

typedef char TEXT;

void kl_slov()
{
TEXT w[20];
int slov, count = 0, i;
printf("Введите предложение: ");
gets(w);

for(i=0; i<strlen(w)-1; i++)

if((w[i]==' ') && (w[i+1]!=' '))

count++;

if(w[0]!=' ')

count++;

printf("В предложение: %d слова", count);
}









int main()
{
setlocale(LC_ALL, "Rus");

kl_slov();





    return 0;
}
