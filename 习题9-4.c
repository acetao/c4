#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct Book{
    char name[100];
    double price;
}Book;


int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    getchar();
    Book* books = (Book*)malloc(sizeof(Book) * n);

    for(int i = 0; i < n; i++) {
        gets(books[i].name);
        scanf("%lf", &books[i].price);
        getchar();
    }
    int max_index = 0, min_index = 0;
    for(int i = 1; i < n; i++) {
        if(books[i].price > books[max_index].price)
            max_index = i;
        if(books[i].price < books[min_index].price)
            min_index = i;
    }
    printf("%.2f, %s\n", books[max_index].price, books[max_index].name);
    printf("%.2f, %s\n", books[min_index].price, books[min_index].name);

    return 0;
}
