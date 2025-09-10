#include<stdio.h>
int main()
{
int x = 1, y = 2, z = 0;
printf("%d\n", x ? y ? y : z : z);
return 10;
}

