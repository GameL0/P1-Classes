#include <stdio.h>

int main()
{   
    int m3, taxa, total;
    scanf("%d", &m3);

    if (m3 >= 0 && m3 <1001)
    {
        if (m3 < 11)
        {
            total = 7;
        }
        else if (m3 < 31)
        {
            taxa = ((m3 + 1) - 11) * 1;
            total = taxa + 7;
        }
        else if (m3 < 101)
        {
            taxa = ((31 - 11) * 1) + (((m3 + 1) - 31) * 2);
            total = taxa + 7;
        }
        else
        {
            taxa = ((31 - 11) * 1) + ((101 - 31) * 2) + (((m3 + 1) - 101) * 5);
            total = taxa + 7;
        }
    
    printf("%d", total);
    }

    return 0;
}