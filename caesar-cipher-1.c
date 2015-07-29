#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,K;
    unsigned char A[101];
    scanf("%d",&N);
    scanf("%s",A);
    scanf("%d",&K);
    K%=26;
    for(int i=0;i<N;i++)
        {
        if(A[i]<='z'&&A[i]>='a')
            {
            A[i]+=K;
            if(A[i]>'z')
                A[i]=A[i]-'z'+'a'-1;
        }
        if(A[i]<='Z'&&A[i]>='A')
            {
            A[i]+=K;
            if(A[i]>'Z')
                A[i]=A[i]-'Z'+'A'-1;
        }
    }
    printf("%s\n",A);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
