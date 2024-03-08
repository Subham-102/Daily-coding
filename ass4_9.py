# Prompt the user to enter a number
user_input = input("Enter a number: ")

# Check if the input is a valid integer
if user_input.isdigit():
    # Convert the input to an integer
    num = int(user_input)
    
    # Convert the number to a string
    num_str = str(num)
    
    # Reverse the string
    reversed_str = num_str[::-1]
    
    # Check if the original number and the reversed number are the same
    if num_str == reversed_str:
        print("The number is a palindrome.")
    else:
        print("The number is not a palindrome.")
else:
    print("Invalid input. Please enter a valid integer.")
