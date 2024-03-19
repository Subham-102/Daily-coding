n = 5  # You can adjust the height of the 'A' pattern by changing this value

# Print the top part of the 'A'
for i in range(n):
    for j in range(n - i - 1):
        print(" ", end="")
    for j in range(2 * i + 1):
        if j == 0 or j == 2 * i:
            print("*", end="")
        else:
            print(" ", end="")
    print()

# Print the horizontal bar of the 'A'
for i in range(n // 2):
    for j in range(n // 2):
        print(" ", end="")
    for j in range(n - n // 2):
        print("*", end="")
    print()
