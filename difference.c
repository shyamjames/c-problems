/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
int a, b, diff;

printf("Enter two numbers: ");
scanf("%d %d", &a, &b);

    
diff = a - b;

    
while (diff < 0) {
    diff = -diff;
    }

printf("The difference is: %d\n", diff);

    return 0;
}