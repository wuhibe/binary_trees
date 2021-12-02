#include "binary_trees.h"
/**
 * binary_tree_node - insert a left node
 * @parent: parent node
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = new;
		new->parent = parent;
		new->n = value;
		new->right = NULL;
		new->left = NULL;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		new->n = value;
		new->parent = parent;
		new->right = NULL;
	}
	return (new);
}
