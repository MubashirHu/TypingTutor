#include "../header/typing.h"

int selection;
void newTypeTest(void){
    system("clear");
    printf("Select level\n");
    printf("1. easy\n");
    printf("2. medium\n");
    printf("3. hard\n");
    
    //load the selected file
    //load the selected word
    //wait for player to type

}
void viewStats(void);
void exitProgram(void);

void startMenu(void){
    system("clear");
    printf("Typing Tutor\n");
    printf("1. start a new type test\n");
    printf("2. view typing stats\n");
    printf("3. exit the program\n");

    selection = getchar();

    switch (selection)
    {
    case 1:
        newTypeTest();
        break;
    case 2:
        viewStats();
        break;
    case 3:
        exitProgram();
        break;
    
    default:
        break;
    }
}