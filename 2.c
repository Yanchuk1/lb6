// �����������: ����� ������� ���������
// ������: �3-19
// C ���������� ������ ������ ��������� �� ���������� ����, ����������� ����� ��������. ��� �������� ������ ������������ ����� ��� ������ TEXT.���������� � ������� typedef.

#include <stdio.h>
#include <stdlib.h>

typedef char TEXT;

void kl_slov()
{
TEXT w[20];
int slov, count = 0, i;
printf("������� �����������: ");
gets(w);

for(i=0; i<strlen(w)-1; i++)

if((w[i]==' ') && (w[i+1]!=' '))

count++;

if(w[0]!=' ')

count++;

printf("� �����������: %d �����", count);
}









int main()
{
setlocale(LC_ALL, "Rus");

kl_slov();





    return 0;
}
