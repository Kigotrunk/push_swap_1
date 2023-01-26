/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:49:21 by kortolan          #+#    #+#             */
/*   Updated: 2022/12/29 14:48:52 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(Element *pile)
{
	int	tmp;

	tmp = pile->nombre;
	pile->nombre = pile->suivant->nombre;
	pile->suivant->nombre = tmp;
}

void	sa(Element *pile)
{
	swap(pile);
	write(1, "sa", 2);
	write(1, '\n', 1);
}

void sb(Element *pile)
{
	swap(pile);
	write(1, "sb", 2);
	write(1, '\n', 1);
}

void ss(Element *pile, Element *pile_b);
{
	sa(pile);
	sb(pile_b);
}
