#include "binary_trees.h"

/**
 * binary_tree_depth - function
 * @tree: ..........
 * Return: .......
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t depth = 0;

while (tree->parent != NULL)
{
depth++;
tree = tree->parent;
}

return (depth);
}
