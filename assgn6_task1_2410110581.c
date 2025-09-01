#include <stdio.h>
int main()
{

int n,a;
float weight[100], height[100], bmi[100];
printf("enter number of students");
scanf("%d", &n);
for (int i=0; i<n;i++)
{
printf("details of student %d:",i+1);
printf("weight:");
scanf("%f",&weight[i]);
printf("height:");
scanf("%f",&height[i]);
bmi[i]=weight[i]/(height[i]*height[i]);
if (bmi[i]>=17 && bmi[i]<18.5)
{printf("mild thinness\n");}
else if(bmi[i]>=18.5 && bmi[i]<25)
{printf("normal\n");} 
else if(bmi[i]>25)
{printf("overweight\n");}
else
{printf("inhuman status\n");}
}
printf("enter the id student for details:");
scanf("%d",&a);
for (int j=0; j<n;j++)
{
if (a==(j+1))
{printf("weight: %f \n height: %f \n BMI: %f \n", weight[j], height[j], bmi[j]);
if (bmi[j]>=17 && bmi[j]<18.5)
{printf("mild thinness\n");}
else if(bmi[j]>=18.5 && bmi[j]<25)
{printf("normal\n");}
else if(bmi[j]>25)
{printf("overweight\n");}
else 
{printf("inhuman status\n");}

break;
}
}


return 0;
}
