 //Find out largest number from given three numbers
 #include<stdio.h>
 int main()
 {
    int a,b,c;
    printf("enter number a\n");
    scanf("%d",&a);
     printf("enter number b\n");
     scanf("%d",&b);
      printf("enter number c\n");
      scanf("%d",&c);
      if(a>b)
      {
        if(a>c){
        printf("a is larger\n");
        }
        else{
            printf("c is larger\n");
        }
      }
      else if(b>c)
      {
        printf("b is larger\n");
      }
      else{
        printf("c is larger");
      }
      return 0;
   
 }