/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:59:36 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/04 16:58:20 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/eugene/school_42/main/libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	size_t me_size; 
	size_t cp_size;
	int me_int;
	int cp_int;
	char	*me_char;
	char	*cp_char;
	long int me_long;
	long int cp_long;
	void	*me_void;
	void	*cp_void;
	void	*mem;
	char	*mem0;
	void	*mem1;
	void	*mem2;
	char	*mem00;


//*ft_memset(void *b, int c, size_t len);
/*	printf("ft_memset\n");
	mem0 = "hi";
	mem = (void *)mem0;
	if ((me_void = ft_memset(mem, 100, 1)) != (cp_void = memset(mem, 100, 1)))
			printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "hi";
	mem = (void *)mem0;
	if ((me_void = ft_memset(mem, '\0', 10)) != (cp_void = memset(mem, '\0', 10)))
			printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "hi";
	mem = (void *)mem0;
	if ((me_void = ft_memset(mem, 'i', 1)) != (cp_void = memset(mem, 'i', 1)))
			printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "hi";
	mem = (void *)mem0;
	if ((me_void = ft_memset(mem, 10, 1)) != (cp_void = memset(mem, 10, 1)))
			printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
*/

//ft_bzero(void *s, size_t n);
	printf("ft_bzero\n");
	mem0 = "hi";
	mem1 = (void *)mem;
	mem2 = (void *)mem;
	ft_bzero(mem1, 100);
	bzero(mem2, 100);
	if (mem1 != mem2)
			printf("test0\nme : %s\ncp : %s\nERROR\n\n", mem1, mem2);
	mem0 = "hi";
	mem1 = (void *)mem;
	mem2 = (void *)mem;
	ft_bzero(mem1, 2);
	bzero(mem2, 2);
	if (mem1 != mem2)
			printf("test1\nme : %s\ncp : %s\nERROR\n\n", mem1, mem2);
	mem0 = "hi";
	mem1 = (void *)mem;
	mem2 = (void *)mem;
	ft_bzero(mem1, 3);
	bzero(mem2, 3);
	if (mem1 != mem2)
			printf("test2\nme : %s\ncp : %s\nERROR\n\n", mem1, mem2);
	mem0 = "hi";
	mem1 = (void *)mem;
	mem2 = (void *)mem;
	ft_bzero(mem1, 1);
	bzero(mem2, 1);
	if (mem1 != mem2)
			printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	
//*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
/*	printf("ft_memcpy\n");
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem0;
	mem2 = (void *)mem00;

	if ((me_void = ft_memcpy(mem1, mem2, 1)) != (cp_void = memcpy(mem1, mem2, 1)))
			printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem00;
	mem2 = (void *)mem0;

	if ((me_void = ft_memcpy(mem1, mem2, 1)) != (cp_void = memcpy(mem1, mem2, 1)))
			printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem0;
	mem2 = (void *)mem00;

	if ((me_void = ft_memcpy(mem1, mem2, 10)) != (cp_void = memcpy(mem1, mem2, 10)))
			printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem00;
	mem2 = (void *)mem0;

	if ((me_void = ft_memcpy(mem1, mem2, 10)) != (cp_void = memcpy(mem1, mem2, 10)))
			printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
*/
//*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
/*	printf("ft_memccpy");
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem0;
	mem2 = (void *)mem00;

	if ((me_void = ft_memccpy(mem1, mem2, 'i', 1)) != (cp_void = memccpy(mem1, mem2, 'i', 1)))
			printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem00;
	mem2 = (void *)mem0;

	if ((me_void = ft_memccpy(mem1, mem2, 'w', 1)) != (cp_void = memccpy(mem1, mem2, 'w', 1)))
			printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem0;
	mem2 = (void *)mem00;

	if ((me_void = ft_memccpy(mem1, mem2, '\0', 10)) != (cp_void = memccpy(mem1, mem2, '\0', 10)))
			printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem00;
	mem2 = (void *)mem0;

	if ((me_void = ft_memccpy(mem1, mem2, 0, 10)) != (cp_void = memccpy(mem1, mem2, 0, 10)))
			printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
*/
//*ft_memmove(void *dst, const void *src, size_t len);
/*	printf("ft_memmove");
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem0;
	mem2 = (void *)mem00;

	if ((me_void = ft_memmove(mem1, mem2, 1)) != (cp_void = memmove(mem1, mem2, 1)))
			printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem00;
	mem2 = (void *)mem0;

	if ((me_void = ft_memmove(mem1, mem2, 1)) != (cp_void = memmove(mem1, mem2, 1)))
			printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem0;
	mem2 = (void *)mem00;

	if ((me_void = ft_memmove(mem1, mem2, 10)) != (cp_void = memmove(mem1, mem2, 10)))
			printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem00;
	mem2 = (void *)mem0;

	if ((me_void = ft_memmove(mem1, mem2, 10)) != (cp_void = memmove(mem1, mem2, 10)))
			printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
*/
//*ft_memchr(const void *s, int c, size_t n);
	printf("ft_memchr\n");
	mem0 = "hi";
	mem = (void *)mem;
	if ((me_void = ft_memchr(mem, 100, 1)) != (cp_void = memchr(mem, 100, 1)))
			printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "hi";
	mem = (void *)mem;
	if ((me_void = ft_memchr(mem, 100, 10)) != (cp_void = memchr(mem, 100, 10)))
			printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "hi";
	mem = (void *)mem;
	if ((me_void = ft_memchr(mem, 'i', 1)) != (cp_void = memchr(mem, 'i', 1)))
			printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "hi";
	mem = (void *)mem;
	if ((me_void = ft_memchr(mem, 10, 1)) != (cp_void = memchr(mem, 10, 1)))
			printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
