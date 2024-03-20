def print_alternate_elements(input_list):
    for i in range(0, len(input_list), 2):
        print(input_list[i])

def main():
    user_input = input("Enter a list of elements separated by spaces: ")
    input_list = user_input.split()  # Split the input into a list of elements

    print("Alternate elements of the list:")
    print_alternate_elements(input_list)

if __name__ == "__main__":
    main()
