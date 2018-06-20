#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>


int main(int argc, char*argv[]){
	char*string=(char*)malloc(sizeof(char)*100);
	int i=0;
	char*str=(char*)malloc(sizeof(char)*100);

	for (i=1; i<argc; ++i){
		strcat(string, argv[i]);
		strcat(string, " ");
	}
	int k=0;
	int count=1;
	char valCount='0';
	i=0;
	while(string[i+1]!='\0'){
		if (string[i]>='0'&&string[i]<='9'){
			printf("error");
			exit(0);
		}
		str[k]=string[i];
		while(string[i]==string[i+1]){
			++count;
			++i;
		}
		valCount=count+'0';
		++i;
		++k;
		str[k]=valCount;
		++k;
		count=1;
	}
	if (k>i){
		str=string;
	}
	printf("%s\n", str);
	return 0;
}
