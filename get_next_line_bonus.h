/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:29:43 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/10/18 14:29:52 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* auxiliary functions */
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);

/* main function */
char	*get_next_line(int fd);

#endif
