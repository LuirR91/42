/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:23:50 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/02 17:28:29 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Functions from <ctype.h> library

int		ft_isascii(int c);
int		ft_isalnum(int i);
int		ft_isalpha(int c);
int		ft_isdigit(int d);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

// Functions from <stdlib.h> library

int 	ft_atoi(const char *str); /* convert ASCII string to integer */
void	*ft_calloc(size_t n, size_t size); /* memory allocation */


// Functions from <strings.h> library

void    ft_bzero(void *s, size_t n); /* write zeroes to a byte string */
void	*ft_memset(void *str, int c, size_t n); /* write a byte to a byte string */
void	*ft_memchr(const void *s, int c, size_t n); /* locate byte in byte string */
int		ft_memcmp(const void *s1, const void *s2, size_t n); /* compare byte string */
void	*ft_memcpy(void *dest, const void *src, size_t n); /* copy memory area */
void	*ft_memmove(void *dest, const void *src, size_t n); /* copy byte string */


// Functions from <string.h> library

char	*ft_strchr(const char *str, int c); /* locate character in string (first occurrence) */
char	*ft_strrchr(const char *str, int c); /* locate character in string (last occurrence) */
char	*ft_strnstr(const char *str, const char *little, size_t len); /* locate a substring in a string (size-bounded) */
int		ft_strncmp(const char *s1, const char *s2, size_t n); /* compare strings (size-bounded) */
size_t	ft_strlcat(char *dst, const char *src, size_t size); /* size-bounded string concatenation */
size_t	ft_strlcpy(char *dest, char *src, size_t size); /* size-bounded string copying */
size_t	ft_strlen(const char *str); /* size of a string */
char	*ft_strdup(const char* str); /* save a copy of a string (with malloc) */


// Non-standard functions

char	*ft_itoa(int n); /* convert integer to ASCII string */
char	*ft_substr(const char* s, unsigned int start, size_t len); /* extract substring from string */
char	*ft_strtrim(const char *s1, const char *s2); /* trim beginning and end of string with the specified characters */
char	*ft_strjoin(const char *s1, const char *s2); /* concatenate two strings into a new string (with malloc) */
char	**ft_split(char const *s, char c); /* split string, with specified character as delimiter, into an array of strings */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); /* applies a function to each character of a string. */
void    ft_striteri(char *s, void (*f)(unsigned int, char*)); /* applies a function to each character of a string. */
void    ft_putchar_fd(char c, int fd); /* output a char to a file descriptor */
void	ft_putstr_fd(char *s, int fd); /* output a string to a file descriptor. */
void	ft_putendl_fd(char *s, int fd); /* output a string to a file descriptor, followed by a new line */
void    ft_putnbr_fd(int n, int fd); /* output a number to a file descriptor */

// Linked list functions

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list  *ft_lstnew(void *content); /* creates a new list element */
void    ft_lstadd_front(t_list **lst, t_list *new); /* adds an element at the beginning of a list */
int     ft_lstsize(t_list *lst); /* counts the number of elements in a list */
t_list  *ft_lstlast(t_list *lst); /* returns the last element of the list */
void    ft_lstadd_back(t_list **lst, t_list *new); /* adds an element at the end of a list */
void    ft_lstdelone(t_list *lst, void (*del)(void *)); /*  */
void    ft_lstclear(t_list **lst, void (*del)(void *)); /* deletes and free list */
void    ft_lstiter(t_list *lst, void (*f)(void *)); /* applies a function to each element of a list */
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); /* applies a function to each element of a list */

#endif
