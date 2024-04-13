# C - Sorting algorithms & Big O

### Data Structure and Functions
- For this project you are given the following [print_array](https://github.com/WennieL/holbertonschool-sorting_algorithms/blob/main/print_array.c), and [print_list](https://github.com/WennieL/holbertonschool-sorting_algorithms/blob/main/print_list.c) functions
- Please use the following data structure for doubly linked list:

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
#### format below is used for Task questions
- O(1)
- O(n)
- O(n!)
- n square -> O(n^2)
- log(n) -> O(log(n))
- n * log(n) -> O(nlog(n))
- n + k -> O(n+k)
- ...

###### Please use the "short" notation on't use constants). Example: O(nk) or O(wn) should be written O(n). If an answer is required within a file, all your answers files must have a newline at the end.

## [Test files](https://github.com/WennieL/holbertonschool-sorting_algorithms/tree/main/test%20files)

## Tasks

### [0. Bubble sort](https://github.com/WennieL/holbertonschool-sorting_algorithms/blob/main/0-bubble_sort.c)
##### Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

- Prototype: ```void bubble_sort(int *array, size_t size);```
- You're expected to print the array after each time you swap two elements 
- Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

### [1. Insertion sort](https://github.com/WennieL/holbertonschool-sorting_algorithms/blob/main/1-insertion_sort_list.c)
##### Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

- Prototype: ```void insertion_sort_list(listint_t **list);```
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the list after each time you swap two elements

### [2. Selection sort](https://github.com/WennieL/holbertonschool-sorting_algorithms/blob/main/2-selection_sort.c)
##### Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

- Prototype: ```void selection_sort(int *array, size_t size);```
- You’re expected to print the array after each time you swap two elements

### Differnt method used for [2. Selection sort](https://github.com/WennieL/holbertonschool-sorting_algorithms/blob/main/task_2_diff_method.c)

### [3. Quick sort](https://github.com/WennieL/holbertonschool-sorting_algorithms/blob/main/3-quick_sort.c)
##### Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

- Prototype: ```void quick_sort(int *array, size_t size);```
- You must implement the Lomuto partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You’re expected to print the array after each time you swap two elements
