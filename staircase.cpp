#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N=0,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        {
        for(j=1;j<=N-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("#");
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
