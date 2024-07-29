#include <iostream>
using namespace std;
int main()
{
    // 힙의 장단점 느리다, 할당된 메모리를 해제하기 전까지 계속 유지가 된다.
    int* ptr = new int;
    int* array = new int[10];
    int ten = 10;

    ptr = &ten;
    cout << *ptr;
    free(ptr);
    cout << *ptr; // 실행 오류 이유 위에서 free로 멈춰서 아래에서 다시 실행 했기때문에



    //struct stack {

    //    int arr[10000]; // int여서 40000바이트 차지
    //    int last;

    //    void init() {
    //        last = -1;
    //    }
    //    void push(int data) {
    //        arr[++last] = data;
    //    }
    //    bool empty() {
    //        return (last < 0);
    //    }
    //    int pop() {
    //        if (empty()) {
    //            return -1;
    //        }
    //        return arr[last--];
    //    }
    //    int size() {
    //        return last + 1;
    //    }
    //    int top() {
    //        if (empty()) {
    //            return -1;
    //        }
    //        return arr[last];
    //    }
    //};

    //stack s;
    //s.init();

    //s.push(10);
    //int x = s.pop();
    //cout << x << endl;
    //int sz = s.size();
    //cout << sz << endl;
    //s.empty();
    //s.top();

    //return 0;

    //int a = 10;
    //int* pa = &a; // 4바이트

    //char alpha = 'a'; // 싱글 1바이트
    //char* palpha = &alpha;

    //double dp = 5.3; // 4바이트
    //double *pdp = &dp;

    //cout << "a의 값 : " << a << endl;
    //cout << "pa의 값 : " << pa << endl;
    //cout << "pa의 진짜 값 : " << *pa << endl;
    //cout << sizeof(alpha) << sizeof(dp) << endl;
}