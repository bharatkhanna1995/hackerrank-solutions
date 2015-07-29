pi="31415926535897932384626433833"
pi=list(pi)
pi=list(map(lambda x: int(x),pi))
t=int(input())
while t!=0:
    flag=0
    t-=1
    x=input().split(" ")
    for i in range(len(x)):
        if(len(x[i])!=pi[i]):
            print("It's not a pi song.")
            flag=1
            break
    if(flag==0):
        print("It's a pi song.")
    
        
