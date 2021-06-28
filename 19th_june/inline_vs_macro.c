#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

#define SQUARE(X) (X*X)

static inline int square(int x){
  return x*x;
}

int main(){
  printf(" %d\n",SQUARE(2+3));
  printf(" %d",square(2+3));
  return 0;
}

/* Here, The macro is expanded as 2 + 3 * 2 + 3 instead of (2+3)*(2+3) and therefore, due to the precedence rule, the output with macros is 11 instead of 25. 
 But with inlone function, this abnormality does not happen
 */
