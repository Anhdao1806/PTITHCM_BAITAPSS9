#include <stdio.h>

int main() {
    int a[100];
    int currentLength = 0;
    int n, value, addIndex;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n > 100 || n < 0) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }
    printf("Nhap phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &a[i]);
    }
    currentLength = n;
    printf("Nhap gia tri muon chen: ");
    scanf("%d", &value);
    printf("Vi tri muon chen : ");
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le\n");

    } else {
        for (int i = currentLength; i > addIndex; i--) {
            a[i] = a[i - 1];
        }
        a[addIndex] = value;
        currentLength++;
    }
    printf("Mang sau khi chen:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

