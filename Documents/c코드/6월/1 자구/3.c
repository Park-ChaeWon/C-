#include <stdio.h>
int main(void) {
	FILE *file;
	
	file = fopen("text.txt", "w");
	// "w"속성은 쓰기 속성으로 텍스트 파일의 모든 내용은 지워지고 처음부터 문자를 쓰게 됨

	printf("%c", fputc('C', file)); 
	// 문자를 가져와 스트림 파일 버퍼 중 위치 지시자가 가리키는 부분에 문자를 쓰기 됨
	// 문자 쓰기가 완료 되면 스트림 파일은 위치지시자의 위치를 하나씩 늘린다.
	printf("%c", fputc('l', file));
	printf("%c", fputc('a', file));
	printf("%c", fputc('s', file));
	printf("%c\n", fputc('s', file));
	//스트림 파일 버퍼에 다 쓰여지면 텍스트 파일에 스트림 파일에 있는 문자들을 쓰게 됨

	fclose(file);
}