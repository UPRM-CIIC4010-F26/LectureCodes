#include<stdio.h>
#include<math.h>

int main() {
    float a;
    float b;
    float c;
    printf("What is side A?");
    scanf("%f", &a);
    printf("What is side B?");
    scanf("%f", &b);
    printf("What is side C?");
    scanf("%f", &c);

    float s = (a + b + c)/2;

    // Area
    float A = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("%f", A);

}