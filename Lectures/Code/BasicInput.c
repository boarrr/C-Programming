  /* Program to demonstrate simple standard input */

  #include <stdio.h>

  int main(void)
  {
    int var = 0;  
    printf("Enter any whole number: ");

    // Ensure you include the & character before the variable name
    scanf("%d", &var);  
    
    printf("Var contains %d\n", var); 

    return 0;
  }