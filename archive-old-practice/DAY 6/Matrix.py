matrix=[[1, 2, 3], [4, 5, 6], [7, 8, 9]]
sum=0
for i in range(0,3):
    sum+=matrix[i][i]
print(f"The Sum of Diagonals of matrix is:{sum}")