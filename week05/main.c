#include <stdio.h>
int main() {
    int menu,stock;
    int money;
    
    printf("------메뉴------\n");
    printf("1. 콜라 1000 2.사이다 1000 3. 핫식스 1200 4. 밀키스 900 5. 레쓰비 500 \n");
    printf("음료를 선택하세요 : ");
    scanf("%d", &menu);
    if (menu==1|| menu==2){
        printf("금액을 투입하세요: ");
        scanf(" %d", &money);
        printf("거스름돈 %d를 받으세요\n", money-1000);
        stock=10;
        printf("남은 개수는 %d개입니다.",stock-1);  
    }
    else if (menu==3 ){
        printf("금액을 투입하세요: ");
        scanf(" %d", &money);
        printf("거스름돈 %d를 받으세요\n", money-1200);
        stock=10;
        printf("남은 개수는 %d개입니다.",stock-1);
    }
    else if (menu==4){
        printf("금액을 투입하세요: ");
        scanf(" %d", &money);
        printf("거스름돈 %d를 받으세요\n", money-900);
        stock=10;
        printf("남은 개수는 %d개입니다.",stock-1);
    }
    else if (menu==5 ){
        printf("금액을 투입하세요: ");
        scanf(" %d", &money);
        printf("거스름돈 %d를 받으세요\n", money-500);
        stock=10;
        printf("남은 개수는 %d개입니다.",stock-1);
    }
    else {
        printf("Wrong!!\n");
        return 1;    
    }   
    return 0;
}
