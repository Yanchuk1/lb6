// »сполнитель: янчук ƒмитрий —ергеевич
// √руппа: ѕ3-19
// »спользу€ typedef определить новые имена дл€ всех стандартных типо. ќбъ€вить несколько переменных новых типов данных, задать им значение, вывести на экран.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(0, "");
typedef unsigned int my_i32;
typedef float my_f32;
typedef char my_c32;
typedef double my_d32;


my_i32 x;
my_f32 y;
my_c32 z[6]="Slovo";
my_d32 i;

x=12;
y=5.13;
i=53.3146;

printf("%d\n",x);
printf("%0.2f\n", y);
printf("%s\n", z);
printf("%0.4f", i);

return 0;
}
