/* Chương trình in 2 dòng chữ. */
#include <stdio.h> /* Sử dụng thư viện vào ra chuẩn */
#include <conio.h>

void main() /* Hàm chính */
{
    printf("\n TEST XOA MAN HINH");
    system("cls"); /* Xoá màn hình */

    printf("\n TURBO C HAN HANH");
    printf("\n LAM QUEN VOI BAN");

    printf("\n ----------------");

    // In 2 dòng bằng 1 lệnh printf
    printf("\n TURBO C HAN HANH \
           \n LAM QUEN VOI BAN");

    getch(); /* Tạm dựng máy để xem kết quả */
}
