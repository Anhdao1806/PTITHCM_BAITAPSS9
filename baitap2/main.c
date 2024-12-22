#include <stdio.h>

int main() {
    int a[5] = {1,11,2008,10,34};
    int n = sizeof(a) / sizeof(a[0]);
    int vitri, giatrimoi;
    printf("Mang ban dau :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Nhap vi tri can sua (0 - %d): ", n - 1);
    scanf("%d", &vitri);
    if (vitri < 0 || vitri >= n) {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &giatrimoi);
    a[vitri] = giatrimoi;
    printf("Mang moi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


