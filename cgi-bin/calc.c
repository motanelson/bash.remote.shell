#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	char envi[1080];
	char *c;
	FILE *f;
	strcpy(envi,"QUERY_STRING");
	printf("Content-type:plain-text\r\n\r\n");
	c=getenv(envi);
	strcpy(envi,c);
	strcat(envi,"\nquit\n");
	f=fopen("/tmp/bc.txt","w");
		fprintf(f,"%s",envi);
	fclose(f);
	system("bc < /tmp/bc.txt > siteMap.txt");
	return 0;
}