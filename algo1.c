int position_of_less(Element **a, Element **b)
{
    int *i;
    int j;
    int k;

    i = number_of_mouvement_top_b(b);
    i = number_for_place(a, b, i);
    j = 1;
    k = i[0];
    while(i[j])
    {
        if (i[j] < k)
            k = i[j];
        j++;
    }
    j = 0;
    while (i[j] && i[j] != k)
        j++;
    free (i);
    return (j + 1);
}

void    good_position(Element **a, Element **b)
{
    int i;
    int y;
    int *temp1;
    int *temp;

    i = position_of_less(a, b);
    temp1 = *b;
    temp = *a;
    while (i-- > 0)
        temp1 = temp1->suivant;
    y = wich_place(temp, temp1);
    temp = *a;
    if (y > ((element_size(temp) / 2)+ 1))
		{
            while (y++ < element_size(temp) + 1)
                rrab(a);
            pa(a, b);
		}
	if (y <= ((element_size(temp) / 2) + 1))
		{
            while (y-- > 1)
                ra(*a);
            pa(a, b);
 		}
}




