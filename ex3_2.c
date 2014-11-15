#include <stdio.h>

#define MAXSIZE 200

void escape(char s[])
{
	char t[MAXSIZE];
	int i, j;
	
	for( i=0, j=0; s[i] != '\0'; i++){
		switch(s[i]){
			case '\n':
				t[j++] = '\\';
				t[j++] = 'n';
				break;
			case '\t':
				t[j++] = '\\';
				t[j++] = 't';
				break;
			default:
				t[j++] = s[i];
				break;
		}
		t[j] = '\0';
	}
	printf(" s is %s\n", s);
	printf("t is %s", t);
}

int main()
{
	char str[] = "gfhdjgfdhjf\nhdjdjaa\t\thfsfdfhjdhsf\n";
	escape(str);
}
	