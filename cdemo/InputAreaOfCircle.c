#include <stdio.h>

float  areaOfCircle(float r)
{
	double A = 3.14*r*r;
	return A;
}

int main(int argc, char* argv[])
{
  if (argc !=3)
   {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    char input1[256], input2[256];
    printf("Input Lower Bound\n");
    fgets(input1, 256, stdin);
    int lowerbound;
    if (sscanf(input1, "%d", &lowerbound)==1);
    printf("Input Upper Bound\n");
    fgets(input2, 256, stdin);
    int upperbound;
    if (sscanf(input2, "%d", &upperbound)==1);
    for (int r=lowerbound; r<=upperbound; r++)
        {
                float area;
                area = areaOfCircle(r);
                printf("Area=%f\n",area);
        }
    return 1;
   }
 int arg1;
 int found1 = sscanf(argv[1], "%d", &arg1);
 if (found1 !=1)
   {
    printf ("first arg not an integer\n");
    char input1[256], input2[256];
    printf("Input Lower Bound\n");
    fgets(input1, 256, stdin);
    int lowerbound;
    if (sscanf(input1, "%d", &lowerbound)==1);
    printf("Input Upper Bound\n");
    fgets(input2, 256, stdin);
    int upperbound;
    if (sscanf(input2, "%d", &upperbound)==1);
    for (int r=lowerbound; r<=upperbound; r++)
        {
                float area;
                area = areaOfCircle(r);
                printf("Area=%f\n",area);
        }

    return 1;
   }
int arg2;
 int found2 = sscanf(argv[2], "%d", &arg2);
 if (found2 !=1)
   {
    printf ("second arg not an integer\n");
    char input1[256], input2[256];
    printf("Input Lower Bound\n");
    fgets(input1, 256, stdin);
    int lowerbound;
    if (sscanf(input1, "%d", &lowerbound)==1);
    printf("Input Upper Bound\n");
    fgets(input2, 256, stdin);
    int upperbound;
    if (sscanf(input2, "%d", &upperbound)==1);
    for (int r=lowerbound; r<=upperbound; r++)
        {
                float area;
                area = areaOfCircle(r);
                printf("Area=%f\n",area);
        }
   return 1;
   }

for (int r=arg1; r<=arg2; r++)
        {
                float area;
                area = areaOfCircle(r);
                printf("Area=%f\n",area);
        }

}
