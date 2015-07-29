#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T=0;
    scanf("%d",&T);
    int K,N,A,sum=0;;
    while(T--){
        sum=0;
        scanf("%d%d",&N,&K);
        for(int i=0;i<N;i++){
            scanf("%d",&A);
            if(A<=0)
                sum++;
        }
        if(sum>=K)
            printf("NO\n");
        else
            printf("YES\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
