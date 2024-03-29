#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

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

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);
/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);

void swap(int *a, int *b);

void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);

void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

int lomuto_partition(int *array, size_t size, int left, int right);

void lomuto_sort(int *array, size_t size, int left, int right);

void quick_sort(int *array, size_t size);

void shell_sort(int *array, size_t size);

void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);

void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);

void cocktail_sort_list(listint_t **list);

int get_max(int *array, int size);

void counting_sort(int *array, size_t size);

void merge_subarr(int *subarr, int *buff, size_t front, size_t mid, size_t back);

void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);

void merge_sort(int *array, size_t size);
#endif
