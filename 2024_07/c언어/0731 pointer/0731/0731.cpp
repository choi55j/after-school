#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    double num = 3.14;
    double* ptr = &num;
    double** dptr = &ptr;
    double* ptr2;

    printf("%9p %9p %9d \n", ptr, *dptr,*ptr); // 9 = 9개의 자리수를 의미

    ptr2 = *dptr;
    *ptr2 = 10.99;
    printf("%9g %9g \n", num, **dptr);




    //int arr[2][3][2] = { 
    //    { {1,2},{3,4},{5,6} }, 
    //    { {7,8},{9,10},{11,12} } 
    //};
    //int i, j,k;
    //int sum[2] = { 0,0 };

    //for (i = 0; i < 2; i++)
    //{
    //    for (j = 0;j < 3; j++)
    //        for (k = 0; k < 2; k++)
    //            sum[i] += arr[i][j][k];

    //    printf("[%d]\n", sum[i]);
    //}





    //for (i = 0; i < 3; i++)
    //    for (j = 0; j < 2; j++)
    //        for(k=0;k<2;k++)
    //            printf("%p : %d \n", &arr[i][j][k], arr[i][j][k]); // %p = pointer
}