#include <stdio.h>
char* gpa_calc(int per)
{
    if(per>=90 && per<=100)
  {
     return "A+";
  }
  else if(per>=85 && per<=89)
  {
      printf("\nGPA=3.7");
      printf("\nA");
  }
  else if(per>=80 && per<=84)
  {
      printf("\nGPA=3.3");
      printf("\nB+");
  }
  else if(per>=75 && per<=79)
  {
      printf("\nGPA=3");
      printf("\nB");
  }
  else if(per>=70 && per<=74)
  {
      printf("\nGPA=2.7");
      printf("\nB-");
  }
  else if(per>=65 && per<=69)
  {
      printf("\nGPA=2.3");
      printf("\nC+");
  }
  else if(per>=60 && per<=64)
  {
      printf("\nGPA=2.0");
      printf("\nC-");
  }
  else if(per>=55 && per<=59)
  {
      printf("\nGPA=1.7");
      printf("\nD+");
  }
  else if(per>=50 && per<=54)
  {
      printf("\nGPA=1.3");
      printf("\nD-");
  }
  else if(per>=0 && per<50)
  {
      printf("\nGPA=0.0");
      printf("\nF");
  }
}

int main()
{
    printf("%s",gpa_calc(90));
}
