/*FIg 3.10: fig03_10.c
analysis of examination results */

#include <stdio.h>

int main(void){
  int passes = 0 ;
  int failures = 0;
  int student = 1;
  int result ;

  while (student <= 10){
    printf("Enter result (1=pass, 2=fail): ");
    scanf("%d", &result);

    if( result == 1){
      passes = passes + 1 ;
    }
    else{
      failures = failures + 1;
    }

    student = student + 1;
  }

  printf("Passed %d\n", passes);
  printf("Failed %d\n", failures);

  if(passes > 8 ){
    printf("Bonus to Instructor!\n");
  }

  return 0;
}
