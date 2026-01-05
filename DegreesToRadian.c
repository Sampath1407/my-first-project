#include <stdio.h>
#define pi 3.14
int main(){
    int d,m,s;
    double dd,r;
    printf("enter angle in degree,minute,second format:");
    scanf("%d%d%d",&d,&m,&s);
    dd= d+m/60.0+s/3600.0;
    r=dd*pi/180.0;
    printf("angle in radian is %lf\n",r);
    return 0;
}
