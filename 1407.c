#include<stdio.h>

int main() {
	char a[100];
	gets(a); // 엔터 입력 전 까지 입력 받고 널 문자 마지막에 자동적으로 추가 시켜준다.
	// strlen 문자열 시작 부터 널 문자 직전까지 문자의 개수 센다.
	for (int i = 0; i < strlen(a); i++) { // 조건식을 i < 100 으로 하면 쓰레기 값 초기화 된다.
		if (a[i] == ' ')	continue; // a[i]가 ' '이면 코드 건너뛴다.
		else
		{
			printf("%c", a[i]);
		}
	}
	return 0;
}
