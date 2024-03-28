```markdown
# Binary Trees

This project implements various functions and data structures related to binary trees in the C programming language. Each function or data structure is implemented in its own file.

## Table of Contents

1. [Introduction](#introduction)
2. [Files](#files)
3. [Function Descriptions](#function-descriptions)
4. [How to Use](#how-to-use)
5. [Example Usage](#example-usage)
6. [Compilation](#compilation)
7. [Contributing](#contributing)
8. [Authors](#authors)
9. [License](#license)

## Introduction

A binary tree is a hierarchical data structure consisting of a set of nodes. Each node has at most two children, referred to as the left child and the right child. Binary trees are commonly used in computer science for various applications, including representing hierarchical data, implementing search algorithms, and more.

## Files

Here is a list of the files in this project:

- `binary_tree_print.c`: Contains functions to print binary trees.
- `0-binary_tree_node.c`: Creates a new node for a binary tree.
- `1-binary_tree_insert_left.c`: Inserts a new node as the left child of a given node.
- `2-binary_tree_insert_right.c`: Inserts a new node as the right child of a given node.
- `3-binary_tree_delete.c`: Deletes an entire binary tree.
- `4-binary_tree_is_leaf.c`: Checks if a node is a leaf in a binary tree.
- `5-binary_tree_is_root.c`: Checks if a node is a root in a binary tree.
- `6-binary_tree_preorder.c`: Performs a pre-order traversal on a binary tree.
- `7-binary_tree_inorder.c`: Performs an in-order traversal on a binary tree.
- `8-binary_tree_postorder.c`: Performs a post-order traversal on a binary tree.
- `9-binary_tree_height.c`: Measures the height of a binary tree.
- `10-binary_tree_depth.c`: Measures the depth of a node in a binary tree.
- `11-binary_tree_size.c`: Measures the size of a binary tree.
- `12-binary_tree_leaves.c`: Counts the number of leaves in a binary tree.
- `13-binary_tree_nodes.c`: Counts the number of nodes in a binary tree.
- `14-binary_tree_balance.c`: Measures the balance factor of a binary tree.
- `15-binary_tree_is_full.c`: Checks if a binary tree is full.
- `16-binary_tree_is_perfect.c`: Checks if a binary tree is perfect.
- `17-binary_tree_sibling.c`: Finds the sibling of a node in a binary tree.
- `18-binary_tree_uncle.c`: Finds the uncle of a node in a binary tree.

## Function Descriptions

Each file contains one or more functions related to binary trees. Each function has a description of its purpose, parameters, and return value in a comment block at the beginning of the file.

## How to Use

To use these functions in your project, you can include the corresponding header file in your source code and link against the compiled object files. For example:

```c
#include "binary_trees.h"
```

## Example Usage

Here is an example of how to use one of the functions:

```c
binary_tree_t *root = binary_tree_node(NULL, 10);
binary_tree_t *left_child = binary_tree_insert_left(root, 5);
```

## Compilation

To compile the provided source files, you can use a C compiler such as `gcc`. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o binary_trees
```

## Contributing

If you would like to contribute to this project, feel free to open a pull request with your changes or suggestions.

## Authors

This project was developed by [Lahbiyeb Ismail and Abdelmalek Kamal].

## License

This project is licensed under the [MIT License](LICENSE).
```
