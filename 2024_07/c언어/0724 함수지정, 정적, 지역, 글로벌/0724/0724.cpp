#include <iostream>

//int main()
//{
    //int i = 0;
    //float j = 1.1;
    //char c = 'c';
    //bool b = false;  //true

    //int x = 0;

    //x = b ? 1 : 2;

    //printf("%d", x);
    //printf(b ? "true" : "false");

    //printf("%f, %b", j, b);
 

    //for (int i = 0; i < 5; i++)
    //{
    //    for (int j = 0; j < 5; j++)
    //    {
    //        printf("%d, %d\n", i, j);
    //    }
    //}

    //while (x < 5)
    //{
    //    x++; // 안쓰면 무한 반복
    //}

    //int i = 0;
    //bool x = true;

    //if (!x) // ! 반대
    //{
    //    printf("i=0");
    //}
    //else  if (i) {
    //    printf("i=1");
    //}
    //else {
    //    printf("없어 너");
    //}

    //while (true)
    //{
    //    if (i == 10) // 실행이 하나일 경우 {} 생략 가능, if 바로 옆에 실행문 쓰는거 가능
    //        continue;
    //    i++;
    //}
    //char i;
    //// 분기문 : if, switch

    //printf("a~c 까지 원하는 글자를 입력하시오! : ");
    //scanf("%c", &i); // 입력 받기

    //switch (i) { // 스위칭 하려는 변수를 스위치문 안에 쓴다.
    //    case 'a':
    //        printf("a");
    //        break;
    //    case 'b':
    //        printf("b");
    //        break;
    //    case 'c':
    //        printf("c");
    //        break;
    //    default: // 모두 아닐 경우
    //        printf("default");
    //}

//    int n = 0;
//    // goto : 무조건 실행
//    if (n == 0)
//        goto ONE;
//    else if (n == 1)
//        goto TWO;
//
//ONE:
//    printf("one");
//    goto END;
//
//TWO:
//    printf("two");
//    goto END;
//
//END:
//    return 0;



//    return 0;
//}

//int global = 10; // 글로벌 함수
//int Add(float n1, float n2);

//int main()
//{
//    int s = Add(1, 2);
//    return 0;
//}

//int Add(float n1, float n2) // 함수 정의
//{
//    int sum = n1 + n2; // 정의 할때 형태와 똑같아여 한다(int, float, char), sum은 지역 변수 Add 안에서만 활용 가능
//    int global = 5; // 글로벌 함수, 로컬 함수 둘 다 있으면 로컬 함수가 우선시 된다
//    printf("%d ... %d", global, sum); // global 글로벌 함수여서 이 파일 어디서든지 사용 가능
//
//    return sum;
//}

//void Add(float n1, float n2) // 함수 정의 void 비어 있다
//{
//    int sum = n1 + n2;
//    printf("%d", sum);
//}

void SimpleFunc(void)
{
    static int num1 = 0; // 정적 변수 한 번 값이 지정되면 그 값을 계속 유지
    int num2 = 0;
    num1++, num2++;
    printf("static : %d, local : %d ", num1, num2);
}
int main()
{
    int i;
    for (i = 0; i < 5; i++)
        SimpleFunc();

    return 0;
}