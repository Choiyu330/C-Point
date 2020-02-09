#include <stdio.h>


void main() {
	
	char arr[10]; //배열 범위를 설정해주지 않으면 쓰레기값 출력
	/*
	char* p = arr; //배열의 주소를 가져올때는 []를 붙이지 않는다.
	*/
	int i = 0; //초기화 시켜주는 걸 까먹지 말자

	printf("출력값 : "); scanf_s("%s", arr);
	printf("%s\n", arr);


	/*
	for (i = 0; i < 10; i++) {
		printf("%c", *(p+i)); //p+i는 p[i]의 주소이다.
							
	}

	*/
	
}