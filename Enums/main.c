#include <stdio.h>

int main() {
    enum companies {GOOGLE,FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    //defining enums of type companies below

    enum companies google = GOOGLE;
    enum companies xerox  = XEROX;
    enum companies ebay   = EBAY;

    printf("The Company XEROX is: %d \n", xerox);

    printf("The Company Google is: %d \n", GOOGLE);

    printf("The Company EBAY is: %d \n", EBAY);



    //enum is used to map meaningful names (words) into integer constants to make the code more readable
    printf("\n");
    printf(("\n"));
    enum ROLES { ADMIN, USER, GUEST };

    enum ROLES user_role = USER;

    if (user_role == 0) {
        printf("ADMIN SIGNED IN %d \n", user_role);
    } else if (user_role == 1) {
        printf("NEW USER SIGNED IN %d \n", user_role);
    } else {
        printf("GUEST USER SIGNED IN %d \n", user_role);

    }






    // printf("Atif");
    // int i = 0;
    // scanf("%d", &i);
    // printf("The numnber is %d",i);
}