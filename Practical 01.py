arr = [1, 2, 3, 4, 5]

print("Traversal:")
for i in arr:
    print(i)

arr.append(6)              # Insertion
print("After insertion:", arr)

arr.remove(3)              # Deletion
print("After deletion:", arr)

if 4 in arr:               # Searching
    print("4 is found")
else:
    print("4 is not found")

arr[0] = 10                # Updation
print("After updation:", arr)
