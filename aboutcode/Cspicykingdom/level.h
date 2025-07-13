#include <time.h>


void set_level(int *king){
    printf("DebugBeforeLevelup chili: %d/water: %d/fat: %d/medicine: %d\n",king[1],king[2],king[3],king[6]);
    if(king[0] == 1){//tuo huang zhe
        if(king[1] < 15){
            show_levelup(1,0);
        }
        else{
            show_levelup(1,1);//show_levelup
            king[0] = 2;
            king[1] = (king[1]-15);
        }
    }
    else if(king[0] == 2){//di zhu
        if(king[1] < 60){
            show_levelup(2,0);
        }
        else{
            show_levelup(2,1);//show_levelup
            king[0] = 3;
            king[1] = (king[1]-60);
        }

    }
    else if(king[0] == 3){//la jui
        if(king[1] < 120){
            show_levelup(3,0);
        }
        else{
            show_levelup(3,1);//show_levelup
            king[0] = 4;
            king[1] = (king[1]-120);
        }
    }
    printf("DebugAfterLevelup chili: %d/water: %d/fat: %d/medicine: %d\n",king[1],king[2],king[3],king[6]);
}



void gift(int *king){
    printf("DebugBeforeReward chili: %d/water: %d/fat: %d/medicine: %d\n",king[1],king[2],king[3],king[6]);
    int worf = rand()%10-3;//w = 1 ; f = 0
    int quan = 1;
    print_congratulations(0,15);
    in_enter();
    printf("\033[2J");
    if(worf>=0){
        if(king[0] == 1){
            quan = rand()%3 + 1;
        }
        else if(king[0] == 2){
            quan = rand()%4 + 1;
        }
        else if(king[0] == 3){
            quan = rand()%5 + 1;
        }
        king[2]=king[2]+quan;
        print_water2(5,2);
        gotoxy(100,15);
        printf("恭喜您獲得%d杯水",quan);
        in_enter();
        //printgift()
    }
    else{
        quan = rand()%3 + 1;
        king[3]=king[3]+quan;
        print_fat(5,0);
        gotoxy(100,15);
        printf("恭喜您得到%d包肥料",quan);//printgift()
    }
    //int water = rand()%3+1;
    //king[2]=king[2]+water;
    //int fat = rand()%3;
    //king[3]=king[3]+fat;
    //printf("you got %d water and %d fat.\n",water,fat);//printgift()
    printf("DebugAfterReward chili: %d/water: %d/fat: %d\n",king[1],king[2],king[3]);
    in_enter();
    return;
}

