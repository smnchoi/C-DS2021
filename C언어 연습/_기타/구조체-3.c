#include <stdio.h>
#include <string.h>  // strcpy 함수가 선언된 헤더 파일
#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지

// * typedef 로 "익명"구조체 만들기
// ? typedef 구조체 별칭을 정의할 때 매번 구조체 이름을 지정해주려니 이것도 꽤 번거롭습니다. 
// ? 이럴때는 익명 구조체(anonymous structure)를 사용하면 구조체 이름을 지정하지 않아도 됩니다. 
// ? 즉, typedef로 구조체를 정의하면서 "이름을 생략할 수 있습니다".
    // typedef struct {
    //     자료형 멤버이름;
    // } 구조체별칭;

// * 구조체 이름이 없는 익명 구조체
// ? 이름은 없고 오직 별칭만 존재한다. 간-편
typedef struct {   
    char name[20];        
    int age;              
    char address[100];    
} Person; // * typedef를 사용하여 구조체 별칭을 Person으로 정의

int main () {
    Person p1;    // ? 구조체 별칭 Person으로 변수 선언

    // . 으로 구조체 멤버에 접근하여 값 할당
    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");

    // . 으로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1.name);       // 이름: 홍길동
    printf("나이: %d\n", p1.age);        // 나이: 30
    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동

}