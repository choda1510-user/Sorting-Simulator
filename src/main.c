#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int size;
    int arr[256];
    printf("size: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }


    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
