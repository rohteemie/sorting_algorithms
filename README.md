# Sorting Algorithms

## Data Structure Methods Using Different Sorting Technique

This repository contains a collection of sorting algorithms, implemented in C, with dedicated files for each function. The repository includes:

- **Individual Function Files** : Each sorting algorithm is implemented in its own file within the src/ directory.
- **Time Complexity Directory** : Details on the time complexity of each algorithm are provided in the complexities/ directory.
- **Test Directory** : Test cases for each sorting algorithm are included in the tests/ directory to verify correctness and performance.
- **Header File** : A central header file, sorting_algorithms.h, located in the root directory, declares each sorting function for easy reference and linking.
- **Coding Standard** : Code is written following the Betty coding style to maintain clean and readable syntax.

## Repository Structure

```bash
  ├── complexities/          # Contains files listing time complexities of each algorithm
  ├── src/                   # Source files with individual sorting algorithm implementations
  ├── tests/                 # Test files for each sorting algorithm
  ├── sort.h                 # Header file declaring all sorting functions
  └── README.md              # Repository documentation
```

### Files and Directories

- **complexities/**: Each file here corresponds to a sorting algorithm, documenting its time complexity in the best, average, and worst cases.
- **src/**: Contains C files, each implementing a different sorting algorithm.
- **tests/**: Test files that verify each sorting algorithm, checking that they sort inputs as expected.
- **sort.h**: The header file contains declarations for all sorting functions, allowing them to be easily included in other files.

## Coding Standards

All code follows the **Betty Coding Style**, which enforces guidelines such as:

- **Line lengths limited to 80 characters**.
- **Proper function and variable naming conventions**.
- **Consistent indentation and spacing for readability**.

## Setup and Usage

- **1 Clone the repository**:

```bash
git clone https://github.com/yourusername/sorting-algorithms.git
cd sorting-algorithms
```

- **2 Compile the Code**:

```bash
gcc -Wall -Wextra -Werror -pedantic src/<file>.c -o <output_file>
```

- **3 Run Tests**:

```bash
./tests/<test_file>
```

### Available Algorithms

The following sorting algorithms are implemented:

- **Bubble Sort**
- **Selection Sort**
- **Insertion Sort**
- **Merge Sort**
- **Quick Sort**
- **Heap Sort**
- **Shell Sort**
- **Counting Sort**
- **Radix Sort**
- **Bucket Sort**

Each algorithm file includes comments and follows the Betty style guidelines for easy readability.

## Contributing

If you'd like to add additional sorting algorithms or improve existing ones, please ensure your code conforms to the Betty coding style. Contributions should include corresponding updates in the complexities/ directory and a test file in tests/.
