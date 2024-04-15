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
int	main()
{
	char	src[] = "12345678";
	char	dest[] = "123456";

	printf("%zu\n", ft_strlcat(dest, src, 7));
	return (0);
}

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


