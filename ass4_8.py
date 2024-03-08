# Prompt the user to enter a number
user_input = input("Enter a number: ")

# Check if the input is a valid integer
if user_input.isdigit():
    # Convert the input to an integer
    num = int(user_input)
    
    # Reverse the digits
    reversed_num = int(str(num)[::-1])
    
    print("Reversed number:", reversed_num)
else:
    print("Invalid input. Please enter a valid integer.")
