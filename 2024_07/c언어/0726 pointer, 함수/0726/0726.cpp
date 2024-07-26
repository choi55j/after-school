#include <iostream>
#include <stdio.h>

void ShowArray(int* param, int len)
{
    int i;

    for (i = 0; i < len; i++)
    {
        printf("%d ", param[i]++);
        printf("\n");
    }
}
void Swap(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    // call by reference

    int num1 = 10, num2 = 20;
    printf("num1 num2 : %d %d\n", num1, num2);
    Swap(&num1, &num2);
    printf("num1 num2 : %d %d\n", num1, num2);



    //int arr1[3] = { 1,2,3 };
    //int length = sizeof(arr1) / sizeof(int);

    //ShowArray(arr1, length);

    //for (int i = 0; i < length; i++)
    //{
    //    printf("%d", arr1[i]);
    //    printf("\n");
    //}


    //char a = 'A';
    //char st[] = "Hello\0     world"; // 끊는다는 것을 컴퓨터는 알기 위해서 \0을 붙인다?? 이러면 끝??

    //printf("%s , %d", st,sizeof(st));





    //int arr[3] = { 11,22,33 };

    //int* ptr = arr;

    //printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); // +1되면 ptr 변수에 저장된 첫번째 값에서 그 다음 번째 출력 의미


    //long arr[3] = {0, 1, 3}; // 4x3 = 12byte

    //printf("%d\n", sizeof(long long));

    //for (int i = 0; i < sizeof(arr) / sizeof(long); i++) // sizeof 그 변수가 가지고 있는 메모리의 길이(byte길이)
    //{
    //    printf("%d[%p], ", arr[i],&arr[i]);
    //}




    //int i = 10;
    //int* j;

    //j = &i;

    //printf("%d , %p", i, j);
}
