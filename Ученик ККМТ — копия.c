//Исполнители: Янчук Дмитрий и Артамонов Георгий П3-19
//Задча: Разработать проект "Студент ККМТ" по примеру проекта Trade из лабораторного занятий 6

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



     printf("Введите Фамилию 1 ученика: ");
     scanf("%s", stud.name);

     printf("Введите возраст: ");
     scanf("%d", &stud.year);

     printf("Введите Фамилю 2 ученика: ");
     scanf("%s", stud.name1);

     printf("Введите возраст: ");
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
