#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int ans = ceil(4.4);
    int result = floor(4.4);
    int ans1 = round(4.5);
    double ans2 = sqrt(20);
    int ans3 = pow(2, 3);
    int ans4 = abs(-5);

    printf("Ceil: %d\n", ans);
    printf("Floor: %d\n", result);
    printf("Round: %d\n", ans1);
    printf("Sqrt: %lf\n", ans2);
    printf("Pow: %d\n", ans3);
    printf("Abs: %d", ans4);
    return 0;
}