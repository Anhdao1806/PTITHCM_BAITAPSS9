#include <stdio.h>

int main() {
    int a[100];
    int currentLength = 0;
    int n, vitrimuonxoa;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu  [%d]: ", i);
        scanf("%d", &a[i]);
    }
currentLength = n;
    printf("Vi tri can xoa: ", currentLength - 1);
    scanf("%d", &vitrimuonxoa);
    if (vitrimuonxoa < 0 || vitrimuonxoa >= currentLength) {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    for (int i = vitrimuonxoa; i < currentLength - 1; i++) {
        a[i] = a[i + 1];
    }
    currentLength--;
    printf("Mang moi :\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

