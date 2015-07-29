#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[11];
    scanf("%s",A);
    
    if(A[8]=='P'&&A[9]=='M')
        {
        if(A[0]!='1'||A[1]!='2'){
        A[0]+=1;
            A[1]+=2;}
    }
    else if(A[0]=='1'&&A[1]=='2')
        A[0]=A[1]='0';
    for(int i=0;i<=7;i++)
        printf("%c",A[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
