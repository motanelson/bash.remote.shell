#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	char ss[300];
	time_t tt;
	tt=time(NULL);
	snprintf(ss,sizeof(ss),"%.24s",ctime(&tt));
	printf("Content-type:plain-text\r\n\r\n");
	printf("\n%s\n",ss);
	return 0;
}