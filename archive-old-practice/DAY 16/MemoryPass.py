list_a = [10, 20, 30]
list_b = list_a
print(f"Initial list_a: {list_a}")
list_b[0] = 99
print(f"list_a after list_b mutation: {list_a}")
print(f"Are they the same object? {list_a is list_b}")