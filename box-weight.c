/*
    Shipping companies base their shipping fee on the dimensional weight of a box which exceeds it's actual weight.
    The typical method of calculating dimensional weight is dividing the volume by 166.
    This program will compute the dimensional weight of a 12" x 10" x 8" box in pounds.
*/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter height of box: \n");
    scanf("%d", &height);
    printf("Enter length of the box: \n");
    scanf("%d", &length);
    printf("Enter width of the box: \n");
    scanf("%d", &width);
    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", volume+165);

    return 0;
}
