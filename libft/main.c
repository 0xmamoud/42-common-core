/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:26:44 by mkane             #+#    #+#             */
/*   Updated: 2023/11/10 00:12:33 by kane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main()
{
	// int i =0;
	
	// testisalpha
	// while (i < 256)
	// {
	// 	int my_function = ft_isalpha(i);
	// 	int true_function = isalpha(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }
	
	// testisdigit
	// while (i < 256)
	// {
	// 	int my_function = ft_isdigit(i);
	// 	int true_function = isdigit(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }

	// testisalnum
	// while (i < 256)
	// {
	// 	int my_function = ft_isalnum(i);
	// 	int true_function = isalnum(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }

	// testisascii
	// while (i < 256)
	// {
	// 	int my_function = ft_isascii(i);
	// 	int true_function = isascii(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }

	// testisprint
	// while (i < 256)
	// {
	// 	int my_function = ft_isprint(i);
	// 	int true_function = isprint(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }

	// teststrlen
	// printf("%lu\n", ft_strlen("salut"));
	// printf("%lu\n", strlen("salut"));
	// printf("==============================\n");
	// printf("%ld\n", ft_strlen("ca va "));
	// printf("%lu\n", strlen("ca va "));
	// printf("==============================\n");
	// printf("%ld\n", ft_strlen("42 est top"));
	// printf("%lu\n", strlen("42 est top"));
	// printf("==============================\n");
	// printf("%ld\n", ft_strlen("hello world"));
	// printf("%lu\n", strlen("hello world"));
	// printf("==============================\n");

	// testmemset
	// int array1 [] = { 54, 85, 20, 63, 21 };
	// int array2 [] = { 54, 85, 20, 63, 21 };
    // size_t size = sizeof( int ) * 10;
	// ft_memset( array1, 0, size );
    // memset( array2, 0, size );
	// for( int length=0; length<5; length++) {
    //     printf( "%d ", array1[ length ] );
    // }
    // printf( "\n==========================\n" );
    // for( int length=0; length<5; length++) {
    //     printf( "%d ", array2[ length ] );
    // }
    // printf( "\n" );
	// int array3 [] = { -54, -85, 20, 63, 21 };
	// int array4 [] = { -54, -85, 20, 63, 21 };
	// ft_memset( array3, 0, size );
    // memset( array4, 0, size );
	// for( int length=0; length<5; length++) {
    //     printf( "%d ", array3[ length ] );
    // }
    // printf( "\n==========================\n" );
    // for( int length=0; length<5; length++) {
    //     printf( "%d ", array4[ length ] );
    // }
    // printf( "\n" );

	// testbzero
	// int array1 [] = { 54, 85, 20, 63, 21 };
	// int array2 [] = { 54, 85, 20, 63, 21 };
  //   size_t size = sizeof( int ) * 5;
	// ft_bzero( array1,size );
  //   bzero( array2, size );
	// for( int length=0; length<5; length++) {
  //       printf( "%d ", array1[ length ] );
  //   }
  //   printf( "\n==========================\n" );
  //   for( int length=0; length<5; length++) {
  //       printf( "%d ", array2[ length ] );
  //   }
  //   printf( "\n" );
	// int array3 [] = { -54, -85, 20, 63, 21 };
	// int array4 [] = { -54, -85, 20, 63, 21 };
	// ft_bzero( array3, size );
  //   bzero( array4, size );
	// for( int length=0; length<5; length++) {
  //       printf( "%d ", array3[ length ] );
  //   }
  //   printf( "\n==========================\n" );
  //   for( int length=0; length<5; length++) {
  //       printf( "%d ", array4[ length ] );
  //   }
  //   printf( "\n" );

	// testmemcpy
	// const char *src1 = "hello world";
	// const char *src2 = "hello world";
	// const char *src3 = "ici la terre";
	// const char *src4 = "ici la terre";
	// size_t n = 10;
	// char dest1[n];
	// char dest2[n];
	// char dest3[n];
	// char dest4[n];
	// ft_memcpy(dest1, src1, n);
	// memcpy(dest2, src2, n);
	// ft_memcpy(dest3, src3, n);
	// memcpy(dest4, src4, n);
	// size_t j = 0;
	// while (j < n)
	// {
	// 	printf("%ld\n", *dest1 + j);
	// 	printf("%ld\n", *dest2 + j);
	// 	printf("================================================\n");
	// 	printf("%ld\n", *dest3 + j);
	// 	printf("%ld\n", *dest4 + j);
	// 	printf("================================================\n");
	// 	j++;
	// }
	
	// testmemmove
	// const char *src1 = "hello world";
	// const char *src2 = "hello world";
	// const char *src3 = "ici la terre";
	// const char *src4 = "ici la terre";
	// size_t n = 20;
	// char dest1[n];
	// char dest2[n];
	// char dest3[n];
	// char dest4[n];
	// ft_memmove(dest1, src1, n);
	// memmove(dest2, src2, n);
	// ft_memmove(dest3, src3, n);
	// memmove(dest4, src4, n);
	// size_t j = 0;
	// while (j < n)
	// {
	// 	printf("%ld\n", *dest1 + j);
	// 	printf("%ld\n", *dest2 + j);
	// 	printf("================================================\n");
	// 	printf("%ld\n", *dest3 + j);
	// 	printf("%ld\n", *dest4 + j);
	// 	printf("================================================\n");
	// 	j++;
	// }

	// teststrlcpy
	// char src1[] = "Hello, World!";
    // char src2[] = "This is a test.";
    // char src3[] = "12345678901234567890";
    // char dst_ft1[20];
    // char dst_ft2[20];
    // char dst_ft3[20];
    // size_t result_ft1 = ft_strlcpy(dst_ft1, src1, sizeof(dst_ft1));
    // printf("ft_strlcpy Result for src1: %zu, dst: %s\n", result_ft1, dst_ft1);
    // size_t result_ft2 = ft_strlcpy(dst_ft2, src2, sizeof(dst_ft2));
    // printf("ft_strlcpy Result for src2: %zu, dst: %s\n", result_ft2, dst_ft2);
    // size_t result_ft3 = ft_strlcpy(dst_ft3, src3, sizeof(dst_ft3));
    // printf("ft_strlcpy Result for src3: %zu, dst: %s\n", result_ft3, dst_ft3);

	// teststrlcat
	// const char *src1 = "wolrdhello ";
	// const char *src2 = "salut ça va ?";
	// char dest1[25] = "hello";
	// char dest2[25] = "bien ?";
	// ft_strlcat(dest1, src1, 25);
	// printf("%ld\n", ft_strlcat(dest1, src1, 25));
	// printf("%s\n", dest1);
	// ft_strlcat(dest2, src2, 25);
	// printf("%ld\n", ft_strlcat(dest2, src2, 25));
	// printf("%s\n", dest2);

	// testtoupper
	// char test_char_1 = 'a';
    // printf("Test 1:\n");
    // printf("ft_toupper: %c\n", ft_toupper(test_char_1));
    // printf("toupper: %c\n", toupper(test_char_1));
    // printf("\n");
    // char test_char_2 = 'Z';
    // printf("Test 2:\n");
    // printf("ft_toupper: %c\n", ft_toupper(test_char_2));
    // printf("toupper: %c\n", toupper(test_char_2));
    // printf("\n");
    // char test_char_3 = '$';
    // printf("Test 3:\n");
    // printf("ft_toupper: %c\n", ft_toupper(test_char_3));
    // printf("toupper: %c\n", toupper(test_char_3));

	// testtolower
	char test_char_1 = 'A';
    printf("Test 1:\n");
    printf("ft_tolower: %c\n", ft_tolower(test_char_1));
    printf("tolower: %c\n", tolower(test_char_1));
    printf("\n");
    char test_char_2 = 'z';
    printf("Test 2:\n");
    printf("ft_tolower: %c\n", ft_tolower(test_char_2));
    printf("tolower: %c\n", tolower(test_char_2));
    printf("\n");
    char test_char_3 = '7';
    printf("Test 3:\n");
    printf("ft_tolower: %c\n", ft_tolower(test_char_3));
    printf("tolower: %c\n", tolower(test_char_3));
}