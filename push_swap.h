/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:37:26 by kortolan          #+#    #+#             */
/*   Updated: 2023/01/03 11:28:46 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
}

typedef struct Pile pile;
struct pile
{
    Element *premier;
}
