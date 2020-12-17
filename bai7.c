#include <stdio.h>
#include <string.h>
#define A 1000

void ViTriXuatHien(char a[], char n, int ViTri[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == n)
        {
            ViTri[i] = i;
        }
    }
}

int main()
{
    char a[A], n;
    int ViTri[A];
    printf("\n-----Nhap vao chuoi bat ki-----\n");
    fgets(a, A, stdin);

    printf("\n-----Nhap vao ki tu tim kiem-----\n");
    scanf("%c", &n);

    printf("\n-----Nhung vi tri xuat hien-----\n");
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%d", ViTri);
    }
    
}