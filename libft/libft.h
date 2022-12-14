/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <ccalas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:14:28 by ccalas            #+#    #+#             */
/*   Updated: 2022/07/25 14:37:06 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

char	*ft_strjoin_2(char **s1, char **s2);
void	ft_free_null_str(char **str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strndup(char *src, int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
int		ft_lstsize(t_list *lst);
char	*ft_strchr(const char *str, int to_find_char);
char	*ft_strrchr(const char *string, int to_find_char);
char	*ft_strnstr(const char *str, const char *to_find, size_t size);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoin_null(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *sentence, int value, size_t count);
void	*ft_memchr(const void *memory_block, int search_char, size_t size);
void	*ft_memcpy(void *dest, const void *source, size_t size);
void	*ft_memmove(void *dest, const void *source, size_t n);
void	*ft_calloc(size_t element_count, size_t element_size);
void	ft_striteri(char	*s, void (*f)(unsigned int, char *));
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstlast(t_list *lst);

#endif
