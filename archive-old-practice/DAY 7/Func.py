def summ(arr):
    total=0
    for i in range(0,len(arr)):
        total+=arr[i]
    return total
def maximumm(arr):
    maxi=arr[0]
    for i in range(0,len(arr)):
        if maxi<arr[i]:
            maxi=arr[i]
    return maxi
arr=[12, 45, 7, 23, 56]
sum=summ(arr)
maxi=maximumm(arr)
print(f"The Sum of Array is: {sum}")    
print(f"The Maximun Element of Array is: {maxi}")  