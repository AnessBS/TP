#include <stdio.h>

int main()
{
    int x,y,z,c;
    float L1,L2,d,d1,d2,r;
    printf("Choose the form you want to cut, either square(1), rectangle(2) or circle(3): \n");
    scanf("%d",&c);
        printf("Give the length and the width of the paper: ");
        scanf("%f %f",&L1,&L2);

    if (c == 1)
    {
        printf("Give the side of the square : ");
        scanf("%f",&d);
        x=L1/d;
        y=L2/d;
        z=x*y;
        printf("We can cut %d squares with the side of %0.2f \n",z,d);
    }
    else if (c == 2)
    {
        printf("Give the length and the width of the rectangle: ");
        scanf("%f %f",&d1,&d2);
        x=L1/d1;
        y=L2/d2;
        z=x*y;
        printf("For the 1st case we can cut %d rectangles ",z);
        x=L1/d2;
        y=L2/d1;
        z=x*y;
        printf("and for the 2nd case we can cut %d rectangles\n",z);

    }
    else if (c == 3)
    {
        printf("Give the radius of the circle: ");
        scanf("%f",&r);
        x=L1/(2*r);
        y=L2/(2*r);
        z=x*y;
        printf("We can cut %d circles with the radius of %0.2f",z,r);

    }
    return 0;
}