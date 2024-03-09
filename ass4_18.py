n = int(input("Enter the number of rows for Floyd's Triangle: "))
number = 1  # Initialize the starting number

for i in range(1, n + 1):
    for j in range(i):
        print(number, end=' ')
        number += 1
    print()
