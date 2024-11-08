#include <stdio.h>

int main() {
  double weight;
  int value;
  printf("Enter your weight in pounds: \n");
  scanf("%f", &weight);
  // Platinum is $1770 / pound
  // 14.5 troy ounces in 1 pound
  value = 1770.0 * weight * 14.5;
  printf ("Your weight in platinum costs $%.4f. \n", value);
  printf("The cost in octal is: %o\n", (int)value);
  printf("The cost in hexadecimal is: %x\n", (int)value);
}

  // 1. 165 punds - Your weight in platinum costs $4234725.00. 

  // 4. using %f %0.0000, using %d $0000 
  //    %f: Use this for float or double values to display them with a decimal part. %d: Use this for int values to display whole numbers.

  // 5. control characters (like newline or tab) will perform their respective actions, while characters like null (0) will not display anything



