/* 
    Shipping companies base their shipping fee on the dimensional weight of a box which exceeds it's actual weight.
    The typical method of calculating dimensional weight is dividing the volume by 166. 
    This program will compute the dimensional weight of a 12" x 10" x 8" box in pounds.
*/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume +165) / 166; /* C by default rounds down, adding 165 ensures we are rounding up */

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}