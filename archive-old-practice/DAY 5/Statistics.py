arr=[12, 45, 7, 23, 56]
sum=0
maxi=arr[0]
for k in arr:
    sum+=k
    if(maxi<k):
        maxi=k
print(f"The Sum of Array is: {sum}")    
print(f"The Maximun Element of Array is: {maxi}")  