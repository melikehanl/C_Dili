#include"stdio.h"
#include"math.h"
int main()
{
	int a,b;
	printf("\n a nin degerini giriniz...");
	scanf("%d",&a);
	b=pow(a,2)-a+5;//	[Error] 'pow' was not declared in this scope
	//b=a*a-a+5;
	printf("\n b=%d",b);
}
