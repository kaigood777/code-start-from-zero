#include <conio.h>

int in(void){

    int n,x,y;
    while(1){
    x=rand()%40;
    y=rand()%40;

    n=_getch();

    switch(n){
    case 'a':
        return 'a';
        break;
    case 'b':
        return 'b';
        break;
    case 'c':
        return 'c';
        break;
    //case 'd':
    //    return 'd';
    //    break;
    case 'e':
        return 'e';
        break;
    case 'l':
        return 'l';
        break;
    case 'p':
        return 'p';
        break;
    case 's':
        return 's';
        break;
    case 'w':
        return 'w';
        break;
    default:
        gotoxy(x,y);
        stupid();
        break;
        //show_error();

    }

    }

}

int in_ans(){

    int n;

    while(1){


    n=_getch();

    switch(n){
    case 'a':
        printf("A\n");
        return 1;
        break;
    case 'b':
        printf("B\n");
        return 2;
        break;
    case 'c':
        printf("C\n");
        return 3;
        break;
    case 'd':
        printf("D\n");
        return 4;
        break;

    default:
        stupid();//show_error();
    }
    }


}

void in_enter(){


    int e;
    //printf("ENTER\n");

    while(1){


        e=_getch();


        if(e==13)return ;

    }



}

int in_yn(){

    int n;

    while(1){


    n=_getch();

    switch(n){
    case 'y':
        //printf("A\n");
        return 1;
        break;
    case 'n':
        //printf("B\n");
        return 0;
        break;

    default:
        stupid();//show_error();
    }
    }


}

