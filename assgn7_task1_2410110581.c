#include <stdio.h>

int id, n;
float w[100],  h[100],  BMI[100];

void compute_bmi(int n, float*w, float*h, float*BMI)
{
  for (int i = 0; i<n; i++)
  {
    BMI[i]=w[i]/(h[i]*h[i]);
  }
}

void print_bmi_details(int id, float*h, float*w, float*BMI) 
{
  printf("printing the weight of student %d : %f\n",id,w[id-1]);
  printf("printing the height of student %d : %f\n",id,h[id-1]);
  printf("printing the BMI of student %d : %f\n",id,BMI[id-1]);


  if (BMI[id-1]>=17 && BMI[id-1] < 18.5) {
    printf("BMI category of student %d: mild thinness\n",id);
    }
  else if (BMI[id-1] >= 18.5 && BMI[id-1] < 25) {
    printf("BMI category of student %d: normal \n", id);
    }
  else if (BMI[id-1]>=25) {
    printf("BMI category of student %d: overweight \n", id);
    }
  else {
    printf("BMI category of student %d: inhumane \n", id);
    }
}

int main() {
  printf("enter the number of students: \n");
  scanf("%d",&n);
  
  for (int i=0;i<n;i++)
  {
    printf("enter the weight of student %d (in kg)", i+1);
    scanf("%f",&w[i]);
    printf("enter the height of student %d (in metres)",i+1);
    scanf("%f",&h[i]);
  }
  compute_bmi(n,w,h,BMI);

  printf("enter the student who's BMI you wish to see: \n");
  scanf("%d",&id);

  print_bmi_details(id,w, h, BMI);

return 0;
} 
