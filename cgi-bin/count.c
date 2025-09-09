#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	char ss[22];
	char s[22];
	long n;
	int nn;
	FILE *f;
	strcpy(ss,"0");
	f=fopen("count.txt","r");
	if (f==NULL){
		f=fopen("count.txt","w");
			fprintf(f,"%s",ss);
		fclose(f);
		f=fopen("count.txt","r");
	}
		fgets(ss,10,f);
		fclose(f);
		n=atol(ss);
		n=n+1;
		sprintf(ss,"%ld",n);
		f=fopen("count.txt","w");
			fprintf(f,"%s",ss);
		fclose(f);
	printf("Content-type:plain-text\r\n\r\n");
	printf("%s",ss);
	return 0;
}