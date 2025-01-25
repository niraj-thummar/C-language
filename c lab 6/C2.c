/*. In digital world colors are speciƒed in RGB format, with values of R, G, and B varying on
integer scale from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK)
format with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Convert RGB
color to CMYK as per formula:
- White=Max(red/255,green/255,blue/255)
- Cyan=(white - red/255)/white
- Magenta=(white - green/255)/white
- Yellow=(white - blue/255)/white
- Black=1 - white
Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/

#include<stdio.h>
int main()

{
    int R,G,B;
    float white;
    float c,m,y,k;
    printf("entre the value of R:");
    scanf("%d",&R);
     printf("entre the value of G:");
    scanf("%d",&G);
     printf("entre the value of B:");
    scanf("%d",&B);
    white=(R/255,G/255,B/255);
    if(white==0)
    {
        c=0;
        m=0;
        y=0;
        k=1;
    }
    else{
 c=(white - R/255)/white;
 m=(white - G/255)/white;
 y=(white - B/255)/white;
 k=1 - white;
 }
 printf("cyan = %.2f\n",c);
 printf("megenta = %.2f\n",m);
 printf("yellow = %.2f\n",y);
 printf("black = %.2f\n",k);
 return 0;
}
