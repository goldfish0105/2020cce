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
