  #include<stdio.h>
  int main()
  {
      int year;
      printf("Enter the year\n");
      scanf("%d",&year);
      if(year%100==0)
      {
          if(year%400==0)
          {
               printf("Year %d is leap year ",year);
          }
          else{
                printf("%d is not a leap year",year);
          }
      }
      else
      {
             if(year%4==0)
             {
                   printf("year %d is leap year",year);
             } 
             else{
                      printf("not leap year");
             }             
      }
      
return 0;
  }
      
      
  