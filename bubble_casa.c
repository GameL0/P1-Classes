#include <stdio.h>

void print_array(int i, int n, int array[]){

    if (i < n)
    {
        if (i == n - 1)
        {
            printf("%d\n", array[i]);
        }
        else
        {
            printf("%d ", array[i]);
        }

        print_array(i + 1, n, array);
    }
}

void bubble(int i, int n, int array[]){
    
    if(i < n - 1)
    {
        if (array[i] > array[i + 1])
        {
            int aux = array[i];
            array[i] = array[i + 1];
            array[i + 1] = aux;
        }

        bubble(i + 1, n, array);
    }
}

void bubble_sort(int i, int n, int array[]){
    if (i < n)
    {
        bubble(0, n, array);
    
        bubble_sort(i + 1, n, array);
    }
}


void ler_array(int i, int n, int array[]){

    if (i < n)
    {
        scanf("%d", &array[i]);

        ler_array(i + 1, n, array);
    }
}


int main(){
    int n;

    scanf("%d", &n);
    
    int array[n];

    ler_array(0, n, array);

    bubble_sort(0, n, array);

    print_array(0, n, array);

    return 0;
}