#include <iostream>
#include <vector> //c의 : array 

using namespace std; // 아래 std 생략 가능

//void Recursive(int num)
//{
//    if (num <= 0) return;
//    printf("%d", num);
//
//    Recursive(num - 1);
//}



int main()
{
    int arr[3] = { 0,1,2 }; // 인티저 포인터 변수가 된다?? 뭔 말이지

    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]); // 주소가 4씩 늘어난다 왜냐 인트가 4바이트기 때문
    printf("%p\n", &arr[2]);

    return 0;




    //int num = 10;
    //int* ptr1 = &num;
    //int* ptr2 = ptr1;

    //(*ptr1)++;
    //(*ptr2)++;

    //printf("%d", num);
    //return 0;


    // 포인터 : 메모리에 직접 접근 가능하다, 데이터를 저장하는 곳의 주소를 말한다.
    // 포인터 변수는 데이터를 저장하는 곳의 주소를 저장하고 있다.
    //int num = 7;
    //int *pnum; // 변수 앞에 * 이 붙으면 포인터 변수 이다. 포인터 변수는 p를 붙여줌
    //
    //pnum = &num; // 주소를 가지고 오려면 &

    //printf("%d", pnum); // *을 붙이면 포인터에 저장되 있는 실제 값을 불러온다, 안붙이면 주소를 불러온다

    //return 0;

    //char a = 'a';
    //char str[] = "Good morning!"; // 문자열은 char 형의 array라 말 할 수 있다
    //
    ////printf("%s",str);

    //for (int i = 0; i < size(str); i++) {
    //    printf("%c", str[i]);
    //}
    //return 0;




    // 섭씨 화씨 바꾸기 (해야 됨)

    //printf("섭씨로 바꾸고 싶다면 : 1, 화씨로 바꾸고 싶다면 : 2");
    //int num = 0;
    //scanf("%d", &num);
    //printf("%d", num);



    //Recursive(5);
    //return 0;



    //// 거꾸로 출력!
    //vector<int> num_list = { 1,2,3,4,5 };
    //reverse(begin(num_list), end(num_list));
    //for (int i = 0; i < num_list.size(); i++) {
    //    cout << num_list[i] << " ";
    //}
    //return 0;






    //vector<int> v = { 1,2,3 };
    //cout << "v[1] : " << v[1] << "\n";
    //cout << "v.back() : " << v.back() << "\n";
    //v.push_back(10);
    //cout << "v.back() <added> : " << v.back() << "\n";

    //cout << "v.size() : " << v.size() << "\n";
    //v.push_back(12);
    //v.push_back(14);
    //v.push_back(16);
    //v.push_back(18);
    //cout << "v.size() <added> : " << v.size() << "\n";



    //vector<int> v(10,-1); // vector 선언, (10) : 개수, -1 : 10개를 다 이것으로 채운다

    //for(int i=0;i<10;i++)
    //    cout << v[i] << "\n";

    //v.clear(); // 다 지운다
    //v.push_back(2); // 밀어넣는거?
    //cout << v.size(); // 개수
    //cout << v.front() << v.back() << "\n"; // 맨앞, 맨뒤
    //cout << v.at(3) << "\n"; // 특정 위치




    //int x = 0;
    //int numbers[5] = { 1,}; // s 붙으면 굳이 아래처럼 숫자를 다 입력하지 않아도 알아서 1로 초기화??
    //int number[5] = { 1,2,3,4,5 }; // [5] = 개수
    //for (int i = 0; i < 5; i++)
    //{
    //    printf("%d ,", numbers[i]);
    //}
    //printf("%d", numbers[0]); // [0] = 인덱스 번호

}
