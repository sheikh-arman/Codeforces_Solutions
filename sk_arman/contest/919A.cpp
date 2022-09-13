#include<stdio.h>
int main ()
{
	int n,i,a,b,m;
	double ans,ck=10000000.0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if((double)a/b<ck)
		   ck=(double)a/b;
	}
	ans=ck*m;
	printf("%.10lf",ans);
}