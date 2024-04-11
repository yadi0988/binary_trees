#include "binary_trees.h"

/**
 * binary_tree_leaves - function
 * @tree: ...........
 * @Return: ...........
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t leaf = 0;

  if (tree == NULL)
    return (0);

  if (tree->right != NULL && tree->left != NULL)
    {
      return (1);
    }

  leaf += binary_tree_leaves(tree->left);
  leaf += binary_tree_leaves(tree->right);

  return (leaf);
}
