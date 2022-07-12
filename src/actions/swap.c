/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 16:40:13 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/12 17:28:23 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Swap the first 2 elements at the top of the stack.
 * 
 * @param stack The stack in which to swap the values.
 */
void	swap(t_dlist_i **stack)
{
	int	temp;

	if (ft_dlstsize_i(*stack) < 2)
		error("Not enough data to process command!");
	temp = (*stack)->num;
	(*stack)->num = (*stack)->next->num;
	(*stack)->next->num = temp;
}

/**
 * @brief Swaps the first 2 elements at the top of each stack.
 * 
 * @param stack_a The stack in which to swap the values.
 * @param stack_b The stack in which to swap the values.
 */
void	swap_all(t_dlist_i *stack_a, t_dlist_i *stack_b)
{
	swap(&stack_a);
	swap(&stack_b);
}
