#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N=0;
    float A,pos=0,neg=0,zero=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%f",&A);
        if(A>0)
            pos++;
        else if(A==0)
            zero++;
        else
            neg++;
    }
    printf("%0.3f\n%0.3f\n%0.3f",pos/N,neg/N,zero/N);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
