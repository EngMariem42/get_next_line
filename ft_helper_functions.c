/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahmed <marahmed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 00:59:05 by marahmed          #+#    #+#             */
/*   Updated: 2025/02/01 20:39:43 by marahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
char *ft_substr(char *s, int start, int len)
{
	char *sub;
	int	i;
	
	if(!s||start<0||len<=0)
		return(NULL);
	sub=malloc(len+1);
	if(!sub)
		return(NULL);
	i=0;
	while(i<len&&s[start+i])
		sub[i++]=s[start+i];
	sub[i]='\0';
	return(sub);				
}


#include <stdio.h>
int main()
{
	char m[20]="qq ww rr tt";
	char *w=ft_substr(m,0, 30);
	printf("%s\n",w );
	
}