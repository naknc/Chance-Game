//NIHAN AKINCI 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game();
int main()
{
   srand(time(NULL));

   int sum,situation,point;

   sum=game();

   switch(sum)
   {
        case 7: case 11:
        situation=1;
            break;

        case 2: case 3: case 12:
        situation=2;
            break;

        default:
        situation=0;
        point=sum;
        printf("Point is %d\n",point);
            break;
   }

   while(situation==0)
   {
       sum=game();

    if(sum==point)
        situation=1;
    else if(sum==7)
        situation=2;
   }

   if(situation==1)
    printf("Player wins");

   else
    printf("Player loses");
}

int game()
{
    int first,second,sum1;

    first=1+rand()%6;
    second=1+rand()%6;
    sum1=first+second;

    printf("Player rolled %d + %d = %d\n",first,second,sum1);

    return sum1;
}
