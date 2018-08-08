#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float f(float x)
{
return(x*x*x-5*x-8);
}
int main()
{
float a,b,c=0;
float epsilon=0.0002;
printf("Sol aralik:");
scanf("%f",&a);
printf("Sag aralik:");
scanf("%f",&b);

printf("f(%f)=%f\n",a,f(a));
printf("f(%f)=%f\n",b,f(b));

       if(f(a)*f(b)>0){
    printf("bu aralikta kok bulunamadi!");
    return 0;
}
 do {
    c=(a+b)/2;

    printf("%f %f\n",c,fabs(b-a));
     if (f(a)*f(c)<0){
          b=c;
    }
     else if(f(b)*f(c)<0){
        a=c;
     }
}
while(fabs(b-a)>epsilon);
printf("koku buldunuz: %f %f\n",c,f(c));

 return 0;
}
