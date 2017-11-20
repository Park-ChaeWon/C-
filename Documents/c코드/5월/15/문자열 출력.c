#include <stdio.h>
void PS(char *data) {
	if (*data == 0)return;
	putchar(*data);
	PS(data + 1);

}
void main() {
	PS("HELLO");
}



/*
void PS(char *data) {
	if (*data == '\0') 
		return;
	
	PS(data + 1);
    putchar(*data);
}
void main(void) {
	PS("HELLO");

}*/