//ft_memcmp(const void *s1, const void *s2, size_t n);
/*	printf("ft_memcmp");
	mem0 = "hi";
	mem00 = "hello";
	mem1 = (void *)mem0;
	mem2 = (void *)mem00;

	if ((me_void = ft_memmove(mem1, mem2, 1)) != (cp_void = memmove(mem1, mem2, 1)))
			printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "mi";
	mem00 = "hello";
	mem1 = (void *)mem00;
	mem2 = (void *)mem0;

	if ((me_void = ft_memmove(mem1, mem2, 1)) != (cp_void = memmove(mem1, mem2, 1)))
			printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "hello";
	mem00 = "hello";
	mem1 = (void *)mem0;
	mem2 = (void *)mem00;

	if ((me_void = ft_memmove(mem1, mem2, 10)) != (cp_void = memmove(mem1, mem2, 10)))
			printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
	mem0 = "hi";
	mem00 = "hello";
	mem1 = (void *)mem00;
	mem2 = (void *)mem0;

	if ((me_void = ft_memmove(mem1, mem2, 10)) != (cp_void = memmove(mem1, mem2, 10)))
			printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_void, cp_void);
*/
//ft_strlen(const char *s);
	printf("ft_strlen\n");
	if ((me_size = ft_strlen("Hello World")) != (cp_size = strlen("Hello World")))
		printf("test0\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlen("")) != (cp_size = strlen("")))
		printf("test1\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlen(" ")) != (cp_size = strlen(" ")))
		printf("test2\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlen("\t")) != (cp_size = strlen("\t")))
		printf("test3\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlen("1")) != (cp_size = strlen("1")))
		printf("test4\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlen("Привет, Мир!")) != (cp_size = strlen("Привет, Мир!")))
		printf("test5\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlen("1234567890")) != (cp_size = strlen("1234567890")))
		printf("test6\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlen("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop")) != (cp_size = strlen("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop")))
		printf("test7\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlen("П\t")) != (cp_size = strlen("П\t")))
		printf("test8\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
//*ft_strdup(const char *s1);
/*
	printf("ft_strdup\n");
	if ((me_char = ft_strdup("Hello World")) != (cp_char = strdup("Hello World")))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strdup("")) != (cp_char = strdup("")))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strdup(" ")) != (cp_char = strdup(" ")))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strdup("\t")) != (cp_char = strdup("\t")))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strdup("1")) != (cp_char = strdup("1")))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strdup("Привет, Мир!")) != (cp_char = strdup("Привет, Мир!")))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strdup("1234567890")) != (cp_char = strdup("1234567890")))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strdup("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop")) != (cp_char = strdup("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop")))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strdup("П\t")) != (cp_char = strdup("П\t")))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
*/
//*ft_strcpy(char * dst, const char * src);
/*
	printf("ft_strcpy\n");
	if ((me_char = ft_strcpy("Hello World", "hi")) != (cp_char = strcpy("Hello World", "hi")))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcpy("", "Hello")) != (cp_char = strcpy("", "hello")))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcpy(" ", "\v")) != (cp_char = strcpy(" ", "\v")))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcpy("hello", "\t")) != (cp_char = strcpy("helloo","\t")))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcpy("hello", "")) != (cp_char = strcpy("hello", "")))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcpy("Привет, Мир!", "что")) != (cp_char = strcpy("Привет, Мир!", "что")))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcpy("1234567890", "\t")) != (cp_char = strcpy("1234567890", "\t")))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcpy("why", "qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop")) != (cp_char = strcpy("why", "qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop")))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcpy("П\t", "hi\0")) != (cp_char = strcpy("П\t", "hi\0")))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
		*/
//*ft_strncpy(char * dst, const char * src, size_t len);
/*
	printf("ft_strncpy\n");
	if ((me_char = ft_strncpy("Hello World", "hi", 5)) != (cp_char = strncpy("Hello World", "hi", 5)))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncpy("HI everyone man", "hello", 10)) != (cp_char = strncpy("Hi everyone man", "hello", 10)))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncpy(" ", "\v", 0)) != (cp_char = strncpy(" ", "\v", 0)))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncpy("hello", "\t", 2)) != (cp_char = strncpy("helloo","\t", 2)))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncpy("hello", "", 3)) != (cp_char = strncpy("hello", "", 3)))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncpy("Привет, Мир!", "что", 3)) != (cp_char = strncpy("Привет, Мир!", "что", 3)))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncpy("1234567890", "\t", 10)) != (cp_char = strncpy("1234567890", "\t", 10)))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncpy("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "why", 5)) != (cp_char = strncpy("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "why", 5)))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncpy("П\t", "hi\0", 0)) != (cp_char = strncpy("П\t", "hi\0", 0)))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
*/
//*ft_strcat(char *restrict s1, const char *restrict s2);
/*	printf("ft_strcat\n");
	if ((me_char = ft_strcat("qwertyuiop", "Hello World")) != (cp_char = strcat("qwertyuiop", "Hello World")))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char= ft_strcat("", "")) != (cp_char= strcat("", "")))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcat("   ", "HI")) != (cp_char = strcat("   ", "HI")))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcat("Hello", "i")) != (cp_char = strcat("Hello", "Hi")))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcat("1", "5")) != (cp_char = strcat("1", "5")))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcat("Привет, Мир!", "Hello")) != (cp_char= strcat("Привет, Мир!", "hello")))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);	
        if ((me_char = ft_strcat("123456", "qwertyuiop")) != (cp_char = strcat("123456", "qwertyuiop")))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcat("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "")) != (cp_char = strcat( "qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "")))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strcat("П", "lsm")) != (cp_char = strcat("П", "lsm")))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
*/
//*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
/*	printf("ft_strncat\n");
	if ((me_char = ft_strncat("qwertyuiop", "Hello World", 4)) != (cp_char = strncat("qwertyuiop", "Hello World", 4)))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char= ft_strncat("", "", 0)) != (cp_char= strncat("", "", 0)))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncat("   ", "HI", 2)) != (cp_char = strncat("   ", "HI", 2)))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncat("Hello", "i", 3)) != (cp_char = strncat("Hello", "Hi", 3)))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncat("1", "5", 1)) != (cp_char = strncat("1", "5", 1)))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncat("Привет, Мир!", "Hello", 20)) != (cp_char= strncat("Привет, Мир!", "hello", 20)))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);	
        if ((me_char = ft_strncat("123456", "qwertyuiop", 3)) != (cp_char = strncat("123456", "qwertyuiop", 3)))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncat("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "", 10)) != (cp_char = strncat( "qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "", 10)))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strncat("П", "lsm", 0)) != (cp_char = strncat("П", "lsm", 0)))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
		*/
//ft_strlcat(char * restrict dst, const char * restrict src, size_t size);

/*	printf("ft_strlcat\n");
	if ((me_size = ft_strlcat("qwertyuiop", "Hello World", 4)) != (cp_size = strlcat("qwertyuiop", "Hello World", 4)))
		printf("test0\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlcat("", "", 0)) != (cp_size = strlcat("", "", 0)))
		printf("test1\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlcat("   ", "HI", 2)) != (cp_size = strlcat("   ", "HI", 2)))
		printf("test2\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlcat("Hello", "i", 3)) != (cp_size = strlcat("Hello", "Hi", 3)))
		printf("test3\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlcat("1", "5", 1)) != (cp_size = strlcat("1", "5", 1)))
		printf("test4\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlcat("Привет, Мир!", "Hello", 20)) != (cp_size = strlcat("Привет, Мир!", "hello", 20)))
		printf("test5\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);	
        if ((me_size = ft_strlcat("123456", "qwertyuiop", 3)) != (cp_size = strlcat("123456", "qwertyuiop", 3)))
		printf("test6\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlcat("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "", 10)) != (cp_size = strlcat( "qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "", 10)))
		printf("test7\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
	if ((me_size = ft_strlcat("П", "lsm", 0)) != (cp_size = strlcat("П", "lsm", 0)))
		printf("test8\nme : %zu\ncp : %zu\nERROR\n\n", me_size, cp_size);
*/

//*ft_strchr(const char *s, int c);
	printf("ft_strchr\n");
	if ((me_char = ft_strchr("Hello World", '0')) != (cp_char = strchr("Hello World", '0')))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strchr("", 10)) != (cp_char = strchr("", 10)))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strchr(" ", 'h')) != (cp_char = strchr(" ", 'h')))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strchr("\t", '\t')) != (cp_char = strchr("\t", '\t')))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strchr("1", '\0')) != (cp_char = strchr("1", '\0')))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strchr("Привет, Мир!", 'h')) != (cp_char = strchr("Привет, Мир!", 'h')))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strchr("1234567890", '8')) != (cp_char = strchr("1234567890", '8')))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strchr("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", 'e')) != (cp_char = strchr("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", 'e')))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strchr("П\t", 15)) != (cp_char = strchr("П\t", 15)))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);

