#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to tree
 * Return: 1 if a binary tree is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int check1 = 0, check2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		check = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		check2 = binary_tree_is_full(tree->right);
	return (check && check2);
}
