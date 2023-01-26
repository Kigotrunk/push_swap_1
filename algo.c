/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:43:28 by kortolan          #+#    #+#             */
/*   Updated: 2023/01/03 12:20:23 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	element_size(Element *a)
{
	int	i;

	i = 0;
	if (!a)
		return(0);
	while (a)
	{
		a = a->suivant;
		i++;
	}
	return (i);
}

int	value_last(Element **a)
{
	Element	*temp;

	while (temp->suivant)
		temp = temp->suivant;
	return (temp->nombre);
}

int	*number_of_mouvement_top_b(Element **b)
{
	Element	*temp;
	int		*i;
	int		y;
	int		x;

	temp = *b;
	y = 1;
	i = malloc(sizeof(int) * element_size(temp));
	while(temp)
	{
		if (y <= ((element_size(temp) / 2) + 1))
		{
			i[y] = y - 1;
			y++;
		}
		else
		{
			i[y] = (element_size(temp) - y) + 1;
			y++;
		}
		temp = temp->suivant;
	}
	return(i);
}

int	wich_place(Element *temp, Element *temp1)
{
	int		i;

	i = 1;

	if (temp1->nombre < temp->nombre && temp1->nombre > value_last(a))
		return (i);
	i++;
	while (temp)
	{
		if (temp1->nombre > temp->nombre && temp1->nombre < temp->suiant->nombre)
			return (i);
		temp = temp->suivant;
		i++;
	}
}

int	*number_for_place(Element **a, Element **b, int *i)
{
	Element *temp;
	Element *temp1;
	int	y;
	int	x;

	temp = *a;
	temp1 = *b;
	x = 0;
	while(temp1)
	{
		y = wich_place(temp, temp1);
		temp = *a;
		if (y > (element_size(temp) / 2))
		{
			i[x] = i[x] + (y - element_size(temp) + 2);
		}
		if (y <= (element_size(temp) / 2))
		{
			i[x] = i[x] + y;
 		}
		x++;
	}
	return (i);
}
