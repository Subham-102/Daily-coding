def shift_left(input_string):
    if len(input_string) < 2:
        return input_string  # Nothing to shift if the string has 0 or 1 characters
    else:
        shifted_string = input_string[1:] + input_string[0]
        return shifted_string

def main():
    user_input = input("Enter a string: ")
    shifted_result = shift_left(user_input)
    
    print("Original string:", user_input)
    print("String shifted one position to the left:", shifted_result)

if __name__ == "__main__":
    main()
