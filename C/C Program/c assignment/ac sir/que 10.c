#include <math.h>
#include <stdio.h>
void final_func(double);
void passing_func(void(), double);
int main() {
    double var;
    printf("Enter a value of type double: ");
    scanf("%lf", &var);
    passing_func(final_func, var);  // sends address of final_function
    return 0;
}
void final_func(double a) {
    printf("\nSquare of given number is: %lf", pow(a, 2));
}
void passing_func(void f(), double var) {  // receive address of final_function
    f(var);
}