void penalty(int *king, int n){
    printf("DebugBeforePenalty chili: %d/water: %d/fat: %d/medicine: %d\n",king[1],king[2],king[3],king[6]);
    switch(n){

        case 1:
            king[1]=king[1]+5;
            break;
        case 2:
            king[1]=king[1]-6;
            break;
        case 3:
            king[3]=king[3]+3;
            break;

        case 4:
            king[1]=king[1]/2;
            break;

        case 5:
            king[3]=king[3]+9;
            break;
        case 6:
            king[1]=king[1]-7;
            break;
        case 7:
            king[1]=king[1]-3;
            break;
        case 8:
            king[1]=king[1]+10;
            break;

        case 9:
            king[2]=(king[2]>3)?king[2]-3:0;
            break;

        case 10:
            king[3]=king[3]+9;
            break;
        case 11:
            king[1]=king[1]-3;
            break;
        case 12:
            king[1]=king[1]-3;
            break;
        case 13:
            king[3]=king[3]+10;
            break;

        case 14:
            king[2]=(king[2]>1)?king[2]-1:0;
            break;

        case 15:
            king[1]=king[1]-8;
            break;
        case 16:
            king[1]=king[1]+6;
            break;
        case 17:
            king[3]=king[3]+7;
            break;
        case 18:
            king[1]=king[1]+10;
            break;

        case 19:
            king[2]=king[2]+5;
            break;

        case 20:
            king[1]=king[1]+2;
            break;
        case 21:
            king[3]=king[3]+6;
            break;
        case 22:
            king[1]=king[1]-4;
            break;
        case 23:
            king[1]=king[1]-3;
            break;

        case 24:
            king[1]=king[1]-3;
            break;

        case 25:
            king[1]=king[1]+5;
            break;

        case 26:
            king[6]=king[6]+1;
            break;

        case 27:
            king[6]=king[6]+1;
            break;

        case 28:
            king[6]=king[6]+1;
            break;

        case 29:
            king[6]=king[6]+1;
            break;

        case 30:
            king[3]=king[3]-3;
            if(king[3]<0) king[3] = 0;
            break;

        case 31:
            king[1]=king[1]-5;
            break;

        case 32:
            king[3]=king[3]-2;
            if(king[3]<0) king[3] = 0;
            break;

        case 33:
            king[2]=king[2]-2;
            if(king[2]<0) king[2] = 0;
            break;

        case 34:
            king[3]=king[3]-2;
            if(king[3]<0) king[3] = 0;
            break;

        case 35:
            king[6]=king[6]-1;
            if(king[6]<0) king[6] = 0;
            break;

        case 36:
            king[1]=king[1]-6;
            break;

        case 37:
            king[1]=king[1]-2;
            break;

        case 38:
            king[2]=king[2]-3;
            if(king[2]<0) king[2] = 0;
            break;

        case 39:
            king[3]=king[3]-2;
            if(king[2]<0) king[2] = 0;
            break;

        case 40:
            king[6]=king[6]-1;
            if(king[6]<0) king[6] = 0;
            break;

        case 41:
            king[2]=king[2]-2;
            if(king[2]<0) king[2] = 0;
            break;

        case 42:
            king[2]=king[2]-3;
            if(king[2]<0) king[2] = 0;
            break;

        case 43:
            king[1]=king[1]-1;
            break;

        case 44:
            king[1]=king[1]-2;
            break;

        case 45:
            king[1]=king[1]-2;
            break;

        case 46:
            king[6]=king[6]-1;
            if(king[6]<0) king[6] = 0;
            break;

        case 47:
            king[3]=king[3]-1;
            if(king[3]<0) king[3] = 0;
            break;

        case 48:
            king[1]=king[1]-1;
            break;

        case 49:
            king[1]=king[1]-16;
            break;

        case 50:
            king[1]=king[1]-2;
            break;

        case 51:
            king[1]=king[1]-1;
            break;

        case 52:
            king[2]=king[2]-3;
            if(king[2]<0) king[2] = 0;
            break;

        case 53:
            king[1]=king[1]-1;
            break;

        case 54:
            king[1]=king[1]-1;
            break;

        case 55:
            king[6]=king[6]-1;
            if(king[6]<0) king[6] = 0;
            break;

        case 56:
            king[1]=king[1]-1;
            break;

        case 57:
            king[1]=king[1]-4;
            break;


    }
    printf("DebugAfterPenalty chili: %d/water: %d/fat: %d/medicine: %d\n",king[1],king[2],king[3],king[6]);
}



int answer(int a){

    int answersheet[40]={1,3,2,4,4,1,4,3,4,4,2,2,4,3,2,2,3,4,1,4,1,3,4,4,2,3,2,3,3,2,1,4,2,4,2,4,4,3,3,3};

    return answersheet[a-1];


}






