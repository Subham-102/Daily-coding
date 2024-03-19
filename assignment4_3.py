# Initialize variables to store input and count of numbers
total = 0
count = 0

# Prompt the user for integers
while True:
    try:
        num = int(input("Enter an integer (0 to end): "))
        if num == 0:
            break
        total += num
        count += 1
    except ValueError:
        print("Invalid input. Please enter an integer.")

# Calculate and display the average
if count > 0:
    average = total / count
    print("Average of the entered numbers: {:.2f}".format(average))
else:
    print("No valid numbers were entered.")
