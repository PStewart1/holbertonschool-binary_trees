#include "binary_trees.h"

/**
 * binary_tree_delete - Creates a binary tree node.
 * @tree: pointer to the root node of the tree to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current;
	binary_tree_t *father;

	if (!tree)
		return;

	while (tree != NULL)
	{
		if (tree->left != NULL)
		{
			current = tree->left;
			tree->left = NULL;
			tree = current;
		}
		else if (tree->right != NULL)
		{
			current = tree->right;
			tree->right = NULL;
			tree = current;
		}
		else
		{
			father = tree->parent;
			free(tree);
			tree = father;
		}
	}
}
