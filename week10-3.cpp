#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][32];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			strcpy(tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		for(int i=0;i<N;i++){
			printf("%s\n",tree[i]);
		}
		printf("====分隔線====\n");
	}
}
