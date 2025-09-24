# Matrix Multiplication

This project demonstrates the multiplication of two matrices using a simple algorithm and its implementation in C.

## Problem Statement

Multiply two matrices **A** and **B**. Matrix multiplication is only possible if the number of columns in **A** equals the number of rows in **B**. The resulting matrix **C** will have dimensions `(rows of A) x (columns of B)`.

## Principle

- **Compatibility:** `cols_A == rows_B`
- **Resulting Matrix Size:** `rows_A x cols_B`

## Data Dictionary

| Variable          | Description                 |
|------------------|-----------------------------|
| `matrix_A[100][100]` | First matrix             |
| `matrix_B[100][100]` | Second matrix            |
| `matrix_C[100][100]` | Product matrix           |
| `rows_A, cols_A`     | Dimensions of matrix A  |
| `rows_B, cols_B`     | Dimensions of matrix B  |

## Algorithm Steps

1. Read matrix sizes and validate input.
2. Check compatibility for multiplication.
3. Input elements for both matrices.
4. Multiply matrices using nested loops.
5. Display the result.

## Time & Space Complexity

- **Time Complexity:** `O(rows_A × cols_A × cols_B)`
- **Space Complexity:** `O(rows_A × cols_A + rows_B × cols_B + rows_A × cols_B)`

## Usage

1. Ensure you have a C compiler installed (e.g., `gcc`).
2. Compile the program:

```bash
gcc matrix_multiplication.c -o matrix_multiplication
./matrix_multiplication


## Example

```
Enter number of rows for Matrix A: 2
Enter number of columns for Matrix A: 3
Enter number of rows for Matrix B: 3
Enter number of columns for Matrix B: 2
Enter elements of Matrix A:
1 2 3
4 5 6
Enter elements of Matrix B:
7 8
9 10
11 12
Product of matrices is:
58 64
139 154
```

## Implementation
