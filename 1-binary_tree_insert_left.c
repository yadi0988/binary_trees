#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function
 * @parent: ...............
 * @value: ..............
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
return (NULL);

binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;


if (parent->left == NULL)
{
parent->left = new_node;
}
else
{
new_node->left = parent->left;
new_node->left->parent = new_node;
parent->left = new_node;
}

return (new_node);
}
