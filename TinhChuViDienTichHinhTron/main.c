#include <stdio.h>
#include <math.h> /* Su dung them thu vien cac ham toan hoc */
#include <conio.h> /* Thu vien ngon ngu C de dung ham getch() */

void main()
{
    float r, cv, dt; /* Khai bao 3 bien thuc */

    /* Dua ra man hinh thong bao ve yeu cau nhap so lieu */
    printf("\n Ban kinh r = ");

    /* Nhap mot gia tri thuc dua vao bien r */
    scanf("%f", &r);

    /* Tinh chu vi va dien tich hinh tron,
    dung ham M_PI (PI) da dinh nghia trong math.h */
    cv = 2 * M_PI * r; dt = M_PI * r * r;

    /* In ket qua */
    printf("\n Chu vi = %0.2f\n Dien tich = %0.2f",
           cv, dt);

    getch(); /* Tam dung may de xem ket qua */
}
