#include "cstdio"
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",n/3*2+(n%3==2?1:0));
    return 0;
}