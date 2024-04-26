#include "libft.h"

/*					ft_atoi						*/
/*
int	main()
{
	printf("%d\n", ft_atoi("  1340ab"));
	return (0);
}
*/


/*				ft_toupper/lower				*/
/*
int	main()
{
	ft_toupper('a');
	return (0);
}
*/


/*					ft_is...					*/
/*
int	main()
{
	ft_isdigit('a');
	return (0);
}
*/

/*					*ft_strchr					*/
/*
int	main()
{
	printf("%s\n", ft_strchr("carrot", 'a'));
	return (0);
}
*/

/*					*ft_strrchr					*/
/*
int	main()
{
	printf("%s\n", ft_strrchr("carrot", 'o'));
	return (0);
}
*/

/*					ft_strlcat					*/
/*
int	main()
{
	char	src[] = "12345678";
	char	dest[] = "123456";

	printf("%zu\n", ft_strlcat(dest, src, 7));
	return (0);
}
*/

/*					ft_strlcpy					*/
/*
int	main(void)
{
	char	s[] = "World!";
	char	d[] = "Hello ";
	printf("%d | %s\n", ft_strlcpy(d, s, 4), d);
	return (0);
}
*/

/*					ft_strncmp					*/
/*
int	main()
{
	printf("%d\n", ft_strncmp("hey", "hey there", 4));
	return (0);
}
*/

/*					ft_memset					*/
/*
#include "libft.h"
int	main()
{
	char str [] = "abc";

	ft_memset(str, "o", 3);
	printf("%s\n", str);
	return (0);
}
*/

/*					ft_bzero					*/
/*
int	main()
{
	char	str[] = "zeros";
	
	printf("%s\n", str);
	ft_bzero(str, 5);
	printf("%s\n", str);
	return (0);
}
*/

/*					ft_memcpy					*/
/*
int	main()
{
	char	src[] = "12345";
	char	dest[10] = "12345";

	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}
*/

/*					ft_memmove					*/
/*
int	main()
{
	char	src[] = "hello";
	char	dest[10] = "lala";

	ft_memmove(dest, src + 1, 3);
	printf("%s\n", dest);
	return (0);
}
*/

/*					ft_memchr					*/
/*
int	main()
{
	char	s[] = "abcdefg";
	char	*res;
	res = ft_memchr(s, 'b', 5);

	printf("%s\n", res);
	return (0);
}
*/

/*					ft_memcmp					*/
/*
int	main()
{
	char	*str1;
	char	*str2;

	str1 = "abcd";
	str2 = "abcd";
	
	printf("%d\n", ft_memcmp(str1, str2, 6));
	return (0);
}*/

/*					ft_strdup					*/
/*
int	main()
{
	char *s1 = "123";
	char *s2 = ft_strdup(s1);
	
	printf("%s\n", s2);
}
*/

/*					ft_substr					*/
/*
int	main()
{
	const char	*str;

	str = "12345";
	printf("%s\n", ft_substr(str, 2, 3));
	return (0);
}
*/

/*					ft_strjoin					*/
/*
int	main()
{
	char	*s1;
	char	*s2;

	s1 = "123";
	s2 = "lala";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/

/*					ft_strtrim					*/
/*
int	main()
{
	char	*s1;
	char	*set;

	s1 = "abbbababab123ab45ababababa";
	set = "ab";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/

/*					ft_split					*/
/*
int	main()
{
	int	i;
	char	*str;
	char	c;
	char	**big;

	i = 0;
	str = "hey there how you doing";
	c = ' ';
	big = ft_split(str, c);
	while (big[i])
	{
		printf("[%d]: %s\n", i, big[i]);
		i++;
	}
	free(big);
	return (0);
}
*/

/*					ft_itoa					*/
/*
int	main()
{
	printf("%s\n", ft_itoa(3));
	printf("%s\n", ft_itoa(-3));
	printf("%s\n", ft_itoa(33));
	printf("%s\n", ft_itoa(-33));
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(98765));
	printf("%s\n", ft_itoa(-98765));
	printf("%s\n", ft_itoa(45));
	printf("%s\n", ft_itoa(-45));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	return (0);
}
*/

/*					ft_strmapi					*/
/*
char	my_func(unsigned int i, char c)
{
	printf("My function: index = %d and %c\n", i, c);
	return ('c' - 1);
}

int	main()
{
	char	*str;
	char	*newstr;

	str = "Hello";
	newstr = ft_strmapi(str, my_func);

	printf("%s\n", newstr);
	free (newstr);
	return (0);
}
*/

/*					ft_striteri					*/
/*
void    myfunction(unsigned int i, char *c)
{
	printf("My inner function: index = %d and the string is %s\n", i, c);
	*c = ft_toupper((unsigned char)*c);
}

int	main()
{
	char	str[] = "heyhey";
	
	printf("Before striteri str is %s\n", str);
	ft_striteri(str, myfunction);
	printf("After striteri str is %s\n", str);
	return (0);
}
*/
