N=int(input("Enter N:"))
k=N
while(k>0):
    print(k,end=" ")
    k=k-1;
print("Blastoff")
ans=1
for i in range(1,N+1):
    ans*=i
print(f"The Factorial of {N} is {ans}")