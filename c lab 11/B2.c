//Count frequency of digits in an intege[ex:1223 ma 1 1var 2 2var and 3 1vaar chhe]
#include<stdio.h>
int main()
{
    int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    int rem,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(;num!=0;)
    {
        rem=num%10;
        switch(rem)
        {
            case 1:
            count1++;
            break;

            case 2:
            count2++;
            break;

            case 3:
            count3++;
            break;
            case 4:
            count4++;
            break;
            case 5:
            count5++;
            break;
            case 6:
            count6++;
            break;
            case 7:
            count7++;
            break;
            case 8:
            count8++;
            break;
            case 9:
            count9++;
            break;
            case 0:
            count0++;
            break;
           
        }
         num=num/10;
    }
   if(count1>0)
   {
    printf("digit 1:%d\n",count1);
   }
   if(count0>0)
   {
    printf("digit 0:%d\n",count0);
   }
   if(count2>0)
   {
    printf("digit 2:%d\n",count2);
   }
   if(count3>0)
   {
    printf("digit 3:%d\n",count3);
   }
   if(count4>0)
   {
    printf("digit 4:%d\n",count4);
   }
   if(count5>0)
   {
    printf("digit 5:%d\n",count5);
   }
   if(count6>0)
   {
    printf("digit 6:%d\n",count6);
   }
   if(count7>0)
   {
    printf("digit 7:%d\n",count7);
   }
   if(count8>0)
   {
    printf("digit 8:%d\n",count8);
   }
    if(count9>0)
   {
    printf("digit 9:%d\n",count9);
   }
   return 0;
}