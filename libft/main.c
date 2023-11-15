/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:26:44 by mkane             #+#    #+#             */
/*   Updated: 2023/11/15 16:53:22 by mkane            ###   ########.fr       */
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
	// char test_char_1 = 'A';
    // printf("Test 1:\n");
    // printf("ft_tolower: %c\n", ft_tolower(test_char_1));
    // printf("tolower: %c\n", tolower(test_char_1));
    // printf("\n");
    // char test_char_2 = 'z';
    // printf("Test 2:\n");
    // printf("ft_tolower: %c\n", ft_tolower(test_char_2));
    // printf("tolower: %c\n", tolower(test_char_2));
    // printf("\n");
    // char test_char_3 = '7';
    // printf("Test 3:\n");
    // printf("ft_tolower: %c\n", ft_tolower(test_char_3));
    // printf("tolower: %c\n", tolower(test_char_3));

	// teststrchr
	// const char *test_str_1 = "Hello, World!";
    // int test_char_1 = 'o';
    // printf("Test 1:\n");
    // printf("ft_strchr: %s\n", ft_strchr(test_str_1, test_char_1));
    // printf("strchr: %s\n", strchr(test_str_1, test_char_1));
    // printf("\n");
    // const char *test_str_2 = "Hello, World!";
    // int test_char_2 = 'x';
    // printf("Test 2:\n");
    // printf("ft_strchr: %s\n", ft_strchr(test_str_2, test_char_2));
    // printf("strchr: %s\n", strchr(test_str_2, test_char_2));
    // printf("\n");
    // const char *test_str_3 = "";
    // int test_char_3 = 'A';
    // printf("Test 3:\n");
    // printf("ft_strchr: %s\n", ft_strchr(test_str_3, test_char_3));
    // printf("strchr: %s\n", strchr(test_str_3, test_char_3));

	// teststrrchar
	// const char *test_str_1 = "Hello, World!";
    // int test_char_1 = 'o';
    // printf("Test 1:\n");
    // printf("ft_strrchr: %s\n", ft_strrchr(test_str_1, test_char_1));
    // printf("strrchr: %s\n", strrchr(test_str_1, test_char_1));
    // printf("\n");
    // const char *test_str_2 = "Hello, World!";
    // int test_char_2 = 'x';
    // printf("Test 2:\n");
    // printf("ft_strrchr: %s\n", ft_strrchr(test_str_2, test_char_2));
    // printf("strrchr: %s\n", strrchr(test_str_2, test_char_2));
    // printf("\n");
    // const char *test_str_3 = "";
    // int test_char_3 = 'A';
    // printf("Test 3:\n");
    // printf("ft_strrchr: %s\n", ft_strrchr(test_str_3, test_char_3));
    // printf("strrchr: %s\n", strrchr(test_str_3, test_char_3));

	// teststrcmp
	// const char *test_str_1a = "Hello";
    // const char *test_str_1b = "Hello";
    // size_t test_n_1 = 6;
    // printf("Test 1:\n");
    // printf("ft_strncmp: %d\n", ft_strncmp(test_str_1a, test_str_1b, test_n_1));
    // printf("strncmp: %d\n", strncmp(test_str_1a, test_str_1b, test_n_1));
    // printf("\n");
    // const char *test_str_2a = "Hellb";
    // const char *test_str_2b = "Hilla";
    // size_t test_n_2 = 6;
    // printf("Test 2:\n");
    // printf("ft_strncmp: %d\n", ft_strncmp(test_str_2a, test_str_2b, test_n_2));
    // printf("strncmp: %d\n", strncmp(test_str_2a, test_str_2b, test_n_2));
    // printf("\n");
    // const char *test_str_3a = "Mello";
    // const char *test_str_3b = "Hills";
    // size_t test_n_3 = 6;
    // printf("Test 3:\n");
    // printf("ft_strncmp: %d\n", ft_strncmp(test_str_3a, test_str_3b, test_n_3));
    // printf("strncmp: %d\n", strncmp(test_str_3a, test_str_3b, test_n_3));

	// testmemchr
	// const char *test_str_1 = "Hello, World!";
    // int test_char_1 = 'o';
    // size_t test_n_1 = 13;
    // printf("Test 1:\n");
    // printf("ft_memchr: %p\n", ft_memchr(test_str_1, test_char_1, test_n_1));
    // printf("memchr: %p\n", memchr(test_str_1, test_char_1, test_n_1));
    // printf("\n");
    // const char *test_str_2 = "Hello, World!";
    // int test_char_2 = 'x';
    // size_t test_n_2 = 13;
    // printf("Test 2:\n");
    // printf("ft_memchr: %p\n", ft_memchr(test_str_2, test_char_2, test_n_2));
    // printf("memchr: %p\n", memchr(test_str_2, test_char_2, test_n_2));
    // printf("\n");
    // const char *test_str_3 = "Hello";
    // int test_char_3 = 'o';
    // size_t test_n_3 = 10;
    // printf("Test 3:\n");
    // printf("ft_memchr: %p\n", ft_memchr(test_str_3, test_char_3, test_n_3));
    // printf("memchr: %p\n", memchr(test_str_3, test_char_3, test_n_3));

	// testmemcmp
	// char test_str_1a[] = "Hello";
    // char test_str_1b[] = "Hello";
    // size_t test_n_1 = 5;
    // printf("Test 1:\n");
    // printf("ft_memcmp: %d\n", ft_memcmp(test_str_1a, test_str_1b, test_n_1));
    // printf("memcmp: %d\n", memcmp(test_str_1a, test_str_1b, test_n_1));
    // printf("\n");
    // char test_str_2a[] = "ABCDEF";
    // char test_str_2b[] = "ABZDEF";
    // size_t test_n_2 = 6;
    // printf("Test 2:\n");
    // printf("ft_memcmp: %d\n", ft_memcmp(test_str_2a, test_str_2b, test_n_2));
    // printf("memcmp: %d\n", memcmp(test_str_2a, test_str_2b, test_n_2));
    // printf("\n");
    // char test_str_3a[] = "Hello";
    // char test_str_3b[] = "H\0llo";
    // size_t test_n_3 = 5;
    // printf("Test 3:\n");
    // printf("ft_memcmp: %d\n", ft_memcmp(test_str_3a, test_str_3b, test_n_3));
    // printf("memcmp: %d\n", memcmp(test_str_3a, test_str_3b, test_n_3));

	
	// teststrnstr
	// const char *test_str_1_big = "Hello, World!";
    // const char *test_str_1_little = "World";
    // size_t test_n_1 = 13;
    // printf("Test 1:\n");
    // printf("ft_strnstr: %s\n", ft_strnstr(test_str_1_big, test_str_1_little, test_n_1));
    // printf("\n");
    // const char *test_str_2_big = "Hello, World!";
    // const char *test_str_2_little = "Universe";
    // size_t test_n_2 = 13;
    // printf("Test 2:\n");
    // printf("ft_strnstr: %s\n", ft_strnstr(test_str_2_big, test_str_2_little, test_n_2));
    // printf("\n");
    // const char *test_str_3_big = "Hello, World!";
    // const char *test_str_3_little = "World";
    // size_t test_n_3 = 10;
    // printf("Test 3:\n");
    // printf("ft_strnstr: %s\n", ft_strnstr(test_str_3_big, test_str_3_little, test_n_3));
	
	// testatoi
	// const char *test_str_1 = "12345";
    // printf("Test 1:\n");
    // printf("ft_atoi: %d\n", ft_atoi(test_str_1));
    // printf("atoi: %d\n", atoi(test_str_1));
    // printf("\n");
    // const char *test_str_2 = "-2147483648";
    // printf("Test 2:\n");
    // printf("ft_atoi: %d\n", ft_atoi(test_str_2));
    // printf("atoi: %d\n", atoi(test_str_2));
    // printf("\n");
    // const char *test_str_3 = "   -987  ";
    // printf("Test 3:\n");
    // printf("ft_atoi: %d\n", ft_atoi(test_str_3));
    // printf("atoi: %d\n", atoi(test_str_3));

	// testcalloc
	// size_t test_1_nmemb = 5;
    // size_t test_1_size = sizeof(int);
    // printf("Test 1:\n");
    // int *arr_1_ft = (int *)ft_calloc(test_1_nmemb, test_1_size);
    // int *arr_1_std = (int *)calloc(test_1_nmemb, test_1_size);
    // for (size_t i = 0; i < test_1_nmemb; ++i)
    // {
    //     printf("ft_calloc[%zu] = %d\n", i, arr_1_ft[i]);
    //     printf("calloc[%zu] = %d\n", i, arr_1_std[i]);
    // }
    // free(arr_1_ft);
    // free(arr_1_std);
    // printf("\n");
    // size_t test_2_nmemb = 3;
    // size_t test_2_size = sizeof(double);
    // printf("Test 2:\n");
    // double *arr_2_ft = (double *)ft_calloc(test_2_nmemb, test_2_size);
    // double *arr_2_std = (double *)calloc(test_2_nmemb, test_2_size);
    // for (size_t i = 0; i < test_2_nmemb; ++i)
    // {
    //     printf("ft_calloc[%zu] = %f\n", i, arr_2_ft[i]);
    //     printf("calloc[%zu] = %f\n", i, arr_2_std[i]);
    // }
    // free(arr_2_ft);
    // free(arr_2_std);

	// teststrdup
	// const char *test_str_1 = "Hello, World!";
    // printf("Test 1:\n");
    // char *result_1_ft = ft_strdup(test_str_1);
    // char *result_1_std = strdup(test_str_1);
    // printf("ft_strdup: %s\n", result_1_ft);
    // printf("strdup: %s\n", result_1_std);
    // free(result_1_ft);
    // free(result_1_std);
    // printf("\n");
    // const char *test_str_2 = "";
    // printf("Test 2:\n");
    // char *result_2_ft = ft_strdup(test_str_2);
    // char *result_2_std = strdup(test_str_2);
    // printf("ft_strdup: %s\n", result_2_ft);
    // printf("strdup: %s\n", result_2_std);
    // free(result_2_ft);
    // free(result_2_std);
    // printf("\n");
    // const char *test_str_3 = NULL;
    // printf("Test 3:\n");
    // char *result_3_ft = ft_strdup(test_str_3);
    // char *result_3_std = strdup(test_str_3);
    // printf("strdup: %p\n", (void *)result_3_std);
    // printf("ft_strdup: %p\n", (void *)result_3_ft);
    // free(result_3_ft);
    // free(result_3_std);

	// testsubstr
    // const char *s1 = "hello world ca va";
    // const char *s2 = "";
    // char *d1 = ft_substr(s1, 0, 7);
    // char *d2 = ft_substr(s1, 2, 8);
    // char *d3 = ft_substr(s1, 3, 20);
    // char *d4 = ft_substr(s2, 0, 0);
    // char *d5 = ft_substr(s2, 0, 5);
    // printf("%s\n", d1);
    // printf("=================================\n");
    // printf("%s\n", d2);
    // printf("=================================\n");
    //  printf("%s\n", d3);
    // printf("=================================\n");
    //  printf("%s\n", d4);
    // printf("=================================\n");
    //  printf("%s\n", d5);
    // printf("=================================\n");

    // teststrjoin
    // char *s1 = "my favorite animal is";
	// char *s2 = " ";
	// char *s3 = "the nyancat";
	// char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
    // printf("%s", res);

    // teststrtrim
    // const char *test1_str = "   Hello, World!   ";
    // const char *test1_set = "   ";
    // char *result1 = ft_strtrim(test1_str, test1_set);
    // printf("Original: \"%s\"\n", test1_str);
    // printf("Trimmed: \"%s\"\n", result1);
    // free(result1);

    // // Test case 2: Test with a different set of characters to trim
    // const char *test2_str = "---Trim This String---";
    // const char *test2_set = "---";
    // char *result2 = ft_strtrim(test2_str, test2_set);
    // printf("Original: \"%s\"\n", test2_str);
    // printf("Trimmed: \"%s\"\n", result2);
    // free(result2);

    // // Test case 3: Test with no characters to trim
    // const char *test3_str = "hello";
    // const char *test3_set = "";
    // char *result3 = ft_strtrim(test3_str, test3_set);
    // printf("Original: \"%s\"\n", test3_str);
    // printf("Trimmed: \"%s\"\n", result3);
    // free(result3);

    // testsplit
    char const *test_str = "  tripouille  42 ";
    char **result = ft_split(test_str, ' ');
    if (!result)
    {
        printf("Memory allocation error\n");
        return 1;
    }
    // Print the result
    for (size_t i = 0; result[i] != NULL; i++)
    {
        printf("Word %zu:%s\n", i + 1, result[i]);
        // free(result[i]); // Don't forget to free each string
    }
    free(result); // Don't forget to free the array itself

}

