#include <stdio.h>

int main() {


  int age = 15;
  float length = 2.4;
  char alphabet = 'c';
  int ages[10] = {1 ,2 ,3 ,4, 5, 6, 7, 8, 9, 0};
  int* x = 4; // 인티져 포인터 타입, 메모리 타입 
  (int*) x; //x=(int*)0x20000000; 이러면 포인터타입을 저장할 수 있다.
// 1. 곱하기
// 2. 주소형 타입선언
// 3. dereference operator




  printf("age = %x\n" , age);
  printf("length = %.2f\n" , length);
  printf("length = %d\n" , (int)length); //type casting//
  printf("alphabet = %c\n" , alphabet);


  return 0; /*운영체제가 값: 0이면 잘 돌아갔다고 생각함*/
}


//전역변수 : stack 영역에 저장된다. 여러 함수에 적용가능
//지역변수 : SRAM 에 저장
//https://dh8.kr/workshop/swworkshop/note/day1.html
//초보자를 위한 Linux & Unix C 프로그래밍




//포인터 예시

int y=3; //0x20000004
x = &y; // (int*)0x20000004 , 메모리주소를 가리킴
y = 10;
*x = 10; // dereference operator 이를 통해 y의 값을 바꿀 수 있다.
//자료 구조를 들으면 포인터의 용도를 잘 알 수 있다.
//연산을 효율적으로 하기위해 포인터를 사용한다.
//linked list C 예제 해보면 포인터 잘 알아 볼 수 있다.





//구조체 예
struct group_t {
  int x;
  float y;
  char z;
}


struct group_t my_group;
my_group.x = 1;
my_group.y = 1.1f;
my_group.z = 'c';

int x = my_group.x; // i = 1



//한문제를 여러번 푸는게 여러문제를 푸는 것 보다 낫다. 코딩실력 향상을 위해서는,
//코딩도장 난이도순으로 lv1 부터 차근차근 풀어보면 코딩 근육이 잘 생긴다.
//baekjoon 사이트 -> 코딩 문제 많다. 2~3명 팀으로 해서 스터디 해보면 좋다.







//land_detecter 착륙감지
//led_controller led 색깔 바꿀수 있다
//test 붙으면 실행안함 보통
// -j4 쓰면 cpu 4개 써서 컴파일 한다.

arm-none-eabi-gcc


extra 안에 io 라는 펌웨어를 가지고 있다.
etc는 주로 설정파일.

python mavlink_shell.py -> px4  shell 연