//*ft_strrchr(const char *s, int c);
	printf("ft_strrchr\n");
	if ((me_char = ft_strrchr("Hello World", '0')) != (cp_char = strrchr("Hello World", '0')))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strrchr("", 10)) != (cp_char = strrchr("", 10)))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strrchr(" ", 'h')) != (cp_char = strrchr(" ", 'h')))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strrchr("\t", '\t')) != (cp_char = strrchr("\t", '\t')))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strrchr("1", '\0')) != (cp_char = strrchr("1", '\0')))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strrchr("Привет, Мир!", 'h')) != (cp_char = strrchr("Привет, Мир!", 'h')))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strrchr("1234567890", '8')) != (cp_char = strrchr("1234567890", '8')))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strrchr("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", 'e')) != (cp_char = strrchr("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", 'e')))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strrchr("П\t", 15)) != (cp_char = strrchr("П\t", 15)))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
//*ft_strstr(const char *haystack, const char *needle);
	printf("ft_strstr\n");
	if ((me_char = ft_strstr("qwertyuiop", "Hello World")) != (cp_char = strstr("qwertyuiop", "Hello World")))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char= ft_strstr("", "")) != (cp_char= strstr("", "")))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strstr("   ", "HI")) != (cp_char = strstr("   ", "HI")))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strstr("Hello", "i")) != (cp_char = strstr("Hello", "Hi")))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strstr("1", "5")) != (cp_char = strstr("1", "5")))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strstr("Привет, Мир!", "Hello")) != (cp_char= strstr("Привет, Мир!", "hello")))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);	
        if ((me_char = ft_strstr("123456", "qwertyuiop")) != (cp_char = strstr("123456", "qwertyuiop")))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strstr("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "")) != (cp_char = strstr( "qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "")))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strstr("П", "lsm")) != (cp_char = strstr("П", "lsm")))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);

