#include<stdio.h>
char s[108][108],str[1000];
int main (){
    int n,m,cnt,num,i,j,ck=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
            scanf("%s",str);
        for( j=1;j<=m;j++){
             s[i][j]=str[j-1];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(s[i][j]=='.'){
                if(s[i-1][j-1]=='*'||s[i-1][j]=='*'||s[i-1][j+1]=='*'||s[i][j+1]=='*'||s[i+1][j+1]=='*'||s[i+1][j]=='*'||s[i+1][j-1]=='*'||s[i][j-1]=='*'){
                    ck=1;
                }
            }
            else if(s[i][j]!='*'){
                cnt=0;
                num=s[i][j]-'0';
                if(s[i-1][j-1]=='*')
                    cnt++;
                if(s[i-1][j]=='*')
                    cnt++;
                if(s[i-1][j+1]=='*')
                    cnt++;
                if(s[i][j+1]=='*')
                    cnt++;
                if(s[i+1][j+1]=='*')
                    cnt++;
                if(s[i+1][j]=='*')
                    cnt++;
                if(s[i+1][j-1]=='*')
                    cnt++;
                if(s[i][j-1]=='*')
                    cnt++;
                if(cnt!=num){
                    ck=1;
                }
            }
            if(ck==1){
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}