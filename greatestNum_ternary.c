#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
     max=(num1>num2&&num1>num3)?num1:(num2>num3?num2:num3);
     printf("Greatest number among %d %d %d = %d ",num1,num2,num3,max);
     return 0;
}