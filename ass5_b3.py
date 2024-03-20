def main():
    user_input = input("Enter a string: ")
    
    if len(user_input) < 2:
        print("String is too short to perform the exchange.")
    else:
        first_char = user_input[0]
        last_char = user_input[-1]
        middle_chars = user_input[1:-1]
        
        new_string = last_char + middle_chars + first_char
        print("Original string:", user_input)
        print("String with first and last characters exchanged:", new_string)

if __name__ == "__main__":
    main()
