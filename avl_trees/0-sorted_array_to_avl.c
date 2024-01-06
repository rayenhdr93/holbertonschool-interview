#include "binary_trees.h"
#include <stdlib.h>
/**
 * convert_array_to_AVL - convert a sorted array into an AVL tree
 * @array: pointer to the array to be converted
 * @left: left
 * @right: right
 * @parent: parent node
 * Return: root_node or NULL
 */
avl_t *convert_array_to_AVL(int *array, int left, int right, avl_t *parent)
{
int mid;
avl_t *root_node;
if (left > right)
	return (NULL);
root_node = malloc(sizeof(avl_t));
if (root_node == NULL)
	return (NULL);
mid = left + (right - left) / 2;
root_node->parent = parent;
root_node->n = array[mid];
root_node->left = convert_array_to_AVL(array, left, mid - 1, root_node);
root_node->right = convert_array_to_AVL(array, mid + 1, right, root_node);
return (root_node);
}

/**
 * sorted_array_to_avl - function that builds an AVL tree from an array
 * @array: the array to be converted
 * @size: the size of the array
 * Return: AVL tree
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
if (!array)
	return (NULL);
return (convert_array_to_AVL(array, 0, size - 1, NULL));
}
