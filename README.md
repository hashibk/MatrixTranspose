# Matrix Class with Transpose

This C++ program implements a template-based `Matrix` class that allows you to create and manipulate matrices of any data type. The class supports matrix operations such as inserting elements, printing the matrix, and transposing the matrix.

## Features

- **Parameterized Constructor**: Initializes a matrix with specified dimensions.
- **Copy Constructor**: Creates a copy of an existing matrix.
- **Insert Element**: Allows inserting elements into the matrix at specified positions.
- **Print Matrix**: Displays the matrix in a readable format.
- **Transpose Matrix**: Swaps rows and columns of the matrix.

## Usage

1. **Create Matrix**: Instantiate the `Matrix` object with the desired number of rows and columns.
2. **Insert Elements**: Use the `insertElement` method to add elements to specific positions in the matrix.
3. **Print Matrix**: Use the `print` method to display the matrix.
4. **Transpose Matrix**: Use the `transpose` method to swap the rows and columns of the matrix.

### Example

In the given code:

- A matrix of size `3x4` is created using the `Matrix<int>` constructor.
- Elements can be inserted, and the matrix can be printed or transposed as needed.

**Sample Interaction**:
```cpp
Matrix<int> m(3, 4);
m.insertElement(5, 1, 2);
m.print();
m.transpose();
m.print();