#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

#define Student_NUM 5
#define Course_NUM 5

int ss(int a,int b);

int main() {
    /*
     * translate telephone char to number
     * char c;
    while ((c = getchar()) != '\n') {
        switch (c){
            case 'A': case 'B': case 'C': printf("2");
                break;
            case 'D': case 'E': case 'F': printf("3");
                break;
            case 'G': case 'H': case 'I': printf("4");
                break;
            case 'J': case 'K': case 'L': printf("5");
                break;
            case 'M': case 'N': case 'O': printf("6");
                break;
            case 'P':case 'Q':case 'R':case 'S': printf("7");
                break;
            case 'T':case 'U':case 'V': printf("8");
                break;
            case 'X':case 'Y': case 'Z': printf("9");
                break;
            default: printf("%c",c);
        }
    }*/
    /* Cross game
    char c;
    int sum;
    while ((c = getchar()) != '\n') {
        c = toupper(c);
        switch (c){
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
                case 'R':case 'S': case 'T':case 'U':
            sum = sum + 1;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum = sum + 3;
                break;
            case 'D': case 'G':
                sum = sum + 2;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum = sum + 4;
                break;
            case 'K': sum = sum + 5;
                break;
            case 'Q': case 'Z': sum = sum + 10;
                break;
            case 'J': case 'X': sum = sum + 8;
                break;
        }
    }
    printf("%d",sum);*/

    /*int a,b;
    int c;
    scanf("%d:%d",&a,&b);
    scanf("%d",&c);
    if(c == 1){
        printf("%d:%d",a+12,b);
    } else {
        printf("%d:%d",a,b);
    }*/
    /* statistical how many vowel
    char ch;
    int sum;
    while((ch = getchar()) !='\n') {
        ch = toupper(ch);
        switch (ch){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                sum = sum +1;
                break;
        }
    }
    printf("%d",sum);*/

    /*
     * scanf Firstname and Lastname then  printf  Lastname,first char in Firstname .
     * char ch1;
    char ch;

    scanf("%c",&ch1);

    while (getchar() != ' '){}
    while ((ch=getchar()) !='\n'){
        putchar(ch);
    }
    printf(",%c.",ch1);*/


    /* Calculate the square root in Newton way
     * double y=1.0,x;
    scanf("%lf",&x);
    while(fabs(y-x/y) >= 0.00001){
        y = (y + x/y) / 2;
    }
    printf("%f", x/y);*/

    /*short a;
    int sum=1;
    scanf("%d",&a);
    for (int i = 1; i <= a; ++i) {
        sum = sum * i;
    }
    printf("%d",sum);*/

    /* find repeated number
     * bool digit_seen[10] = {false};
    int digit;
    int n;
    printf("enter a number");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        if(digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if(n > 0)
        printf("Repeated digit \n");
    else
        printf("no repeated digit \n");*/

    /*int a[40] = {1,2};
    for (int i = 0; i < 39; ++i) {
        printf("%d ",a[i]);
    }*/

    /* biff annoce
     * char a[40];
    int i = 0;
    printf("enter message");
    while((a[i]=getchar()) != '\n'){
        a[i] = (char) toupper(a[i]);
        switch (a[i]){
            case 'A': printf("4");
                break;
            case 'B': printf("8");
                break;
            case 'E':printf("3");
                break;
            case 'I':printf("1");
                break;
            case 'S':printf("5");
                break;
            default: putchar(a[i]);
                break;
        }
    }
    printf("!!!!!");*/

    /*int a[Student_NUM][Course_NUM];
    int sum;
    for (int i = 0; i < 5; ++i) {
        sum = 0;
        for (int j = 0; j < 5; ++j) {
            scanf("%d",&a[i][j]);
            sum = sum + a[i][j];
        }
        printf("student %d sum is %d & avg is %d\n", i+1,sum, sum/5);
    }*/

    int a=5,b=6;
    int s = ss(a,b);
    printf("%d",s);
    return 0;
}
int ss(int a,int b){
    return a+b;
}