#include <stdio.h>

int main(void)

{


    int sum = 0;
    //for (int i = 0; i < 6; i++)
    //{
    //    sum = sum + i;
    //}

    int i = 0;
    while (i < 6) {
        sum += i;
        i++;
    }

    printf("sum=%d", sum);


    //float f = 3.14;
    //int i = 2;
    //char c = 'A';

    ////printf("%d", (int)f);

    //float sum = (int)f + i;
    //
    //printf("%c,%s", c, "Hello World!"); // 문자 %s, 캐릭터 %c, 숫자 %d

    //{
    //    printf("%c", '\a');
    //}
    //char ch = 'A';

    //unsigned short age = 1000;

    //printf("%d.%d", age,sizeof(age));

    ////printf("%c", ++ch);
    //printf("%c", ch);













    // true = 1
    // false = 0
    //int i = 0;
    //int j = 1;

    //printf("%d\n", i & j); // and
    //printf("%d\n", i | j); // or
    //printf("%d\n", i ^ j); // xor
    //
    //printf("%d", ~i); // ~은 모든 비트를 반대로

    //printf("%d", j << i); // 옆으로 밀어버린다
    
    //int sum = 0, num1, num2, num3;
    //int hex = 0xA; // 0x가 앞에 나오면 16진수(헥사값)으로 이해해야한다...

    //printf("%d", hex);

   /* for (int i = 0; i < 10; i++)
    {
        sum += i;
    }

    printf("sum=%d", sum);*/

    //printf("세 개의 정수를 입력하시오: ");
    //scanf("%d %d %d", &num1, &num2, &num3);

   /* printf("%d %d %d\n", num1, num2, num3);

    sum = num1 + num2 + num3;

    printf("%d = %d %d %d", sum, num1, num2, num3);*/

    return 0;
}