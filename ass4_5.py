# Initialize variables to store the largest and smallest numbers
largest = float('-inf')  # Start with negative infinity as the smallest
smallest = float('inf')  # Start with positive infinity as the largest

while True:
    try:
        num = float(input("Enter a number (or type 'stop' to end): "))
    except ValueError:
        print("Invalid input. Please enter a valid number or 'stop' to end.")
        continue

    if num == "stop":
        break

    if num > largest:
        largest = num

    if num < smallest:
        smallest = num

if largest == float('-inf') and smallest == float('inf'):
    print("No numbers were entered.")
else:
    print(f"Largest number: {largest}")
    print(f"Smallest number: {smallest}")
