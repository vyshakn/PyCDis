#include<stdio.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	char ch,bal,op[3];
	//printf("%s",argv[1]);
	fp = fopen(argv[1],"r");
	bal='\0';
	while ((ch = getc(fp)) != EOF ) {
		/*
		oct[0] = '0' + ( (ch >> 6) & 7 );
		oct[1] = '0' + ( (ch >> 3) & 7 );
		oct[2] = '0' + ( ch & 7);
		*/
		op[0] = bal + ((ch & 252) >> 2);
		bal = ch << 6;
		op[1] = op[0] >> 5;
		op[2] = op[0] >> 2;
		printf("%x%x",op[1],op[2]);
	}
	return 0;
}
