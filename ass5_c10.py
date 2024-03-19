def multiply_matrices(matrix1, matrix2):
    if len(matrix1[0]) != len(matrix2):
        print("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.")
        return None

    result = [[0 for _ in range(len(matrix2[0]))] for _ in range(len(matrix1))]

    for i in range(len(matrix1)):
        for j in range(len(matrix2[0])):
            for k in range(len(matrix2)):
                result[i][j] += matrix1[i][k] * matrix2[k][j]

    return result

def main():
    # Input two matrices as 2D lists
    matrix1 = [[2, 3, 4], [5, 6, 7]]
    matrix2 = [[8, 9], [10, 11], [12, 13]]

    product = multiply_matrices(matrix1, matrix2)

    if product:
        print("Matrix 1:")
        for row in matrix1:
            print(row)
        
        print("Matrix 2:")
        for row in matrix2:
            print(row)
        
        print("Matrix multiplication result:")
        for row in product:
            print(row)

if __name__ == "__main__":
    main()