void plant(int *king){
    printf("DebugBeforePlant chili: %d/water: %d/fat: %d/medicine: %d\n",king[1],king[2],king[3],king[6]);
    if(king[0] == 1){//tuo huang zhe //1*1
        if(king[2]>=1 && king[1]>=1){
            show_plant(king[3]);
            king[2] = king[2] - 1;
            if(king[3]>=1){
                king[1] = king[1] - 1 + magic(1,1);
                king[3] = king[3] - 1;
            }
            else{
                king[1] = king[1] - 1 + magic(1,0);
            }
        }
        else{
            printf("u need water poor ghost\n");//show_error();
        }

    }
    else if(king[0] == 2){//di zhu  //2*2
        if(king[1]>=king[2]){//chili>=water
            if(king[2]>=4){
                show_plant(king[3]);
                if(king[3]>=4){
                    king[1] = king[1] - 4 + magic(4,4);
                    king[2] = king[2] - 4;
                    king[3] = king[3] - 4;
                }
                else{
                    king[1] = king[1] - 4 + magic(4,king[3]);
                    king[2] = king[2] - 4;
                    king[3] = 0;
                }
            }
            else if(king[2]>0){
                show_plant(king[3]);
                show_field(king[0],king[2]);
                if(king[3]>=king[2]){//fat>=water
                    king[1] = king[1] - king[2] + magic(king[2], king[2]);
                    king[3] = king[3] - king[2];
                    king[2] = 0;
                }
                else{
                    king[1] = king[1] - king[2] + magic(king[2], king[3]);
                    king[2] = 0;
                    king[3] = 0;
                }
            }
            else{
                printf("u need water poor ghost\n");//show_error();
            }
        }
        else{//water>chili

            if(king[1] >= 4){
                show_plant(king[3]);
                if(king[3]>=4){
                    king[1] = king[1] - 4 + magic(4,4);
                    king[2] = king[2] - 4;
                    king[3] = king[3] - 4;
                }
                else{
                    king[1] = king[1] - 4 + magic(4,king[3]);
                    king[2] = king[2] - 4;
                    king[3] = 0;
                }
            }
            else{
                show_plant(king[3]);
                if(king[3]>=king[1]){//fat>=cjili

                    king[2] = king[2] - king[1];
                    king[3] = king[3] - king[1];
                    king[1] = king[1] - king[1] + magic(king[1], king[1]);

                }
                else{
                    king[2] = king[2] - king[1];
                    king[1] = king[1] - king[1] + magic(king[1], king[3]);
                    king[3] = 0;
                }
            }
        }
    }
    else if(king[0] == 3){//la jui  //3*3
        if(king[1]>=king[2]){//chili>=water
            if(king[2]>=9){
                show_plant(king[3]);
                if(king[3]>=9){
                    king[1] = king[1] - 9 + magic(9,9);
                    king[2] = king[2] - 9;
                    king[3] = king[3] - 9;
                }
                else{
                    king[1] = king[1] - 9 + magic(9,king[3]);
                    king[2] = king[2] - 9;
                    king[3] = 0;
                }
            }
            else if(king[2]>0){
                show_plant(king[3]);
                if(king[3]>=king[2]){//fat>=water
                    king[1] = king[1] - king[2] + magic(king[2], king[2]);
                    king[3] = king[3] - king[2];
                    king[2] = 0;

                }
                else{
                    king[1] = king[1] - king[2] + magic(king[2], king[3]);
                    king[2] = 0;
                    king[3] = 0;
                }
            }
            else{
                printf("u need water poor ghost\n");//show_error();
            }
        }
        else{//water>chili
            if(king[1] >= 9){
                show_plant(king[3]);
                if(king[3]>=9){
                    king[1] = king[1] - 9 + magic(9,9);
                    king[2] = king[2] - 9;
                    king[3] = king[3] - 9;
                }
                else{
                    king[1] = king[1] - 9 + magic(9,king[3]);
                    king[2] = king[2] - 9;
                    king[3] = 0;
                }
            }
            else{
                show_plant(king[3]);
                if(king[3]>=king[1]){//fat>=cjili
                    king[2] = king[2] - king[1];
                    king[3] = king[3] - king[1];
                    king[1] = king[1] - king[1] + magic(king[1], king[1]);
                }
                else{
                    king[2] = king[2] - king[1];
                    king[1] = king[1] - king[1] + magic(king[1], king[3]);
                    king[3] = 0;
                }
            }
        }
    }
    printf("DebugAfterPlant chili: %d/water: %d/fat: %d/medicine: %d\n",king[1],king[2],king[3],king[6]);
    in_enter();
}
int magic(int chili, int fat){//plant magic chili
    int harvest = 0;
    int common=0;
    int soul=0;
    int infinity=0;
    int randchili;
    if(fat<=chili){
        //printf("%d %d\n",chili,fat);
        harvest = harvest + (chili-fat) * 3;
        for(int i=0;i<(chili-fat)*3;i++){
            common++;
        }
        for(int i=0;i<fat*3;i++){
            randchili = rand_type();
            switch(randchili){
            case 1:
                common++;
                break;
            case 3:
                soul++;
                break;
            case 5:
                infinity++;
                break;
            }
            harvest = harvest +randchili;
        }

    }
    show_chilitype(common,soul,infinity);
    return harvest;
}

int rand_type(){
    int t= (rand()%100) +1;

    if(t>90){
        //show_chilitype(5);
        return 5;
    }
    else if(t>70){
        //show_chilitype(3);
        return 3;
    }
    else{
        //show_chilitype(1);
        return 1;
    }
}


