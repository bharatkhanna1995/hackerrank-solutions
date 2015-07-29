#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T=0,N=0;
    scanf("%d",&T);
    int height=1;
    for(int i=0;i<T;i++)
        {height=1;
        scanf("%d",&N);
        for(int j=1;j<=N;j++)
            {
            if(j%2==0)
                height+=1;
            else
                height*=2;
        }
        printf("%d\n",height);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
 
