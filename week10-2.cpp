#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			//printf("%s\n",line);
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		printf("====分隔線====\n");
	}
}
