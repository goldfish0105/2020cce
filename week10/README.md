## week10-1
```c
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
			printf("%s\n",line);
		}
		printf("====分隔線====\n");
	}
}
```
## week10-2
```c
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
```
## week10-3
```c
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
```
## week10-4
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);
}
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
		qsort(tree,N,32,compare);
		for(int i=0;i<N;i++){
			printf("%s\n",tree[i]);
		}
		printf("====分隔線====\n");
	}
}
```
## week10-5
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			strcpy(tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		//printf("有幾棵樹? %d\n",N);
		qsort(tree,N,32,compare);
		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0;i<N;i++){
			if(strcmp(tree[i],tree[i+1])==0){
				ans++;
			}else{
				printf("%d\n",ans);
				ans=1;
				printf("%s ",tree[i+1]);
			}
			//printf("%s\n",tree[i]);
		}
		//printf("====分隔線====\n");
	}
}
```
## week10-6
```c
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			strcpy(tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		//printf("有幾棵樹? %d\n",N);
		qsort(tree,N,32,compare);
		if(t>0)printf("\n");
		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0;i<N-1;i++){
			if(strcmp(tree[i],tree[i+1])==0){
				ans++;
			}else{
				printf("%.4f\n",100*ans/(float)N);
				ans=1;
				printf("%s ",tree[i+1]);
			}
			//printf("%s\n",tree[i]);
		}
		printf("%.4f\n",100*ans/(float)N);
	}
}
```
