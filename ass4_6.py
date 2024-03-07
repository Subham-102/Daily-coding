# Function to calculate the sum of digits in a number
def sum_of_digits(number):
    total = 0
    while number > 0:
        digit = number % 10
        total += digit
        number //= 10
    return total

# Input from the user
try:
    num = int(input("Enter a positive integer: "))
    if num < 0:
        print("Please enter a positive integer.")
    else:
        digit_sum = sum_of_digits(num)
        print(f"The sum of digits in {num} is: {digit_sum}")
except ValueError:
    print("Invalid input. Please enter a positive integer.")
