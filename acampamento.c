#include <stdio.h>
#include <math.h>

int main()
{
    int h1, h2, h3, h4, h5;
    scanf("%d%d%d%d%d", &h1, &h2, &h3, &h4, &h5);

    int h1_h2 = fabs(h1 - h2); 
    int h1_h3 = fabs(h1 - h3); 
    int h1_h4 = fabs(h1 - h4); 
    int h1_h5 = fabs(h1 - h5); 
    int h2_h3 = fabs(h2 - h3); 
    int h2_h4 = fabs(h2 - h4); 
    int h2_h5 = fabs(h2 - h5); 
    int h3_h4 = fabs(h3 - h4); 
    int h3_h5 = fabs(h3 - h5); 
    int h4_h5 = fabs(h4 - h5);

    int dormitorios = 1;

    if (h1_h2 == 1 || h1_h3 == 1 || h1_h4 == 1 || h1_h5 == 1)
    {
        dormitorios++;
    }
    else if (h2_h3 == 1 || h2_h4 == 1 || h2_h5 == 1)
    {
        dormitorios++;
    }
    else if (h3_h4 == 1 || h3_h5 == 1)
    {
        dormitorios++;
    }
    else if (h4_h5 == 1)
    {
        dormitorios++;
    }

    printf("%d", dormitorios);

    return 0;
}