//�����������: ����� ������� � ��������� ������� �3-19
//�����: ����������� ������ "������� ����" �� ������� ������� Trade �� ������������� ������� 6

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

 typedef struct Student
 {
  char name[10];
  char name1[10];
  char name2[10];
  int year;
  int year1;
 } Student;


 //#define s 6

 int main()
 {
   Student stud;

   setlocale(0, "");

   int i;
   float sr;
   Student tmp;



     printf("������� ������� 1 �������: ");
     scanf("%s", stud.name);

     printf("������� �������: ");
     scanf("%d", &stud.year);

     printf("������� ������ 2 �������: ");
     scanf("%s", stud.name1);

     printf("������� �������: ");
     scanf("%d", &stud.year1);

     sr = (stud.year + stud.year1)/2.;
     printf("%f", sr);


/*
   for(j=0; j<s; j++)
   {
       for(i=0; i<s-1; i++)
       {
           if(stricmp(stud[i].name, stud[i+1].name)>0)
           {
               tmp = stud[i];
               stud[i] = stud[i+1];
               stud[i+1]=tmp;
               printf("%s", tmp);

           }

       }

   }
*/

 }
