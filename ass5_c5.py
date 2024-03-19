def delete_word_from_string(input_string, word_to_delete):
    words = input_string.split()  # Split the input string into words
    words_without_word = [word for word in words if word != word_to_delete]  # Filter out the word to delete
    new_string = ' '.join(words_without_word)  # Recreate the string
    
    return new_string

def main():
    input_string = input("Enter a string: ")
    word_to_delete = input("Enter the word to delete: ")

    updated_string = delete_word_from_string(input_string, word_to_delete)

    print("Original string:", input_string)
    print("String with the word removed:", updated_string)

if __name__ == "__main__":
    main()
