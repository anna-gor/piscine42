/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 12:32:59 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/12 11:39:09 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

#include<stdio.h>  // Для printf
#include<string.h> // Для strdup
#include<stdlib.h> // Для free
   
     int *ft_range(int min, int max)
	  {
		       if(min >=max)
			        {
				             return (NULL);
					      }
		        int i=0;
		         int *a;
			      a = (int*)malloc((max-min) * sizeof(*a));
			       while (min+i < max)
				        {
					             a[i]=min+i;
						          i++;
						       }
			    return (a);
			     free(a);
				  }
				  
				    int main()
	  {
		       int *mas;
		        int max = 48;
		         int min = 41;
			      mas = ft_range(min,max);
			       for (int i=0; i<max-min;i++)
				        {
					             printf("%d\n", mas[i]);
						      }
			    //printf ("len: %lu\n", sizeof(mas)/sizeof(*mas));
			         //printf ("ft: %s\n", ft_strdup (str));
				      free (mas);
				  
					        return(0);
				    }
