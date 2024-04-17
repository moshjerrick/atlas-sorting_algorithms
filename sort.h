#ifndef SORTING_ALG
#define SORTING_ALG
#include <stddef.h>

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);


void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
size_t partition(int array[], size_t size);
void print_sort(int array[], size_t size, int init);

#endif
