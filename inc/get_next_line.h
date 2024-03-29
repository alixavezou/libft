/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:19:45 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/03 16:21:10 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_checkendofline(char *buffer_save);
size_t	_strlen(char *str);
char	*ft_print_line(char *buffer_save);
char	*ft_get_buffer_save(char *buffer_save);
char	*ft_read(int fd, char *buffer_read);
char	*get_next_line(int fd);
char	*_strdup(char *src);
char	*_strjoin(char *s1, char *s2);
char	*_substr(char *s, unsigned int start, size_t len);

#endif
