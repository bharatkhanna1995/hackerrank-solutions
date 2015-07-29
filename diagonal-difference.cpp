#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,A,ans=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        {
        for(int j=0;j<N;j++)
            {
            scanf("%d",&A);
            if(i==j)
                ans+=A;
            if(i+j==N-1)
                ans-=A;
        }
    }
    printf("%d\n",abs(ans));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
