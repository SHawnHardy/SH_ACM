#include "cstdio"
#include "cstdlib"
#include "cstring"

typedef long long int LL;
const LL M=1000100;

bool nprm[M];
LL prm[M];

int main(){
    memset(nprm, 0, sizeof(nprm));
    memset(prm, 0, sizeof(prm));
    
    LL p=0;
    for (LL i=2; i<M; i++) {
        if (!nprm[i])
            prm[p++]=i;
        for (LL j=0; j<p&&((i*prm[j])<M); j++) {
            nprm[i*prm[j]]=1;
            if (!(i%prm[j]))
                break;
        }
    }
    while (scanf("%lld",&p)) {
        if (!p)
            break;
        for (int i=2; i<=p/2; i++) {
            if (nprm[i]||nprm[p-i]) {
                continue;
            }
            else {
                printf("%lld = %d + %lld\n",p,i,p-i);
                break;
            }
        }
    }
    return 0;
}