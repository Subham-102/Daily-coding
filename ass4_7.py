def is_armstrong_number(number):
    # Calculate the number of digits in the given number
    num_str = str(number)
    num_digits = len(num_str)

    # Initialize a variable to store the sum of the nth power of each digit
    sum_of_powers = 0

    # Calculate the sum of nth powers of each digit
    for digit in num_str:
        sum_of_powers += int(digit) ** num_digits

    # Check if the sum of nth powers is equal to the original number
    return number == sum_of_powers

# Input from the user
num = int(input("Enter a number: "))

# Check if the number is an Armstrong number and print the result
if is_armstrong_number(num):
    print(num, "is an Armstrong number")
else:
    print(num, "is not an Armstrong number")
