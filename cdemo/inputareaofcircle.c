#include <stdio.h>
float radius;
float range;
int i = 0;

int getrange()
  {
    printf("number of radiuses you want\n");
    scanf("%d\n", &range);
    return range;
  }


int Circle ()
  {
    int area;
    printf("radius= \n");
    scanf("%d", &radius);
    area=3.14*radius*radius;
    radius++;
    return area;
  }


int main ()
{
	int temp2 = getrange();
	int temp3 = Circle();
        for (i=0 ; i<temp2 ; i=i+1)
        {
                int temp = Circle();
                printf ("%d\n", temp);
        }
}
