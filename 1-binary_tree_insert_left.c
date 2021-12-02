#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to add a binary tree node on the left
 * @parent: parent node to add new node to
 * @value: value of new node
 * Return: pointer to newly added node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}

	return (new);
}
