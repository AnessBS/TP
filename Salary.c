#include <stdio.h>

int main()
{
    int hb,hs;
    float sb,sf;
    printf("Give the number of basic working hours: ");
    scanf("%d",&hb);
    printf("Give the number of supplementary working hours: ");
    scanf("%d",&hs);
    sb=(hb*3.3)+(hs*4.39);
    sf=sb-(sb*2.2/100);
    printf("The salary of this worker with %d basic working hours and %d supplementary working hours is %.3f",hb,hs,sf);
    return 0;
}