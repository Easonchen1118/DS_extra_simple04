#include <stdio.h>
//停車費計算
int main(){
    int inhr, inmin;
    int outhr, outmin;
    int money = 0;
    scanf("%d %d", &inhr, &inmin);
    scanf("%d %d", &outhr, &outmin);
    int temp, halfhour;
    int hour = outhr - inhr;
    int totalmin = hour * 60 + (outmin - inmin);//change hour into minute to calculate
    if (totalmin > 240) {
        temp = totalmin - 240;
        halfhour = temp / 30;
        money += 60 * halfhour;
    }
    if (totalmin > 120) {
        if (totalmin > 240) {
            temp = 120;
        }
        else {
            temp = totalmin - 120;
        }
        halfhour = temp / 30;
        money += 40 *halfhour;
    }
    if (totalmin >= 30) {
        if (totalmin > 120) {
            temp = 120;
        }
        else {
            temp = totalmin;
        }
        halfhour = temp / 30;
        money += 30 *halfhour;
    }
    printf("%d\n", money);
    return 0;
}
