#include <stdio.h>
int main()
{
    int a = 4,ptra;
    int *ptro = &a;
    float b = 8.34;
    float *btro = &b;
    printf("%d\n", a);
    printf("%d\n", *ptro);
    printf("%d\n", &a);
    printf("%d\n", &ptro);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int *ff = arr;
//     printf("%d\n", &arr[0]);
//     printf("%d\n", &arr[3]-2);
//     printf("%d\n", &arr[0]+1);
//     printf("%d\n", arr[3] + 1);
//     printf("%d\n", &*ff+1);
//     printf("%d\n", &arr[0]);
//     printf("%d\n", &arr[1]);
//     printf("%d\n", &arr[2]);
//     printf("%d\n", &arr[3]);
//     printf("%d\n", &arr[4]);
//     printf("%d\n", &arr[5]);
//     printf("%d\n", &arr[6]+1);

//     return 0;
// }