#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num>0)
    {
       printf("%d is positive",num);
    }
    else if(num<0)
    {
        printf("%d is negative",num);
    }
    else{
          printf("num is Zero");
    }
    return 0;
}