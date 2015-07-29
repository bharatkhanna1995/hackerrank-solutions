#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T=0,N=0,n3=0,n5=0;
    scanf("%d",&T);
    while(T--){
        n3=n5=0;
      scanf("%d",&N);
        for(int i=0;i<=N;i+=5)
            {
            
            if((N-i)%3==0)
                {
                n5=N-i;
                n3=i;
               
                break;
            }
        }
        if(n3==0&&n5==0)
            printf("-1\n");
        else
            {
            while(n5--)
                printf("5");
            while(n3--)
                printf("3");
            printf("\n");
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
