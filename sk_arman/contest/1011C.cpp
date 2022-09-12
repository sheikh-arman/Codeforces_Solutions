#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,tcase,ck=1;
	double ans;
	scanf("%d %d",&tcase,&n);
	ans=n;
	for(int i=0;i<tcase*2;i++){
		int m;
		scanf("%d",&m);
		if(m==1)
            ck=0;
		if(ck)
            ans*=(double)m/(m-1.0);
	}
	ck?printf("%lf\n",ans-n):printf("-1\n");
}