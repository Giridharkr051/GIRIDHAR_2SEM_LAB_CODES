//distance.
#include<stdio.h>
#include<math.h>



int main()
{
    int x1,x2,y1,y2;
    float d;

    printf("enter value of point 1: \n ");
    scanf("%d%d",&x1,&y1);

    printf("enter value point 2:\n");
    scanf("%d%d",&x2,&y2);

    d = sqrt(pow((x2-x1),2) +pow((y2 -y1),2));

    printf("the distance btw the points are %f",d);
    return 0;
}
