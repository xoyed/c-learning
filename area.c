// area =sqrt((a*(s-a)*(s-b)*(s-c)))
// s=(a+b+c)/2
#include <stdio.h>
#include<math.h>
int main (){
double a,b,c,area,s;   
printf("enter 3 value:");
scanf("%lf %lf %lf",&a,&b,&c);

s=(a+b+c)/2;
area=sqrt(a*(s-a)*(s-b)*(s-c));
printf("area is=%.2lf\n",area);
return 0;





}