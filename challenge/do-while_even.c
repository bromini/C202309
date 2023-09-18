int main(void) {
	int i = 0; //i 에 0 대입
	while (i < 10) {//i가 10이 될동안 루프 실행
		if (i % 2 == 0){ //i 나누기 2가 0이면 계속하기
			continue;
		}
		printf("%d Hello World!\n", i++); //프린트하고 i에 1추가
	}
	return 0;
}
