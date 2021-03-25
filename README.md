# 2020cce
## 第一題 找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%5);
}
```
## 第二題 因數個數
```C
#include <stdio.h>
int main()
{
	int n,j=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)
		j++;
	}
	printf("%d\n",j);
}
```
## 第三題 找倍數
```C
#include <stdio.h>
int main()
{
	int a[10],n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]%3==0) n++;
	}
	printf("%d\n",n);
}
```
## 第四題 整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)printf("A\n");
	else if(n< 90&&n>=80)printf("B\n");
	else if(n< 80&&n>=60)printf("C\n");
	else printf("F\n");
}
```
## 第五題 分數化簡
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=10000;i>0;i--){
		if(a%i==0&&b%i==0){
		a=a/i;
		b=b/i;
		}
	}
	printf("%d %d\n",a,b);
}
```
## 01.讀入整數反序列印
```C
#include <stdio.h>
int a[100];
int main()
{
	int n;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			n=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
## 02.
```C
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++){
	ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 03.
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		ans=ans+(i-1)*i;
	}
	printf("%d\n",ans);
}
```
## 04.
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==b)printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");
}
```
## 05.
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)printf("0\n");
	else if(a==1)printf("1\n");
	else if(a==10)printf("2\n");
	else if(a==11)printf("3\n");
	else if(a==100)printf("4\n");
	else if(a==101)printf("5\n");
	else if(a==110)printf("6\n");
	else if(a==111)printf("7\n");
	else if(a==1000)printf("8\n");
	else if(a==1001)printf("9\n");
	else if(a==1010)printf("10\n");
	else if(a==1011)printf("11\n");
	else if(a==1100)printf("12\n");
	else if(a==1101)printf("13\n");
	else if(a==1110)printf("14\n");
	else if(a==1111)printf("15\n");
}
```
## 06.
```C
#include <stdio.h>
int a[50];
int main()
{
	int n,m=0,b=0,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b=b+a[i];
	}
	float avg;
	avg=(float)b/n;
	printf("均標:%.1f\n",avg);
	for(int i=0;i<n;i++){
		if(a[i]>=avg){
			c=c+a[i];
			m++;
		}	
	}
	float sum;
	sum=(float)c/m;
	printf("前標:%.1f\n",sum);
}
```
## week03-1
```c
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;
    p=p+2;
    *p=666;
}
```
## week03-2
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printfAll();
    int *p=&a[2];
    *p=222;
            printfAll();
    p=p+2;
    *p=666;
            printfAll();
    p--;
    *p=555;
            printfAll();
}
```
## week03-3
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printfAll();
    int *p=&a[2];
    *p=222;
            printfAll();
            printf("p心裡小紙條的值是:%d\n",p);
    p=p+2;
    *p=666;
            printfAll();
            printf("p心裡小紙條的值是:%d\n",p);
    p--;
    *p=555;
            printfAll();
            printf("p心裡小紙條的值是:%d\n",p);
}
```
## week03-4
```c
#include <stdio.h>
#include <stdlio.h>
int a[10];
int main(){
    int b[10];
    int *p=(int*)malloc(sizeof(int)*10);
    return 0;
}
```