//*ft_strnstr(const char *haystack, const char *needle, size_t len);
	printf("ft_strnstr\n");
	if ((me_char = ft_strnstr("qwertyuiop", "Hello World", 4)) != (cp_char = strnstr("qwertyuiop", "Hello World", 4)))
		printf("test0\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char= ft_strnstr("", "", 0)) != (cp_char= strnstr("", "", 0)))
		printf("test1\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strnstr("   ", "HI", 2)) != (cp_char = strnstr("   ", "HI", 2)))
		printf("test2\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strnstr("Hello", "i", 3)) != (cp_char = strnstr("Hello", "Hi", 3)))
		printf("test3\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strnstr("1", "5", 1)) != (cp_char = strnstr("1", "5", 1)))
		printf("test4\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strnstr("Привет, Мир!", "Hello", 20)) != (cp_char= strnstr("Привет, Мир!", "hello", 20)))
		printf("test5\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);	
        if ((me_char = ft_strnstr("123456", "qwertyuiop", 3)) != (cp_char = strnstr("123456", "qwertyuiop", 3)))
		printf("test6\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strnstr("qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "", 10)) != (cp_char = strnstr( "qwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiopqwertyuiop", "", 10)))
		printf("test7\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);
	if ((me_char = ft_strnstr("П", "lsm", 0)) != (cp_char = strnstr("П", "lsm", 0)))
		printf("test8\nme : %s\ncp : %s\nERROR\n\n", me_char, cp_char);

//ft_strcmp(const char *s1, const char *s2);
    printf("ft_strcmp\n");
	if ((me_int = ft_strcmp("test\00", "test\0")) != (cp_int = strcmp("test\00", "test\0")))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
    if ((me_int = ft_strcmp("test\00", "test\0")) != (cp_int = strcmp("test\00", "test\0")))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
    if ((me_int = ft_strcmp("", "")) != (cp_int = strcmp("", "")))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
    if ((me_int = ft_strcmp("     abc", "     abd")) != (cp_int = strcmp("     abc", "     abd")))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);


//ft_strncmp(const char *s1, const char *s2, size_t n);
    printf("ft_strncmp\n");
	if ((me_int = ft_strncmp("test\00", "test\0", 10)) != (cp_int = strncmp("test\00", "test\0", 10)))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
    if ((me_int = ft_strncmp("test\00", "test\0", 2)) != (cp_int = strncmp("test\00", "test\0", 2)))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
    if ((me_int = ft_strncmp("", "", 3)) != (cp_int = strncmp("", "", 3)))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
    if ((me_int = ft_strncmp("     abc", "     abd", 3)) != (cp_int = strncmp("     abc", "     abd", 3)))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);

//ft_atoi(const char *str);
	printf("ft_atoi\n");
	if ((me_long = ft_atoi("test")) != (cp_long = atoi("test")))
		printf("test0\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("100")) != (cp_long = atoi("100")))
		printf("test1\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("   \t\n100")) != (cp_long = atoi("   \t\n100")))
		printf("test2\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("    -100   ")) != (cp_long = atoi("   -100   ")))
		printf("test3\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("  ++++++++++-100  ")) != (cp_long = atoi("  ++++++++++-100  ")))
		printf("test4\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("   +++100")) != (cp_long = atoi("   +++100")))
		printf("test5\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("--200")) != (cp_long = atoi("--200")))
		printf("test6\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("  -200")) != (cp_long = atoi("  -200")))
		printf("test7\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("-9223372036854775808")) != (cp_long = atoi("-9223372036854775808")))
		printf("test8\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("9223372036854775810")) != (cp_long = atoi("9223372036854775810")))
		printf("test9\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("-9223372036854775811")) != (cp_long = atoi("-9223372036854775811")))
		printf("test10\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("+9223372036854775815")) != (cp_long = atoi("+9223372036854775810")))
		printf("test11\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("-9223372036854775800")) != (cp_long = atoi("-9223372036854775800")))
		printf("test12\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);
	if ((me_long = ft_atoi("9223372036854775800")) != (cp_long = atoi("9223372036854775800")))
		printf("test12\nme : %ld\ncp : %ld\nERROR\n\n", me_long, cp_long);

//ft_isalpha(int c);
	printf("ft_isalpha\n");
	if ((me_int = ft_isalpha(0)) != (cp_int = isalpha(0)))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalpha(100)) != (cp_int = isalpha(100)))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalpha(128)) != (cp_int = isalpha(128)))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalpha(50)) != (cp_int = isalpha(50)))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalpha(-5)) != (cp_int = isalpha(-5)))
		printf("test4\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalpha(12)) != (cp_int = isalpha(12)))
		printf("test5\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalpha(145)) != (cp_int = isalpha(145)))
		printf("test6\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);

//ft_isdigit(int c);
	printf("ft_isdigit\n");
	if ((me_int = ft_isdigit(0)) != (cp_int = isdigit(0)))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isdigit(100)) != (cp_int = isdigit(100)))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isdigit(128)) != (cp_int = isdigit(128)))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isdigit(50)) != (cp_int = isdigit(50)))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isdigit(-5)) != (cp_int = isdigit(-5)))
		printf("test4\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isdigit(12)) != (cp_int = isdigit(12)))
		printf("test5\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isdigit(145)) != (cp_int = isdigit(145)))
		printf("test6\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);

//ft_isalnum(int c);
	printf("ft_isalnum\n");
	if ((me_int = ft_isalnum(0)) != (cp_int = isalnum(0)))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalnum(100)) != (cp_int = isalnum(100)))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalnum(128)) != (cp_int = isalnum(128)))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalnum(50)) != (cp_int = isalnum(50)))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalnum(-5)) != (cp_int = isalnum(-5)))
		printf("test4\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalnum(12)) != (cp_int = isalnum(12)))
		printf("test5\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isalnum(145)) != (cp_int = isalnum(145)))
		printf("test6\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);

//ft_isascii(int c);
	printf("ft_isascii\n");
	if ((me_int = ft_isascii(0)) != (cp_int = isascii(0)))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isascii(100)) != (cp_int = isascii(100)))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isascii(128)) != (cp_int = isascii(128)))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isascii(50)) != (cp_int = isascii(50)))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isascii(-5)) != (cp_int = isascii(-5)))
		printf("test4\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isascii(12)) != (cp_int = isascii(12)))
		printf("test5\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isascii(145)) != (cp_int = isascii(145)))
		printf("test6\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);

//ft_isprint(int c);
	printf("ft_print\n");
	if ((me_int = ft_isprint(0)) != (cp_int = isprint(0)))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isprint(100)) != (cp_int = isprint(100)))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isprint(128)) != (cp_int = isprint(128)))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isprint(50)) != (cp_int = isprint(50)))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isprint(-5)) != (cp_int = isprint(-5)))
		printf("test4\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isprint(12)) != (cp_int = isprint(12)))
		printf("test5\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_isprint(145)) != (cp_int = isprint(145)))
		printf("test6\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);

//ft_toupper(int c);
	printf("ft_toupper\n");
	if ((me_int = ft_toupper(0)) != (cp_int = toupper(0)))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_toupper(100)) != (cp_int = toupper(100)))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_toupper(128)) != (cp_int = toupper(128)))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_toupper(50)) != (cp_int = toupper(50)))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_toupper(-5)) != (cp_int = toupper(-5)))
		printf("test4\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_toupper(12)) != (cp_int = toupper(12)))
		printf("test5\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_toupper(145)) != (cp_int = toupper(145)))
		printf("test6\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);

//ft_tolower(int c);	
	printf("ft_isalpha\n");
	if ((me_int = ft_tolower(0)) != (cp_int = tolower(0)))
		printf("test0\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_tolower(100)) != (cp_int = tolower(100)))
		printf("test1\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_tolower(128)) != (cp_int = tolower(128)))
		printf("test2\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_tolower(50)) != (cp_int = tolower(50)))
		printf("test3\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_tolower(-5)) != (cp_int = tolower(-5)))
		printf("test4\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_tolower(12)) != (cp_int = tolower(12)))
		printf("test5\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);
	if ((me_int = ft_tolower(145)) != (cp_int = tolower(145)))
		printf("test6\nme : %d\ncp : %d\nERROR\n\n", me_int, cp_int);

	return (0);
}
