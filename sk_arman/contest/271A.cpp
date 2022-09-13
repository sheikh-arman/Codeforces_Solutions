#include<stdio.h>
int main (){
    int y;
    scanf("%d",&y);
    y++;
    for( ;;y++){
        int a=y/1000;
        int b=(y/100)%10;
        int c=(y/10)%10;
        int d=y%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
            break;
        if(a==b)
            y=(a*1000)+((b+1)*100);
        if(b==c)
            y=(a*1000)+b*100+c*10+9;
    }
    printf("%d\n",y);
    return 0;
}