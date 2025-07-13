
#define INITIAL 0
#define ANSWER 1
#define REWARD 2
#define PENALTY 3
#define LEVELUP 4
#define FINISH 5
#define FAIL 6
#define REST 7
#define SHOWBAG 8
#define SHOWINFO 9
#define STORY 10
#define PLANT 11
#define CASINO 12
#define END 99


int gameflow(int now, int ans, int chili, int level,int stay){
    int req;
    if(now==FINISH)return END;
    else if(now==FAIL){
        if(stay == 1) return REST;
        else if(stay == 2) return INITIAL;
        return END;
    }
    else if(level==4) return FINISH;
    else if(chili<=0)return FAIL;//???
    switch(now){
        case INITIAL:
            return REST;
            break;
        case REST:
            req=in();
            switch(req){
                case 'a':
                    return ANSWER;
                    break;
                case 'b':
                    return SHOWBAG;
                    break;
                 case 'w':
                    return SHOWINFO;
                    break;
                case 'l':
                    return LEVELUP;
                    break;
                case 's':
                    return STORY;
                    break;
                case 'p':
                    return PLANT;
                    break;
                case 'e':
                    return END;
                    break;
                case 'c':
                    return CASINO;
                    break;
                default:
                    return REST;
                    break;
            }
            break;
        case ANSWER:
            if(!ans) return PENALTY;
            else return REWARD;
            break;
        default:
            return REST;
            break;

    }

}

int failflow(int *king){

    int in;
    if(king[6]>0){
        printf("again? y/n \n");
        in=in_yn();
        if(in) {
            printf("before:magic medicine %d\n",king[6]);
            king[6]--;
            king[1]=1;
            printf("after:magic medicine %d\n",king[6]);
            in_enter();
            return 1;
        }
    }
    else{
        printf("restart? u are not jesus y/n \n");
        in=in_yn();
        if(in){
            king[0] = 1;
            king[1] = 1;
            king[2] = 0;
            king[3] = 0;
            king[4] = 0;
            king[5] = 0;
            king[6] = 1;
            printf("level = %d, chili = %d, water =%d, fat = %d, medicine = %d\n",king[0],king[1],king[2],king[3],king[6]);
            return 2;
        }
    }

    return 0;
}



void initialflow(char *name){
    initial_pic();
	//print initial story and rules
	initial_story();
    input_name(name);

}

void penaltyflow(int *king){
    int n;
    n=(rand()%57)+1;
    show_event(n);
    penalty(king,n);
    //printf("%d %d %d %d \n",king[0],king[1],king[2],king[3]);
    in_enter();
}

int answerflow(){
    int n;
    int ans;
    n=(rand()%40)+1;
    show_question(n);
    ans = in_ans();
    if(ans==answer(n))return 1;
    else return 0;

}

void casinoflow(int *king){//level chili water fat right total med
    int n,a;
    int flag = 1;
    int casino_times = 0;
    int temp = king[2];
    while(flag == 1){
        print_casino(45,10);
        in_enter();
        system("cls");
        if(king[1]<5){
            printf("poor ghost get offfff!!!!\n");
            flag = 0;
            printf("=>Press Enter\n");
            in_enter();
        }
        else if(king[0]>1){
            if(king[1] == 5){
                printf("DebugBeforeCas chili: %d / water: %d\n",king[1],king[2]);
                king[1] = 0;
                flag = 0;
                printf("\n");
                printf("DebugAfterCas chili: %d / water: %d\n",king[1],king[2]);
                printf("poor ghost get offfff!!!!\n");
                printf("=>Press Enter\n");
                in_enter();
            }
            else if(king[1]>5){
                printf("DebugBeforeCas chili: %d / water: %d\n",king[1],king[2]);
                printf("\n");
                if(casino_times<5) n=(rand()%50)-casino_times;
                else if(casino_times<10) n=(rand()%33)-casino_times;
                else if(casino_times<15) n=(rand()%28)-casino_times;
                else if(casino_times<20) n=(rand()%34)-casino_times;
                else if(casino_times<30) n=(rand()%37)-casino_times;
                else n=(rand()%35)-casino_times;
                a = n=(rand()%10000)-3;
                king[1] = king[1]-(4+(int)(casino_times*0.7));
                casino_times = casino_times + 1;
                if(a<0){
                    print_casino(45,6);
                    print_win(50,14);
                    king[2] = king[2] + 100;
                }
                else if(n>0){

                    //printf("u got 2 water\n");
                    print_casino(45,6);
                    print_win(50,14);
                    king[2] = king[2]+2;
                }
                else{
                     //printf("u got nothing\n");
                     print_casino(45,6);
                     print_lose(45,14);
                     king[2] = temp;
                }

                printf("\n\n\n");

                casino_reminder(40,24,king,temp);
                printf("DebugAfterCas chili: %d / water: %d\n",king[1],king[2]);
                printf("\n");
                printf("keep on? y/n \n");
                flag = in_yn();
            }

        }

        else{
            //printf("你個窮鬼，就憑你也想來澳椒逍遙?警衛，叫他滾出去!\n");
            printf("poor ghost get offfff!!!!\n");
            flag = 0;
            printf("=>Press Enter\n");
            in_enter();
        }
        system("cls");
    }
    printf("期待你與澳椒的下次相遇\n");
    //printf("welcome ao jiao again see u \n");
    print_casino(45,6);
    print_seeu(15,14);
    printf("=>Press Enter\n");
    in_enter();
}

void gamerun(){

    srand(time(NULL));
    int stay=0;
    int state=0;
    int chili=0;
    int level_temp;
    int ans=0;
    int level=1;
    char name[10];
    int king[7]={2,100,5,0,0,0,1};//level chili water fat right_ans total_q save_medicine

    int casino_times = 0;
    while(1){
        if(state==INITIAL){
            initialflow(name);
            //printf("%d %d %d %d \n",king[0],king[1],king[2],king[3]);
        }
        else if(state==REST){
            statereport(name,king);
            show_field(king[0],0);
            post_news();
            post_hotnews();
        }
        else if(state==ANSWER){
            ans = answerflow();
            printf("DebugBeforeAns right: %d / total questions %d:\n",king[4],king[5]);
            if(ans)king[4]++;
            king[5]++;
            printf("DebugAfterAns right: %d / total questions %d:\n",king[4],king[5]);
            in_enter();/////////debug
        }
        else if(state==REWARD){
            printf("get reward\n");
            gift(king);
            //printf("%d %d %d %d \n",king[0],king[1],king[2],king[3]);
        }
        else if(state==PENALTY){
            printf("get penalty\n");
            penaltyflow(king);

        }
        else if(state==SHOWBAG){
            //printf("show water\n");
            show_bag(king[2],king[3],king[6]);
        }
        else if(state==SHOWINFO){
           // printf("show fat\n");
            show_info();
        }
        else if(state==STORY){
            printf("show story\n");
        }
        else if(state==PLANT){
            //printf("plant some chili\n");
            plant(king);
            //printf("%d %d %d %d \n",king[0],king[1],king[2],king[3]);
        }
        else if(state==FINISH){
            printf("KING OF SPICY\n");
        }
        else if(state==LEVELUP){
            set_level(king);

        }
        else if(state==FAIL){
            printf("LOSER\n");
            stay=failflow(king);
        }
        else if(state == CASINO){
            //printf("歡迎來到澳椒\n");
            casinoflow(king);
        }
        else {
            printf("GAME OVER\n");
            printf("%d right answer / %d total questions\n",king[4],king[5]);

            break;
        }
        state = gameflow(state,ans,king[1],king[0],stay);
        system("cls");
    }

}
