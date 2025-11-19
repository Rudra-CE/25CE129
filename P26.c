#include <stdio.h>
#include <math.h>

int validateTriangle(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
/*int validateTriangle(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    } else {
        return 0;
    }
}
*/

float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%f", &a);
    printf("Side b: ");
    scanf("%f", &b);
    printf("Side c: ");
    scanf("%f", &c);

    if (validateTriangle(a, b, c)) {
        float area = calculateArea(a, b, c);
        printf("The sides form a valid triangle.\n");
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
    printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
}





