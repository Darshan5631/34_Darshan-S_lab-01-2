#include <stdio.h>
int main() {
  int num1,num2;
  char op;
  float result;
  printf("ENTER TWO INTEGERS\n");
  scanf("%d%d",&num1,&num2);
  printf("ENTER THE OPERATOR\n");
  printf(" enter + for addition\n");
  printf("- for subtration\n");
  printf("* for multiplication\n");
  printf("/ for division\n");
  printf("%% for remainder calculation\n");
  scanf(" %c",&op);
  if(op=='+')
  {
    result=num1+num2;
  }
  else if(op=='-')
  {
    result=num1-num2;
  }
  else if(op=='*')
  {
    result=num1*num2;
  }
  else if(op=='/')
  {
    if(num2==0)
    {
      printf("ENTER A NON 0 VALID NUMBER\n");
      return(-1);
    }
    else
    {
      result=num1/num2;
    }
  }
  else if(op=='%')
  {
    if(num2==0)
    {
    printf("ENTER A VALID NUMBER\n");
    return(-1);
  }
  else
  {
    result=num1%num2;
  }
  }
  else{
    printf("INVALID OPERATION\n");
    return 1;
  }
  printf("RESULT=%f\n",result);
  return 0;
}