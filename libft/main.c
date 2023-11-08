/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:26:44 by mkane             #+#    #+#             */
/*   Updated: 2023/11/08 20:16:15 by mkane            ###   ########.fr       */
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
	// printf("%d\n", ft_strlen("salut"));
	// printf("%lu\n", strlen("salut"));
	// printf("==============================\n");
	// printf("%d\n", ft_strlen("ca va "));
	// printf("%lu\n", strlen("ca va "));
	// printf("==============================\n");
	// printf("%d\n", ft_strlen("42 est top"));
	// printf("%lu\n", strlen("42 est top"));
	// printf("==============================\n");
	// printf("%d\n", ft_strlen("hello world"));
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
	int array1 [] = { 54, 85, 20, 63, 21 };
	int array2 [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 10;
	
	ft_bzero( array1,size );
    bzero( array2, size );

	for( int length=0; length<5; length++) {
        printf( "%d ", array1[ length ] );
    }
    printf( "\n==========================\n" );

    for( int length=0; length<5; length++) {
        printf( "%d ", array2[ length ] );
    }
    printf( "\n" );

	int array3 [] = { -54, -85, 20, 63, 21 };
	int array4 [] = { -54, -85, 20, 63, 21 };
	
	ft_bzero( array3, size );
    bzero( array4, size );

	for( int length=0; length<5; length++) {
        printf( "%d ", array3[ length ] );
    }
    printf( "\n==========================\n" );

    for( int length=0; length<5; length++) {
        printf( "%d ", array4[ length ] );
    }
    printf( "\n" );
}