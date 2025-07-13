void stupid(){
    printf("辣椒國不需要文盲\n");
}
void gotoxy(int xpos, int ypos)
{
    COORD scrn;
    HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = xpos;
    scrn.Y = ypos;
    SetConsoleCursorPosition(hOutput, scrn);
}
void gamestart(int sleep,char word[],int x,int y){
    for(int i=0;i<10;i++){
        x= rand()%78+1;
        y= rand()%45+1;
        gotoxy(x, y);
        printf("%s",word);
    }
    for(int i=0;i<10;i++){
        x= rand()%75+78;
        y= rand()%45+1;
        gotoxy(x, y);
        printf("%s",word);
    }
    Sleep(sleep);
    printf("\033[2J");
}
void initial_pic()
{
    int x,y;

    system("color 4");
    mciSendString("open \"hot.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    printf("\033[5m");
    print_chilli(3,1);
    gotoxy(50, 45);
    printf("———————————————————————");
    gotoxy(51, 46);
    printf("◇◆ 開始遊戲[Enter] ◆◇");
    gotoxy(52, 47);
    printf("——————————————————————————————");
    print_spicykingdom(45,6);
    in_enter();
    mciSendString("close mp3", NULL, 0, NULL);
    system("cls");
    mciSendString("open \"gamestart.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    system("color F4");
    gamestart(1500,"辣椒國最愛的",x,y);
    gamestart(1500,"Random Game",x,y);
    gamestart(1500,"Random Game",x,y);
    print_game(800,55,17);
    printf("\033[2J");
    print_start(1000,65,17);
    mciSendString("close mp3", NULL, 0, NULL);
    system("cls");
}
void initial_story()
{
    mciSendString("open \"Chilli.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    gotoxy(10,4);
    printf("====================================================================================");
    gotoxy(10,6);
    printf("你是一個窮到被迫離家背景去開拓荒地的拓荒者");
    gotoxy(10,7);
    printf("你僅有的財產是一根要死不活的辣椒、一把殘破不堪的鏟子，還有你半殘的身體");
    gotoxy(10,9);
    printf("=>Press Enter");
    in_enter();
    gotoxy(10,12);
    printf("=====================================================================================");
    gotoxy(10,14);
    printf("你跋山涉水來到一片1*1的荒地，拿著鏟子亂鏟，鏟到一半辣地公顯靈");
    gotoxy(10,16);
    printf("告訴你只要回答辣椒宇宙問題，答對就會獲得庇佑，隨機獲得地下水和神奇肥料");
    gotoxy(10,18);
    printf("你決定在此種辣椒，希望能夠藉由辣椒經濟發家致富");
    gotoxy(10,20);
    printf("反之，答錯可能會有小懲罰，但辣椒國的世界誰知道呢？");
    gotoxy(10,22);
    printf("=>Press Enter");
    in_enter();
    system("cls");
    gotoxy(10,4);
    printf("======================================================================================");
    gotoxy(10,6);
    printf("並且辣地公還告訴你，只要把一根辣椒埋進土裡並澆水，會種出3根辣椒，這裡真是塊福地");
    gotoxy(10,7);
    printf("當你成功種植出15根辣椒，就可以拿15根辣椒和辣地公交換，申請成為地主，並獲得2*2的辣椒田");
    gotoxy(10,9);
    printf("身為地主的你，再累積收穫60根辣椒後，可以再次讓辣地公顯靈");
    gotoxy(10,11);
    printf("拿25根辣椒交換，成為辣爵，同時掌管3*3的領地");
    gotoxy(10,13);
    printf("最終，辣爵若再累積120根，可以再跟辣地公交換，成為辣椒國國王");
    gotoxy(10,15);
    printf("你將擁有至高無上的榮譽、權力，然後光榮地結束遊戲");
    gotoxy(10,17);
    printf("=>Press Enter");
    in_enter();
    system("cls");
    gotoxy(10,4);
    printf("======================================================================================");
    gotoxy(10,6);
    printf("辣地公有一個辣椒宇宙絕世椒密");
    gotoxy(10,8);
    printf("辣椒國c方有一塊神密之境「澳椒」");
    gotoxy(10,10);
    printf("有人在那裡一夜暴富");
    gotoxy(10,12);
    printf("也有人在那裡輸到脫褲");
    gotoxy(10,14);
    printf("只要你有資格進入澳椒，不妨去體驗看看");
    gotoxy(10,16);
    printf("你到底有沒有被辣地公祝福的偏財運!");
    gotoxy(10,18);
    printf("=>Press Enter");
    in_enter();
    gotoxy(10,21);
    printf("======================================================================================");
    gotoxy(10,23);
    printf("切記，請注意自己的辣椒不能歸零，除卻開荒起始給的一根辣椒，系統將不會再發放任何辣椒");
    gotoxy(10,25);
    printf("你只能依靠種植獲得，否則你會破產，回爐重造投胎，屈辱地結束遊戲。");
    gotoxy(10,27);
    printf("=>Press Enter");
    in_enter();
    system("cls");
}
void statereport(char *name,int *king)
{
    print_statusbar(16,2);
    gotoxy(15, 5);
    printf("———————————————————————");//23
    gotoxy(15, 6);
    printf("|開椒始祖:%12s|",name);
    gotoxy(15, 7);
    if(king[0]==1)
        printf("|社會地位:%12s|","拓荒者");
    else if(king[0]==2)
        printf("|社會地位:%12s|","地主");
    else if(king[0]==3)
        printf("|社會地位:%12s|","辣爵");
    else if(king[0]==4)
        printf("|社會地位:%12s|","辣椒國國王");
    gotoxy(15, 8);
    printf("|辣椒存量:%10d根|",king[1]);
    gotoxy(15, 9);
    printf("———————————————————————");
    print_function(18,11);
    gotoxy(15, 14);
    printf("———————————————————————");
    gotoxy(15, 15);
    printf("|a:%8s|b:%8s|","答題","背包");
    gotoxy(15, 16);
    printf("|c:%8s|l:%8s|","賭場","升等");
    gotoxy(15, 17);
    printf("|s:%8s|p:%8s|","故事集","種辣椒");
    gotoxy(15, 18);
    printf("|w:%8s|  %8s|","水肥功能"," ");
    gotoxy(15, 19);
    printf("———————————————————————");
}
void show_field(int level,int chili)
{
    char c[9];
    fflush(stdin);
    int m=1;
    for(int i=0;i<9;i++){
        if(m<=chili)
            c[i]='s';
        else
            c[i]=' ';
        m++;
    }
    if(level==3)
    {

        gotoxy(60, 6);
        printf("|===================================|");//37 (78-37/2)=60
        gotoxy(60, 7);
        printf("|           |           |           |");
        gotoxy(60, 8);
        printf("|     %c     |     %c     |     %c     |",c[0],c[1],c[2]);
        gotoxy(60, 9);
        printf("|           |           |           |");
        gotoxy(60, 10);
        printf("|===========|===========|===========|");
        gotoxy(60, 11);
        printf("|           |           |           |");
        gotoxy(60, 12);
        printf("|     %c     |     %c     |     %c     |",c[3],c[4],c[5]);
        gotoxy(60, 13);
        printf("|           |           |           |");
        gotoxy(60, 14);
        printf("|===========|===========|===========|");
        gotoxy(60, 15);
        printf("|           |           |           |");
        gotoxy(60, 16);
        printf("|     %c     |     %c     |     %c     |",c[6],c[7],c[8]);
        gotoxy(60, 17);
        printf("|           |           |           |");
        gotoxy(60, 18);
        printf("|===========|===========|===========|");

    }
    else if(level==2)
    {
        gotoxy(65, 6);
        printf("|=========================|");//27 (78-27/2)=65
        gotoxy(65, 7);
        printf("|            |            |");
        gotoxy(65, 8);
        printf("|     %c      |     %c      |",c[0],c[1]);
        gotoxy(65, 9);
        printf("|            |            |");
        gotoxy(65, 10);
        printf("|============|============|");
        gotoxy(65, 11);
        printf("|            |            |");
        gotoxy(65, 12);
        printf("|     %c      |     %c      |",c[2],c[3]);
        gotoxy(65, 13);
        printf("|            |            |");
        gotoxy(65, 14);
        printf("|=========================|");
    }
    else if(level==1)
    {
        gotoxy(70, 8);
        printf("|===============|");//17 78-17/2=70
        gotoxy(70, 9);
        printf("|               |");
        gotoxy(70, 10);
        printf("|       %c       |",c[0]);
        gotoxy(70, 11);
        printf("|               |");
        gotoxy(70, 12);
        printf("|===============|");
    }

}
void input_name(char *name)
{
    print_cactus(35,15);
    print_desert(0,5);
    print_castle(100,12);
    print_eagle(130,2);
    print_eagle(100,6);
    gotoxy(60,10);
    printf("請輸入你的辣名:");
    gets(name);
    mciSendString("close mp3", NULL, 0, NULL);
}
void post_news()
{
    print_breaknews(0,24);
    gotoxy(0,31);
    printf("============================================================================================================================================================");
    gotoxy(0,32);
    int n=rand()%53+1;
    news(n);
}
void post_hotnews(){
    gotoxy(116,1);
    printf("==========辣椒國熱門搜尋排行===========");
    int c=1;
    for(int i=2;i<24;i=i+2){
        gotoxy(116,i);
        int n =rand()%25+1;
        if(i<=2){
            printf("|%d.",c);
        }
        else{
            printf("|%d.",c);
        }
        show_hotnews(n);
        gotoxy(116,i+1);
        printf("========================================");
        c++;
    }

}
void show_levelup(int level, int yn)
{
    mciSendString("close mp3", NULL, 0, NULL);
    mciSendString("open \"special.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    if(level == 1)
    {
        gotoxy(30,3);
        printf("你：椒椒如辣令！辣地公顯靈！");
        in_enter();
        gotoxy(30,4);
        printf("辣地公：怎麼辣？");
        in_enter();
        gotoxy(30,5);
        printf("你：我已經不滿足於當你的開拓者了辣！我要成為地主！");
        in_enter();
        gotoxy(30,6);
        if(yn == 1)
        {
            printf("辣地公：好辣！辣椒拿來辣！給你升級辣！恭喜你辣！升級成地主！你將獲得2*2的辣椒田！");
            in_enter();

        }
        else
        {
            printf("辣地公：你不配辣！辣椒不夠辣！");
            in_enter();
        }
    }
    else if(level == 2)
    {
        gotoxy(30,3);
        printf("你：南無阿密辣佛！辣地公顯靈！");
        in_enter();
        gotoxy(30,4);
        printf("辣地公：亂叫什麼辣！");
        in_enter();
        gotoxy(30,5);
        printf("你：按照辣比士富豪榜，我現在已經辣可敵國，我要成為辣爵！");
        in_enter();
        gotoxy(30,6);
        if(yn == 1)
        {
            printf("辣地公：苟富貴，勿相忘辣！給你升級辣！恭喜你辣！升級成辣爵！你將獲得3*3的辣椒田！");
            in_enter();
        }
        else
        {
            printf("辣地公：我看你是辣比士窮鬼榜！辣椒不夠辣！");
            in_enter();
        }
    }
    else if(level == 3)
    {
        gotoxy(30,3);
        printf("你：小辣子速來見本王！辣地公顯靈！");
        in_enter();
        gotoxy(30,4);
        printf("辣地公：你夠辣！煩死辣！");
        in_enter();
        gotoxy(30,5);
        printf("你：你竟敢忤逆本王，快幫本王舉辦登基大典！");
        in_enter();
        gotoxy(30,6);
        if(yn == 1)
        {
            printf("辣地公：參見辣椒國國王萬歲萬歲萬萬歲！恭喜你辣！成為萬人景仰的辣椒國國王！");
            in_enter();
        }
        else
        {
            printf("辣地公：真是個自大狂妄的辣圾！");
            in_enter();
        }
    }
    mciSendString("close mp3", NULL, 0, NULL);
}

void show_chilitype(int common, int soul,int infinity)
{
    mciSendString("close mp3", NULL, 0, NULL);
    mciSendString("open \"reward.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    if(common>0)
    {
        print_common(5,-1);
        gotoxy(80,20);
        printf("你得到 %d 個普通辣椒",common);
        in_enter();
    }
    if(soul>0)
    {
        print_soul(5,0);
        gotoxy(80,20);
        printf("你得到 %d 個斷魂辣椒",soul);
        in_enter();
    }
    if(infinity>0)
    {
        print_infinite(5,0);
        gotoxy(80,20);
        printf("你得到 %d 個永恆辣椒",infinity);
        in_enter();
    }
    mciSendString("close mp3", NULL, 0, NULL);
}

void show_plant(int fat)
{
    mciSendString("close mp3", NULL, 0, NULL);
    mciSendString("open \"plant.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    for(int i=0;i<3;i++){
        if(i==0){
            print_small_chilli(90,20);
            print_axes1(5,5);
        }
        else if(i==1){
            print_chilli(90,10);
            print_water1(5,5);
        }
        else if(i==2){
            print_big_chilli(90,5);
            if(fat>0)
                print_fat(5,2);
            else
                print_axes1(5,5);

        }

        Sleep(1000);
        printf("\033[2J");
        if(i==0){
            print_chilli(90,10);
            print_axes2(20,15);
        }
        else if(i==1){
            print_big_chilli(90,5);
            print_water2(0,0);
        }
        else if(i==2){
            print_big_chilli(90,5);
            if(fat>0)
                print_fat(5,2);
            else
                print_axes2(20,15);
        }
        Sleep(1000);
        printf("\033[2J");
    }
    mciSendString("close mp3", NULL, 0, NULL);
}

void show_water(int water)
{
    gotoxy(30, 10);
    printf("water:%d\n",water);
    in_enter();
}


void show_fat(int fat)
{
    printf("fat:%d\n",fat);
    in_enter();
}

void show_rules()
{
    printf("rules\n");
    in_enter();
}


void show_story(int level)
{
    if(level == 1)
    {
        printf("story\n");
    }
    else if(level == 2)
    {
        printf("story\n");
    }
    else if(level == 3)
    {
        printf("story\n");
    }
    in_enter();
}

void show_question(int n)
{

    switch(n)
    {

    case 1:
        gotoxy(30,8);
        printf("辣椒國國王叫什麼?\n");
        gotoxy(30,9);
        printf("(A)King of Spicy\n");
        gotoxy(30,10);
        printf("(B)Ultra spicy\n");
        gotoxy(30,11);
        printf("(C)A little spicy\n");
        gotoxy(30,12);
        printf("(D)Aespa-《Spicy\n");
        break;
    case 2:
        gotoxy(30,8);
        printf("這世界上有一個家喻戶曉、名響國際的超級巨星，名為潮男，字天椒，人稱潮天椒，\n");
        gotoxy(30,9);
        printf("路過的辣椒都要對她磕頭，因為只要跟她吸到同一片空氣，有50%的機率會過潮致死\n");
        gotoxy(30,10);
        printf("，只要磕頭就能得到珍貴的乾燥劑，讓濕氣不會過多並成為養分。請問該怎麼讓這位\n");
        gotoxy(30,11);
        printf("光芒四射、眾星拱月的大人物納入辣椒國，為我們國家效力呢?\n");
        gotoxy(30,12);
        printf("(A)獻上三千萬辣椒\n");
        gotoxy(30,13);
        printf("(B)讓辣椒國國王對他磕頭\n");
        gotoxy(30,14);
        printf("(C)把韓國歌手Seventeen Hoshi納為辣椒國國民\n");
        gotoxy(30,15);
        printf("(D)跟潮天椒尬舞直到他輸\n");
        break;

    case 3:
        gotoxy(30,8);
        printf("如果想成為辣椒國的明星，應該如何做?\n");
        gotoxy(30,9);
        printf("(A)奮發向上進入辣椒國Spop訓練所，當上練習生接受潮天椒的指導\n");
        gotoxy(30,10);
        printf("(B)將辣椒國國訓背到滾椒爛熟，並申請面聖，在國王面前展現自己的忠誠，發誓下輩子\n");
        gotoxy(30,11);
        printf("   會變成能無限繁殖的辣椒\n");
        gotoxy(30,12);
        printf("(C)參加選椒節目，和101位辣椒國國民競爭拿下S位，原地出道");
        gotoxy(30,13);
        printf("(D)當潮天椒的私生飯，每天觀察他的一舉一動。崇拜潮天椒，理解潮天椒，成為潮天椒\n");
        break;
    case 4:
        gotoxy(30,8);
        printf("由於在建國初期，辣椒國缺乏科技新貴，要怎麼挖角他國人才成為辣椒國國民?\n");
        gotoxy(30,9);
        printf("(A)聽說國王好像是電機系的，全權交由國王促進科技發展，等他過勞死就能改椒換代了\n");
        gotoxy(30,10);
        printf("(B)用潮天椒當活招牌，加入辣椒國就能得到潮天椒的免費飛吻\n");
        gotoxy(30,11);
        printf("(C)先跟潮天椒借錢，開出年薪1000萬的職缺\n");
        gotoxy(30,12);
        printf("(D)保證辣椒國工程師每天都能睡滿8小時\n");
        break;
    case 5:
        gotoxy(30,8);
        printf("在辣椒國攝取足夠辣椒飲品能夠保佑長命百歲，請問辣椒國最受歡迎的飲料是什麼?\n");
        gotoxy(30,9);
        printf("(A)椒糖奶茶\n");
        gotoxy(30,10);
        printf("(B)椒糖瑪奇朵\n");
        gotoxy(30,11);
        printf("(C)香椒凍奶茶\n");
        gotoxy(30,12);
        printf("(D)紅椒汁\n");
        break;
    case 6:
        gotoxy(30,8);
        printf("辣椒國國民非常愛美，整日妄想自己的氣色能和辣椒一樣紅潤，除了國王沒人能辦到\n");
        gotoxy(30,9);
        printf("，於是大家爭相模仿辣椒國國王的保養秘訣，請問辣椒國國王的保養程序為何?\n");
        gotoxy(30,10);
        printf("(A)國產SB-||神椒水=>椒嫩水光精華液=>椒原蛋白面膜=>椒蘭濕賽車眼霜=>資椒堂激透\n");
        gotoxy(30,11);
        printf("光乳液=>椒蘭皇家修護晚霜\n");
        gotoxy(30,12);
        printf("(B)椒原蛋白面膜=>國產SB-||神椒水=>椒嫩水光精華液=>椒蘭濕賽車眼霜=>資椒堂激透\n");
        gotoxy(30,13);
        printf("光乳液=>椒蘭皇家修護晚霜\n");
        gotoxy(30,14);
        printf("(C)洗把臉就能躺床了，天生椒質\n");
        gotoxy(30,15);
        printf("(D)每天在被窩中刷帥哥reels才是最好的保養\n");
        break;
    case 7:
        gotoxy(30,8);
        printf("如果一個懷孕的辣椒國婦女在產前一個禮拜夢到小辣椒，請問依辣椒國民間傳說，這代表什麼?\n");
        gotoxy(30,9);
        printf("(A)他的孩子將會是下一代辣椒國國王\n");
        gotoxy(30,10);
        printf("(B)這家人會一夜暴富，因為小孩生出來時會從天而降一堆極品辣椒種子\n");
        gotoxy(30,11);
        printf("(C)他的孩子上輩子是辣椒\n");
        gotoxy(30,12);
        printf("(D)他的孩子是生理性別男\n");
        break;
    case 8:
        gotoxy(30,8);
        printf("現今他國流行帶上自己的棉花娃娃出門遛娃，拍照也是娃娃先吃，但是辣椒國也有\n");
        gotoxy(30,9);
        printf("自己的文化，他們會「遛椒」，帶上自己種出最高等的辣椒出門炫耀。當然，娃娃有\n");
        gotoxy(30,10);
        printf("痛包，辣椒也有「椒包」，請問一個良好的「椒包」應該要有什麼優點?\n");
        gotoxy(30,11);
        printf("(A)附加擴聲器宣傳「這是我的極品辣椒」\n");
        gotoxy(30,12);
        printf("(B)附加吊牌上面寫著「國王都沒我潮」\n");
        gotoxy(30,13);
        printf("(C)有足夠空間讓辣椒住得舒服，並且有小孔洞讓辣椒換氣\n");
        gotoxy(30,14);
        printf("(D)只要是潮天椒背的椒包，它就是世界上最好的椒包\n");
        break;
    case 9:
        gotoxy(30,8);
        printf("國歌能夠幫助國民凝聚民族情感、協助教育與文化傳承、鼓舞士氣、展現國際形象，\n");
        gotoxy(30,9);
        printf("請問下列何者是辣椒國的國歌?\n");
        gotoxy(30,10);
        printf("(A)Aespa –《Spicy》\n");
        gotoxy(30,11);
        printf("(B)HWASA X SWF2 –《Chili》\n");
        gotoxy(30,12);
        printf("(C)Seventeen–《Chilli》\n");
        gotoxy(30,13);
        printf("(D)只要是辣椒國國王唱出來的歌，都是世界上最好的國歌\n");
        break;
    case 10:
        gotoxy(30,8);
        printf("潮天椒是一個多才多藝的人，在藝術上頗有造詣，但是近來椒大盃桌上游泳大賽沒經\n");
        gotoxy(30,9);
        printf("過他的同意，繼續沿用主視覺、模板、以及紀念品，甚至二改，請問這種侵犯著作權\n");
        gotoxy(30,10);
        printf("的事件，在辣椒國該如何處刑?\n");
        gotoxy(30,11);
        printf("(A)在眼睛上噴辣椒水，直到他眼睛瞎掉\n");
        gotoxy(30,12);
        printf("(B)把手剁掉，哪隻手二改就剁哪隻\n");
        gotoxy(30,13);
        printf("(C)處以拶刑---中國古代一種夾手指的肉刑\n");
        gotoxy(30,14);
        printf("(D)以上皆可\n");
        break;
    case 11:
        gotoxy(30,8);
        printf("辣椒國最高學府是以下哪所學校?\n");
        gotoxy(30,9);
        printf("(A)檯大\n");
        gotoxy(30,10);
        printf("(B)椒大\n");
        gotoxy(30,11);
        printf("(C)橙大\n");
        gotoxy(30,12);
        printf("(D)棈大\n");
        break;
    case 12:
        gotoxy(30,8);
        printf("辣椒國的政體為以下哪種?\n");
        gotoxy(30,9);
        printf("(A)椒主立憲\n");
        gotoxy(30,10);
        printf("(B)椒主獨裁\n");
        gotoxy(30,11);
        printf("(C)共和立憲\n");
        gotoxy(30,12);
        printf("(D)共和獨裁\n");
        break;
    case 13:
        gotoxy(30,8);
        printf("住在佛辣里達的辣先生為了讓他的辣椒得到永生，他最有可能做出以下哪種舉動?\n");
        gotoxy(30,9);
        printf("(A)帶辣椒去西天取經\n");
        gotoxy(30,10);
        printf("(B)把辣椒做成辣椒罐頭\n");
        gotoxy(30,11);
        printf("(C)帶辣椒做時光機去找椒史皇\n");
        gotoxy(30,12);
        printf("(D)綁架椒大辣椒研究所的科學家逼他做實驗\n");
        break;
    case 14:
        gotoxy(30,8);
        printf("住在辣椒國的辣先生大清早私闖椒先生民宅被發現，但卻沒有發生任何衝突，以下何\n");
        gotoxy(30,9);
        printf("者原因可能性最高?\n");
        gotoxy(30,10);
        printf("(A)辣先生是椒先生的SBI的探員，椒先生疑似私藏異種辣椒，需要配合調查\n");
        gotoxy(30,11);
        printf("(B)辣先生是椒先生失散多年的爸爸，他們上演父子情深重逢的戲碼\n");
        gotoxy(30,12);
        printf("(C)辣先生跑去別人家幫他做辣椒三明治breakfast，並叫椒先生""回去接著睡吧""\n");
        gotoxy(30,13);
        printf("(D)辣先生表示他在做辣椒國的社會心理學研究，如果椒先生不報警可以讓他11個月內獲\n");
        gotoxy(30,14);
        printf("   得椒大碩士學位\n");
        break;
    case 15:
        gotoxy(30,8);
        printf("辣椒國的子民辣先生覺得辣椒國勞基法不夠完善，讓勞工過勞工作，請問他最有可能\n");
        gotoxy(30,9);
        printf("採取以下何種措施?\n");
        gotoxy(30,10);
        printf("(A)穿上辣椒裝跑去辣椒銀行搶劫，然後跑出來在大街上一邊喊辣椒國勞動人民萬歲一邊\n");
        gotoxy(30,11);
        printf("   撒搶來的辣椒貨幣\n");
        gotoxy(30,12);
        printf("(B)cosplay辣氏企業的經理，趁著風和日麗的一天跑去企業大樓，解雇多名員工\n");
        gotoxy(30,13);
        printf("(C)創立辣椒教，然後打著政教合一的口號，混入辣椒國國會，把所有議會成員辣暈，再\n");
        gotoxy(30,14);
        printf("   自己三讀新的勞基法\n");
        gotoxy(30,15);
        printf("(D)建立青椒國，把辣椒國的子民哄騙到青椒國定居，頒布他自己喜歡的勞基法\n");
        break;
    case 16:gotoxy(30,8);
        printf("辣椒國的辣先生是樂壇遺珠，他很希望自己的辣椒風音樂可以被全宇宙知道，請問他\n");
        gotoxy(30,9);
        printf("會怎麼宣傳他的音樂作品?\n");
        gotoxy(30,10);
        printf("(A)暗殺辣斯克並取代他，把SPICY X的所有宣傳曲換成辣先生的作品，並把他的音樂專\n");
        gotoxy(30,11);
        printf("   輯送上太空。\n");
        gotoxy(30,12);
        printf("(B)綁架27個辣椒國國民，強迫他們聽36小時辣先生寫的歌\n");
        gotoxy(30,13);
        printf("(C)冒充辣椒國監獄的心理諮商師，每天給勞改犯洗腦全世界最棒的曲風就是他的辣椒風\n");
        gotoxy(30,14);
        printf("   音樂\n");
        gotoxy(30,15);
        printf("(D)開發辣椒國流量最大的社交媒體siksok，在上面發起各種辣椒曲風challenge\n");

        break;
    case 17:
        gotoxy(30,8);
        printf("辣先生想要體驗”懷民亦未寢”的友情，卻沒有朋友，請問他應該怎麼做? \n");
        gotoxy(30,9);
        printf("(A)遵循吸引力法則，每天激勵自己一定會一夜暴富，然後去椒大二手版開價9,9999,9999\n");
        gotoxy(30,10);
        printf("   徵友誼\n");
        gotoxy(30,11);
        printf("(B)去椒大頂樓用廣播器跟全校師生說""沒有朋友的頂樓風好大，我好怕""\n");
        gotoxy(30,12);
        printf("(C)跑去辣椒湖灌鱷魚酒，強迫鱷魚跟他當朋友\n");
        gotoxy(30,13);
        printf("(D)A一三五當辣先生，跑去郵局寄信給椒先生；二四六當椒先生，收到信後回信給辣先生\n");
        gotoxy(30,14);
        printf("   ；星期天批改信件中的錯別字\n");
        break;
    case 18:
        gotoxy(30,8);
        printf("辣椒國的辣先生還沒有一夜暴富，請問對她而言，哪一天是過鬼節紀念靈魂的吉日?\n");
        gotoxy(30,9);
        printf("(A)10/31 萬聖節\n");
        gotoxy(30,10);
        printf("(B)辣椒曆第五的節氣的第一天 清明節\n");
        gotoxy(30,11);
        printf("(C)11/02 亡靈節\n");
        gotoxy(30,12);
        printf("(D)活著的每一天，每天都是窮鬼，死了變成餓死鬼\n");
        break;
    case 19:
        gotoxy(30,8);
        printf("辣先生想要成為辣洲舞王，請問他應該怎麼做? \n");
        gotoxy(30,9);
        printf("(A)去遊戲廳偷跳舞機，每天半夜偷偷練習，只為了驚艷所有人\n");
        gotoxy(30,10);
        printf("(B)跟羅姓藝人請教時間管理方案，如何高效速成精湛舞技\n");
        gotoxy(30,11);
        printf("(C)成立野雞辣椒藝術學院，謊稱自己是椒大藝術學院，自己當舞蹈系系主任，立志改寫\n");
        gotoxy(30,12);
        printf("   辣椒國舞蹈藝術發展史\n");
        gotoxy(30,13);
        printf("(D)把網路上所有的Michael Jackson影音資料全部AI換頭成辣先生高P藝術照，然後告訴\n");
        gotoxy(30,14);
        printf("   全世界:我是Michael Jacksyy\n");
        break;
    case 20:
        gotoxy(30,8);
        printf("辣先生鄰近中年，還經常熬夜加班工作，薪水是分毫不漲，倒是收穫地中海禿頭，他\n");
        gotoxy(30,9);
        printf("越發自卑，覺得自己要錢錢沒有，要頭髮頭髮掉光光，請問他該如何安慰自己?\n");
        gotoxy(30,10);
        printf("(A)每天左手拿一個剃刀，右手拿一個電動理髮器，試圖練成快手雙刀流，見一個剃一個\n");
        gotoxy(30,11);
        printf("   ，讓大家都可以獲得同款造型\n");
        gotoxy(30,12);
        printf("(B)買水軍在網路上混水摸魚到處說，每拔掉一根頭髮，就是在供奉天上辣椒大帝，辣椒\n");
        gotoxy(30,13);
        printf("   大帝會保佑祂的信徒們，一夜暴富，企圖讓所有辣椒國國民自己拔自己的頭髮\n");
        gotoxy(30,14);
        printf("(C)在自家後院種辣椒，然後把辣椒風乾，再製作成假髮，成為時下最fashion的辣式前刺\n");
        gotoxy(30,15);
        printf("(D)跑去鄰居家，把他們家的賽級寵物貓、寵物狗也剃成地中海禿頭\n");
        break;
    case 21:
       gotoxy(30,8);
        printf("為何要開墾辣椒國？\n");
        gotoxy(30,9);
        printf("(A)開國始祖的故鄉發生辣椒大飢荒\n");
        gotoxy(30,10);
        printf("(B)崇拜辣椒國國王，想透過建國接受他的統治\n");
        gotoxy(30,11);
        printf("(C)開國始祖擁有最高等級開墾執照，其祖先亦是當初來台灣開墾嘉南平原的功臣，家族\n");
        gotoxy(30,12);
        printf("   擁有長遠的開墾經驗，受國王邀請前來開墾辣椒國\n");
        gotoxy(30,13);
        printf("(D)辣椒教教徒想要擁有自己的宗教國家，期望以辣教治國，創建一個辣椒共產主義國家\n");
        break;
    case 22:
        gotoxy(30,8);
        printf("請問辣椒國最高層級的法律為何？\n");
        gotoxy(30,9);
        printf("(A)憲法\n");
        gotoxy(30,10);
        printf("(B)民法\n");
        gotoxy(30,11);
        printf("(C)王法\n");
        gotoxy(30,12);
        printf("(D)刑法\n");
        break;
    case 23:
        gotoxy(30,8);
        printf("辣椒國會如何產生國王的接班人？\n");
        gotoxy(30,9);
        printf("(A)經歷黨派初選提名候選人後，全民選舉\n");
        gotoxy(30,10);
        printf("(B)行政院提名，議會表決\n");
        gotoxy(30,11);
        printf("(C)辣椒國國王親自指定培養\n");
        gotoxy(30,12);
        printf("(D)辣椒國國王長生不老，不會有接班人的問題\n");
        break;
    case 24:
        gotoxy(30,8);
        printf("請問以下何者並非辣椒國的邦交國？\n");
        gotoxy(30,9);
        printf("(A)青椒國\n");
        gotoxy(30,10);
        printf("(B)香蕉國\n");
        gotoxy(30,11);
        printf("(C)藻礁國\n");
        gotoxy(30,12);
        printf("(D)辣椒國沒有邦交國\n");
        break;
    case 25:
        gotoxy(30,8);
        printf("辣椒國雖然積極發展外交，結果卻不盡人意，因此被國民笑稱為以下何者？\n");
        gotoxy(30,9);
        printf("(A)椒區\n");
        gotoxy(30,10);
        printf("(B)勝不椒，敗不餒\n");
        gotoxy(30,11);
        printf("(C)椒生慣養\n");
        gotoxy(30,12);
        printf("(D)椒不到朋友的孤兒\n");
        break;
    case 26:
        gotoxy(30,8);
        printf("身為辣椒國的國民，種辣椒當然是必備的技能，請問辣椒最適宜的生長溫度為何？\n");
        gotoxy(30,9);
        printf("(A)辣椒生命力頑強，任何溫度都能生長茁壯\n");
        gotoxy(30,10);
        printf("(B)0~15度\n");
        gotoxy(30,11);
        printf("(C)25~30度\n");
        gotoxy(30,12);
        printf("(D)35~50度\n");
        break;
    case 27:
        gotoxy(30,8);
        printf("辣椒國是個熱愛吵架的國家，尤其以國民嗆辣又不失創意的吵架用詞聞名，請問又以\n");
        gotoxy(30,9);
        printf("下列何種辣椒最為嗆辣？\n");
        gotoxy(30,10);
        printf("(A)斷魂椒\n");
        gotoxy(30,11);
        printf("(B)X辣椒\n");
        gotoxy(30,12);
        printf("(C)娜迦毒蛇辣椒\n");
        gotoxy(30,13);
        printf("(D)永恆辣椒\n");
        break;
    case 28:
        gotoxy(30,8);
        printf("辣椒國國力強盛、繁榮富強，因此吸引很多非法移民前來開啟新生活，人稱「辣椒\n");
        gotoxy(30,9);
        printf("夢」，但也因此引起很多治安問題，請問下列何者可能為辣椒國的非法移民？\n");
        gotoxy(30,10);
        printf("(A)龍之氣息\n");
        gotoxy(30,11);
        printf("(B)卡羅萊納死神\n");
        gotoxy(30,12);
        printf("(C)深淵之怒\n");
        gotoxy(30,13);
        printf("(D)特立尼達蠍子壯漢T辣椒\n");
        break;
    case 29:
        gotoxy(30,8);
        printf("頂撞辣椒國國王的罰則為何？\n");
        gotoxy(30,9);
        printf("(A)去頂樓下跪道歉\n");
        gotoxy(30,10);
        printf("(B)死刑\n");
        gotoxy(30,11);
        printf("(C)看國王的心情\n");
        gotoxy(30,12);
        printf("(D)罰金100000000辣椒幣\n");
        break;
    case 30:
        gotoxy(30,8);
        printf("請問辣椒國裡家喻戶曉的國民偶像為下列何者？\n");
        gotoxy(30,9);
        printf("(A)Spicy boys\n");
        gotoxy(30,10);
        printf("(B)潮天椒\n");
        gotoxy(30,11);
        printf("(C)SBI\n");
        gotoxy(30,12);
        printf("(D)Michael Jacksyy\n");
        break;
    case 31:
        gotoxy(30,8);
        printf("辣椒國的鬼故事，晚上最可怕的場景是什麼？\n");
        gotoxy(30,9);
        printf("(A)看到一顆甜椒從地裡冒出來\n");
        gotoxy(30,10);
        printf("(B)半夜去便利商店的路上遇到賣火柴的小女椒\n");
        gotoxy(30,11);
        printf("(C)夢見自己被青椒大軍追殺\n");
        gotoxy(30,12);
        printf("(D)打開冰箱，發現辣椒醬全部變成水\n");
        break;
    case 32:
        gotoxy(30,8);
        printf("辣椒國的國民發現，他們的國旗每到晚上會發光，原因是什麼？\n");
        gotoxy(30,9);
        printf("(A)旗幟上塗了辣椒精，遇熱會發光\n");
        gotoxy(30,10);
        printf("(B)旗子其實是用夜光辣椒粉染成的\n");
        gotoxy(30,11);
        printf("(C)因為國旗上有國王的秘密辣汁配方，具有光反應\n");
        gotoxy(30,12);
        printf("(D)是為了在黑夜中提醒敵國：小心辣椒國的力量!\n");
        break;
    case 33:
        gotoxy(30,8);
        printf("下列哪位國民最有可能成為辣椒國的官員？\n");
        gotoxy(30,9);
        printf("(A)認真讀書，奮發向上，每天為自己的成績椒慮的椒明\n");
        gotoxy(30,10);
        printf("(B)整天附和辣椒國國王，替他按摩舒壓，並用自己的美色誘惑國王的椒美\n");
        gotoxy(30,11);
        printf("(C)總是窩在家裡打code、看動漫的工程師椒宅\n");
        gotoxy(30,12);
        printf("(D)身為醫生且熱心助椒，看病不用錢的椒醫\n");
        break;
    case 34:
        gotoxy(30,8);
        printf("當辣椒國國王不爽時，他會進行哪個休閒活動？\n");
        gotoxy(30,9);
        printf("(A)溜椒\n");
        gotoxy(30,10);
        printf("(B)跟青椒國開戰\n");
        gotoxy(30,11);
        printf("(C)找十個大臣來他面前抽背國訓\n");
        gotoxy(30,12);
        printf("(D)看椒劇\n");
        break;
    case 35:
        gotoxy(30,8);
        printf("「椒劇」是辣椒國獨有的戲劇，請問下列哪個元素是「椒劇」必會出現的？\n");
        gotoxy(30,9);
        printf("(A)霸道男椒壁咚女椒\n");
        gotoxy(30,10);
        printf("(B)女椒愛上男椒，男椒喜歡的卻是男二椒\n");
        gotoxy(30,11);
        printf("(C)女椒死翹翹，男椒感到傷心難過，在她的椒墓前求佛500年\n");
        gotoxy(30,12);
        printf("(D)跳晚安大小椒\n");
        break;
    case 36:
        gotoxy(30,8);
        printf("辣椒國一年一度的辣椒大會時，各椒都需要到場，請問辣椒大會上會看到什麼情況?\n");
        gotoxy(30,9);
        printf("(A)穿著筆挺的黑色西裝，搭配閃亮的紳士帽，現場大跳熱血四溢的霹靂舞，引得掌聲不斷。\n");
        gotoxy(30,10);
        printf("(B)鬆的街頭風衣著，頭戴時尚毛線帽，隨著節奏感極強的音樂，秀出炸裂全場的hip hop舞步。\n");
        gotoxy(30,11);
        printf("(C)身穿紅綠相間的華麗舞衣，排成整齊的陣列，邊旋轉邊跳躍，展現辣椒國最具特色的「椒際舞」，熱烈非凡。\n");
        gotoxy(30,12);
        printf("(D)一身迷彩戰鬥裝扮，頭戴軍帽，整齊劃一地列隊高喊：「小粉紅萬歲！」場面震撼無比，氣勢直衝雲霄。\n");
        break;
    case 37:
        gotoxy(30,8);
        printf("當辣椒國國民生氣時，他們通常會說什麼？\n");
        gotoxy(30,9);
        printf("(A)「氣到我想吐火！」\n");
        gotoxy(30,10);
        printf("(B)「再這樣下去，我就變酸辣湯了！」\n");
        gotoxy(30,11);
        printf("(C)「看我不把你熏到辣眼睛！」\n");
        gotoxy(30,12);
        printf("(D)「喔買尬，氣到冒椒氣！」\n");
        break;
    case 38:
        gotoxy(30,8);
        printf("辣椒國的國民發現他們的貨幣背後竟然隱藏了一段密語，這段密語最有可能是什麼？\n");
        gotoxy(30,9);
        printf("(A)「再辣也是我的國。」\n");
        gotoxy(30,10);
        printf("(B)「火辣人生，熱情無限。」\n");
        gotoxy(30,11);
        printf("(C)「椒主至上，辣椒萬歲。」\n");
        gotoxy(30,12);
        printf("(D)「一切皆有辣椒之魂。」\n");
        break;
    case 39:
        gotoxy(30,8);
        printf("辣椒國的國寶是一件什麼物品？\n");
        gotoxy(30,9);
        printf("(A)一顆歷史悠久的古辣椒\n");
        gotoxy(30,10);
        printf("(B) 國王御用的辣椒餐具\n");
        gotoxy(30,11);
        printf("(C) 一本記載所有辣椒種類的「椒典」\n");
        gotoxy(30,12);
        printf("(D) 一幅描繪辣椒國起源的油畫\n");
        break;
    case 40:
        gotoxy(30,8);
        printf("辣椒國的辣先生被聘為外交大使，他第一次出訪時送了對方國王什麼國禮？\n");
        gotoxy(30,9);
        printf("(A)世界最辣的辣椒種子\n");
        gotoxy(30,10);
        printf("(B)超辣糖果，吃一顆舌頭會斷掉\n");
        gotoxy(30,11);
        printf("(C)辣椒做的皇冠，戴上後能辣翻全場\n");
        gotoxy(30,12);
        printf("(D)一本《如何成為辣椒國國民》的教科書\n");
        break;

    }

}
void show_hotnews(int n) //熱搜
{
    switch(n)
    {
    case 1:
        printf("「還珠椒椒」收視破50");
        break;
    case 2:
        printf("潮天椒加入椒大成為特聘教授");
        break;
    case 3:
        printf("seventeen芳心縱火犯!");
        break;
    case 4:
        printf("潮天椒spicytube穫千萬觀看");
        break;
    case 5:
        printf("椒積電驚傳多名天才工程師猝死");
        break;
    case 6:
        printf("「我來椒椒你」 紅椒汁");
        break;
    case 7:
        printf("潮天椒 變潮的神奇小妙招");
        break;
    case 8:
        printf("辣椒死於劣質椒包");
        break;
    case 9:
        printf("辣椒國國慶 國王freestyle");
        break;
    case 10:
        printf("辣椒國應試 抽象");
        break;
    case 11:
        printf("椒大椒體科學樓 神秘傳說");
        break;
    case 12:
        printf("廚神椒登 辣椒三明治");
        break;
    case 13:
        printf("辣氏企業經理 分身術");
        break;
    case 14:
        printf("辣椒國 驚天人口失蹤案");
        break;
    case 15:
        printf("小木屋怪聲 神祕的嗆辣歌");
        break;
    case 16:
        printf("辣椒和動物交友的可實行性之探究");
        break;
    case 17:
        printf("蠢材 一題都答不對 窮鬼");
        break;
    case 18:
        printf("豪宅帝椒 怪聲");
        break;
    case 19:
        printf("寵物權益法案");
        break;
    case 20:
        printf("辣椒染疫之後會發生甚麼");
        break;
    case 21:
        printf("勝不椒，敗不餒");
        break;
    case 22:
        printf("爆炸辣的新型辣椒");
        break;
    case 23:
        printf("辣椒勇士椒森：辣椒，是我的生命！");
        break;
    case 24:
        printf("少數椒族 龍之氣息");
        break;
    case 25:
        printf("今天，我的晶片比你還火辣!");
        break;
    case 26:
        printf("辣椒國國王 大赦政治罪犯");
        break;
    case 27:
        printf("把辣椒看成甜椒，當場慘叫");
        break;
    case 28:
        printf("辣椒國國寶特展");
        break;
    case 29:
        printf("彩虹辣椒");
        break;
    case 30:
        printf("潮天椒 全宇宙最佳視椒");
        break;
    case 31:
        printf("躺床小精靈 椒氏世界紀錄");
        break;
    case 32:
        printf("辣椒蜜 辣地公");
        break;
    case 33:
        printf("辣椒國 RPG遊戲");
        break;
    case 34:
        printf("椒綠沒有股份公司 一夜暴富");
        break;
    case 35:
        printf("潮天椒實驗室 潮男的祕笈");
        break;
    case 36:
        printf("siksok上 challenge");
        break;
    case 37:
        printf("潮天椒 時尚預測 辣椒紅");
        break;
    case 38:
        printf("地椒翻身 千椒失蹤");
        break;
    case 39:
        printf("澳椒 翻新賭場");
        break;
    case 40:
        printf("辣椒國國王 香椒");
        break;
    case 41:
        printf("椒大 登月計畫");
        break;
    case 42:
        printf("辣椒國國王打扮成潮天椒");
        break;
    case 43:
        printf("辣教 椒堂");
        break;
    case 44:
        printf("政治犯 給國王下跪");
        break;
    case 45:
        printf("辣椒國 杜絕椒麻");
        break;
    case 46:
        printf("校園內宣導 抵制抽電椒菸");
        break;
    case 47:
        printf("辣椒國國王：一夜暴富、長生不老");
        break;
    case 48:
        printf("躺床小精靈 躺床vlog");
        break;
    case 49:
        printf("辣椒國皇宮 鮮花套椒情");
        break;
    case 50:
        printf("躺床小精靈 躺床學院");
        break;
    case 51:
        printf("躺床小精靈 潮天椒 實驗室");
        break;
    case 52:
        printf("潮天椒 椒綠沒有股份公司");
        break;
    case 53:
        printf("躺床小精靈 種族歧視");
        break;
}
}
void show_event(int n) //隨椒
{
    mciSendString("close mp3", NULL, 0, NULL);
    mciSendString("open \"fail.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    print_Oops(40,15);
    in_enter();
    printf("\033[2J");
    mciSendString("close mp3", NULL, 0, NULL);
    mciSendString("open \"bling.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    gotoxy(45,20);
    switch(n)
    {

    case 1:
        printf("偶遇潮男路演滿大街撒辣椒，獲贈辣椒+5\n");
        break;
    case 2:
        printf("辣椒國財政赤字面臨破產危機，民眾紛紛捐出辣椒供國王吃喝玩樂，辣椒-6\n");
        break;
    case 3:
        printf("反叛政權川辣試圖非法拉攏人民，挨家挨戶送神奇肥料，肥料+3\n");
        break;
    case 4:
        printf("反聖椒現象來襲，溫度降低，辣椒死50%\n");
        break;
    case 5:
        printf("椒大研究風氣日益上升，研究出可以讓辣地公顯靈的世界宇宙超級無敵好吃的辣椒蜜，在全球椒s排行榜上實現排名飛越，神奇肥料+9\n");
        break;
    case 6:
        printf("潮天椒塌房，他的極端粉絲在大街上到處搞破壞，辣椒-7\n");
        break;
    case 7:
        printf("辣椒國國王斥巨椒研究長生不老之術，每家每戶增稅，辣椒-3\n");
        break;
    case 8:
        printf("椒大研發出極品辣椒，為了回饋鄉里免費贈送，辣椒+10\n");
        break;
    case 9:
        printf("超級強颱三坨辣來襲，水庫洩洪，辣椒國政府忘記叫大家蓄水，水-3\n");
        break;
    case 10:
        printf("好多人戴著辣椒蜜去供奉辣地公，辣地公嗨到顯靈，獲贈神奇肥料+9\n");
        break;
    case 11:
        printf("辣椒國最近有不法份子偷偷製毒，讓很多辣椒都被提純成椒麻，辣椒-3\n");
        break;
    case 12:
        printf("辣椒國八加九最近流行抽電椒菸，辣椒紛紛被偷走，辣椒-3\n");
        break;
    case 13:
        printf("帝國崛起—辣椒國的誕生，主創團隊：椒綠沒有股份公司，為了慶祝大家考完期中考，動動金手指，每位玩家均可領取神奇肥料+10\n");
        break;
    case 14:
        printf("辣椒國最近被捲入辣椒、妖、魔三界仙俠奇幻世界，魔界的東方青椒對辣椒國發起進攻，搶奪水資源，水-1\n");
        break;
    case 15:
        printf("辣椒國最近在選賢與能，賀椒麗沒有獲得辣椒國國王的青睞，暴怒，偷偷燒掉辣椒田，辣椒-8\n");
        break;
    case 16:
        printf("辣椒國近來和青椒國關係緩和，民間生意往來越發興盛，辣椒國的椒種多樣性因而提升，辣椒生物鏈穩定，辣椒+6\n");
        break;
    case 17:
        printf("辣椒國開闢了特別行政區：澳椒，開放博弈娛樂活動，小賭怡情，神奇肥料+7\n");
        break;
    case 18:
        printf("辣椒國近期的登月計劃非常成功，甚至拿到月壤，用神奇月壤種辣椒可以種出500公斤的巨無霸辣椒，辣椒+10\n");
        break;
    case 19:
        printf("辣椒國的特別行政區：香椒，近期發生反送椒抗議事件，他們為了抗議，拿水潑辣椒田試圖淹死辣椒，但好在椒大開發出超絕蓄水系統，他們亂潑的水得以被儲存，水+5\n");
        break;
    case 20:
        printf("最近胡椒國在打南北戰爭，希望黑白胡椒可以平等生存，難民湧入辣椒國，畢竟都是辛辣之物，辣椒國辣度上漲，辣椒+2\n");
        break;
    case 21:
        printf("辣椒國國王微服出巡，看見百姓安居樂業，民風祥和，椒心大悅，神奇肥料+6\n");
        break;
    case 22:
        printf("辣椒國遭遇變異病毒侵襲，辣椒們雖然都遵循防疫隔離制度，但仍有不少辣椒不幸離世，辣椒-4\n");
        break;
    case 23:
        printf("辣椒國地椒翻身，不少辣椒不幸罹難，辣椒-3\n");
        break;
    case 24:
        printf("潮男以朝天椒之姿成功走如國際，衣緊還鄉時人潮洶湧，有辣椒爬上樹只為一睹潮男的風采，結果不小心摔下樹，甚至發生踩踏意外，辣椒-3\n");
        break;
    case 25:
        printf("辣椒國國王為了更好的管控國家，實行政教合一，成立辣教，辣椒國子民有了精神依託，政策執行上也越發高效，辣椒國經濟穩定上升，辣椒+5\n");
        break;
    case 26:
        printf("椒始皇疑似找照長生不老的秘方 辣椒王水+1\n");
        break;
    case 27:
        printf("辣椒國的知名大盜椒德從國庫偷了不少寶貝，但在天空滑翔途中掉了一個，辣椒王水+1\n");
        break;
    case 28:
        printf("辣椒國國王椒心大悅，給辣椒國評選最佳椒農頒獎，辣椒王水+1\n");
        break;
    case 29:
        printf("椒里夫人研發出可以治療椒癌的放射辣椒王水，辣椒王水+1\n");
        break;
    case 30:
        printf("肥料工廠被寒流天團SEVENTEEN縱火，神奇肥料-3\n");
        break;
    case 31:
        printf("一群椒工在大辣山上挖掘傳說中的神辣礦石，導致火山噴發，濃煙覆蓋你的辣椒田 辣椒-5\n");
        break;
    case 32:
        printf("鄰居覺得你放在後門的肥料太臭，偷偷把它拿去埋了 肥料-2\n");
        break;
    case 33:
        printf("流浪椒把你的水喝光了 水-2\n");
        break;
    case 34:
        printf("青椒國認為辣椒國的肥料太神了，來了一群青椒把你的肥料搶走 肥料-2\n");
        break;
    case 35:
        printf("椒后生病，椒王緊急徵招各種神藥 辣椒王水-1\n");
        break;
    case 36:
        printf("椒王暴政，引發椒史之亂，許多辣椒遭到波及 辣椒-6\n");
        break;
    case 37:
        printf("椒王子告白被拒絕，一怒之下暴吃各家辣椒 辣椒-2\n");
        break;
    case 38:
        printf("辣椒國舉辦十年一度的潑水節，各椒玩的不亦樂乎 水-3\n");
        break;
    case 39:
        printf("一名流浪的魔法椒用你的肥料進行了一個「煉金術實驗」，結果魔法失敗，肥料變成了一堆沒用的石頭 肥料-2\n");
        break;
    case 40:
        printf("椒安長太帥而被圍堵，卻因此被擠死，椒女到處搶王水救他 辣椒王水-1\n");
        break;
    case 41:
        printf("玉皇辣帝不開心，叫東海椒王給辣椒國降下旱災，水-2\n");
        break;
    case 42:
        printf("辣椒國水庫被青椒國拿青椒砲彈炸開，水-3\n");
        break;
    case 43:
        printf("辣椒國的辣椒今年心情不好，紛紛離家出走，辣椒-1\n");
        break;
    case 44:
        printf("辣椒國股市崩盤，發生辣椒經濟危機，許多人的辣椒賠光光，辣椒-2\n");
        break;
    case 45:
        printf("青椒國入侵，在辣椒國的辣椒田上噴基因突變藥水，把辣椒變成青椒，辣椒-2\n");
        break;
    case 46:
        printf("辣椒國的工程師花了兩個小時de一個根本不存在的bug，感覺椒體抱恙，辣椒王水-1\n");
        break;
    case 47:
        printf("香蕉國移民到辣椒國，帶來香蕉皮廚餘，辣椒國肥料工廠的貨源受到影響，神奇肥料-1\n");
        break;
    case 48:
        printf("青椒國在秘密培育青椒2.0，跑來辣椒國偷辣椒，辣椒-1\n");
        break;
    case 49:
        printf("椒迪生為了發明椒絲燈泡，消耗不少辣椒，辣椒-16\n");
        break;
    case 50:
        printf("孫椒山發起辣椒革命推翻滿青，死了不少忠勇辣椒，辣椒-2\n");
        break;
    case 51:
        printf("辣白喝醉想要撈月亮，摔進井裡死了，辣椒-1\n");
        break;
    case 52:
        printf("辣地公在尾牙喝嗨了，喝到渾身酒味，洗了三缸水才把自己洗乾淨，水-3\n");
        break;
    case 53:
        printf("辣椒國大將椒飛想在背上刺椒忠報國，實在是太痛了，辣椒-1\n");
        break;
    case 54:
        printf("椒里夫人因為醉心研究，廢寢忘食，拯救萬千辣椒，但自己卻積勞成疾，辣椒-1\n");
        break;
    case 55:
        printf("辣先生最近失戀很難過，誤把辣椒王水當忘情水喝，辣椒王水-1\n");
        break;
    case 56:
        printf("辣先生是一很孝順的辣椒國國民，他嚴格執行辣融讓椒的典故，所以有時候有一點辣椒緊缺，辣椒-1\n");
        break;
    case 57:
        printf("辣先生為了供養年邁母親，把他的兒子埋起來少一口人吃飯，他在刨坑的時候，發現一把金色斧頭，想把它賣掉換錢，結果這把斧頭是辣地公的寶貝，辣地公大怒，辣椒-4\n");
        break;
    default:
        printf("please wait for fashion boy...wait\n");
    }
    mciSendString("close mp3", NULL, 0, NULL);
}
void news(int n) //下方新聞
{
    switch(n)
    {
    case 1:
        printf("辣椒國的椒劇席捲全球，由潮天椒領銜主演的「還珠椒椒」現正熱播中，在全宇宙獲得億萬播放量，火爆程度無可比擬，連辣椒國國王也連發10條spicygram催更還珠椒椒。\n");
        break;
    case 2:
        printf("辣椒國頂級藝術人才潮天椒加入椒大成為特聘教授，讓椒大學術氛圍暴增，在全球椒Ｓ大學排名上飛升，不少辣椒國學子將椒大視為他們的夢想學府。\n");
        break;
    case 3:
        printf("韓流天團seventeen近期在辣椒國國內集體犯罪，他們在辣椒體育館舉辦萬人演唱會，擄獲不少辣椒心，成為芳心縱火犯，有觀眾在內場偶遇朝天椒，發現他蹦的比誰都high，這算不算一種夢幻聯動呢？\n");
        break;
    case 4:
        printf("潮天椒專訪在spicytube上收穫千萬觀看，知名主持人躺床小精靈藉由直擊人心的靈魂拷問，探究潮天椒的藝術根源，發現潮天椒的藝術源源不斷的靈感和他的繁殖能力一樣，源源不斷。\n");
        break;
    case 5:
        printf("辣椒國最大的椒導體企業椒積電驚傳多名天才工程師猝死，難道辣椒國也要被青椒邪惡資本主義計畫入侵了嗎？勞工人民的基本權益就這樣被摧毀嗎？\n");
        break;
    case 6:
        printf("辣椒國的手搖飲料發展蓬勃，「我來椒椒你」推出的紅椒汁成為spicygram拍照打卡的熱門單品。\n");
        break;
    case 7:
        printf("潮天椒除了作品充滿藝術氣息，顏值也是女媧的藝術作品，原本以為他是辣椒國演藝圈的顏值天花板，近期發現他又更上一層樓，粉絲紛紛跑到他的spicygram下留言「你到底用了什麼變潮的神奇小妙招」。\n");
        break;
    case 8:
        printf("辣椒國國民最近沉迷遛辣椒，因此帶動了周邊經濟，有不少品牌相繼推出精緻的椒包，方便民眾遛辣椒，但有不少無良商家，沒有給椒包預留呼吸孔，以至於憾事頻傳，不少辣椒死於劣質椒包。\n");
        break;
    case 9:
        printf("辣椒國國慶升旗典禮秒變蹦迪現場，辣椒國國王上台奪了麥克風開始freestyle。\n");
        break;
    case 10:
        printf("辣椒國應試答題小撇步:怎麼抽象怎麼答。\n");
        break;
    case 11:
        printf("椒大椒體科學樓總有神秘傳說，總有天才科學椒莫名其妙就消失了。\n");
        break;
    case 12:
        printf("辣椒電視台推出報款廚藝節目，節目評審椒登於錄製時示範了一款簡單好吃又高級的辣椒美食辣椒三明治，引起網友們爭相模仿、復刻。\n");
        break;
    case 13:
        printf("最近民眾總在大街上各種偶遇辣氏企業經理，難道他會分身術?還是有人在假扮辣氏企業經理魚目混珠?\n");
        break;
    case 14:
        printf(".速!辣椒國發生一起驚天人口失蹤案，辣椒國警方不知道在幹甚麼，案情進展毫無頭緒，希望所有涉案人員早日歸案。\n");
        break;
    case 15:
        printf("辣椒國郊區一棟神秘小木屋近日總發出怪聲，路過的民眾說感覺像是在撥放某種神祕的嗆辣歌。\n");
        break;
    case 16:
        printf("椒大的生命科學院近期發表最新學術論文，「辣椒和動物交友的可實行性之探究」，順利刊登在spicytrue期刊上，辣椒國國王在早朝時特意恭賀椒大生命科學院的傑出表現。\n");
        break;
    case 17:
        printf("呵呵，到底是甚麼樣的蠢材，一題都答不對，賺不到任何一點地下水也種不了辣椒，真是個窮鬼。\n");
        break;
    case 18:
        printf("辣椒國豪宅帝椒的居民反應半夜總會有各種奇奇怪怪的砰砰砰聲音，不少網友看到了紛紛跑來湊熱鬧「原來我跟富豪有一樣的煩惱」。\n");
        break;
    case 19:
        printf("有神秘人士爆料辣椒國早朝最近正在討論寵物權益法案，不知道辣椒國國王最後會如何定案。\n");
        break;
    case 20:
        printf("熱心網民辣先生在spicybook表示，他的孩子的歷史考卷竟然考辣椒生物知識：辣椒染疫之後會發生甚麼?\n");
        break;
    case 21:
        printf("辣椒國人民在皇宮前廣場上高喊「勝不椒，敗不餒」，為辣椒國加油打氣。\n");
        break;
    case 22:
        printf("椒大生命科學院辣椒學系聽說培育出一款爆炸辣的新型辣椒...叫甚麼...Y還是甚麼?\n");
        break;
    case 23:
        printf("本屆辣椒王大賽吸引了全國頂尖辣椒愛好者參賽，其中辣椒勇士椒森挑戰「娜迦毒蛇辣椒」成功，但因辣度過高被送往醫院，他臨走前笑說：「辣椒，是我的生命！」。\n");
        break;
    case 24:
        printf("辣椒國近期在討論少數椒族的相關權利政策，龍之氣息族椒正在積極參與政治改革，希望激發其他少數椒族的共同努力。\n");
        break;
    case 25:
        printf("由辣椒大學AI實驗室研製的機器辣椒，能自動種植、收割並加工辣椒，成為辣椒國農業新革命。據說它的開機問候語是：「今天，我的晶片比你還火辣！」。\n");
        break;
    case 26:
        printf("辣椒國國王今天心情很美麗，所以大赦那些頂撞辣椒國國王的政治罪犯。\n");
        break;
    case 27:
        printf("spicybook上的椒爸社區最近有一則熱門貼文：我的孩子們半夜去探險，結果錯把辣椒看成甜椒，當場慘叫，把旁邊農舍的雞都叫醒了。\n");
        break;
    case 28:
        printf("辣椒國椒文博物館推出特展，辣椒國國寶記載，向參展民眾介紹辣椒國各個族群的興衰以及文化特點。\n");
        break;
    case 29:
        printf("驚!一位人民在田裡發現一種罕見的彩虹辣椒，專家表示這可能是辣椒與外星基因交叉的產物，引發辣椒迷的收藏熱潮。\n");
        break;
    case 30:
        printf("潮天椒憑藉還珠椒椒斬獲全宇宙最佳視椒，為了向全宇宙推廣辣椒國文化，特別訂製一頂皇冠，引發多星球記者爭相拍照。\n");
        break;
    case 31:
        printf("知名主持椒躺床小精靈最近在spicygram宣布他破了椒氏世界紀錄，打造100平方公尺的床。\n");
        break;
    case 32:
        printf("辣椒國有一個神秘傳說，只要拿辣椒蜜去拜拜，辣地公會很開心。\n");
        break;
    case 33:
        printf("辣椒國國王在他的spicygram發表一篇熱門post，他投資一款21世紀最具淺力的RPG遊戲，希望藉此向全宇宙宣傳辣椒文化。\n");
        break;
    case 34:
        printf("椒綠沒有股份公司於2024年11月正式成立，四位主創人士於一年內紛紛成為科技新貴，實現一夜暴富的夢想。\n");
        break;
    case 35:
        printf("潮天椒加入椒大師資團隊後，成為最受歡迎的指導老師，他的實驗室每年招生時奇鬥被踏破門檻，辣椒國的學子們都想和她學習如何成為潮男的祕笈。\n");
        break;
    case 36:
        printf("siksok上辣椒歌的challenge成為時下年輕人的社交活動之一，諸如：APT、Hot、Chili……\n");
        break;
    case 37:
        printf("辣椒國時尚教主潮天椒在spicygram發表一則時尚預測，他說今年的流行顏色是辣椒紅，跟他新染的髮色一樣。\n");
        break;
    case 38:
        printf("地椒翻身，造成上千椒失蹤，目前辣椒消防隊、辣椒國軍、辣椒警方，都在努力搶救中。\n");
        break;
    case 39:
        printf("辣椒國的賭博天堂澳椒，翻新了他們的賭場，潮天椒專門跑一趟澳椒餐與賭場落成的剪綵儀式。\n");
        break;
    case 40:
        printf("辣椒國國王在spicygram上呼籲大家，香椒民眾也是辣椒國珍貴的一份子，希望大家冷靜下來，不然就開坦克給你們輾平。\n");
        break;
    case 41:
        printf("由椒大主導的登月計畫非常成功，帶回太空種植的辣椒，並將宇宙辣椒放在辣椒國官網售賣，受到辣椒國國民的瘋搶，一椒難求。\n");
        break;
    case 42:
        printf("辣椒國國王微服出巡，打扮成他的偶像，潮天椒，甚至被眼瞎的粉絲問可不可以合照簽名。\n");
        break;
    case 43:
        printf("辣椒國國教「辣教」，最近有一筆莫名其妙的進帳，所以在辣椒國多地建立椒堂。\n");
        break;
    case 44:
        printf("頂撞辣椒國國王的政治犯跑去監獄頂樓給國王下跪，但沒有人理他。\n");
        break;
    case 45:
        printf("辣椒國遭遇毒品入侵，椒麻迫害許多辣椒家庭，辣椒國國王派出椒則徐負責打擊毒販，杜絕椒麻。\n");
        break;
    case 46:
        printf("辣椒國警方近期頻繁到校園內宣導，不要抽電椒菸害人害己，也不知道學生們有沒有聽進去。\n");
        break;
    case 47:
        printf("辣椒國國王在spicygram上發布他的新年新希望：「一夜暴富」、「長生不老」。\n");
        break;
    case 48:
        printf("知名主持人躺床小精靈在spicygram發布一則躺床vlog，分享他的躺床好物推薦，潮男聞聲趕來，在留言區回應：「趕快給我送一整套同款，不然我就把你之前寫的椒情小說：霸道潮男愛上我，發出來跟我的粉絲分享」。\n");
        break;
    case 49:
        printf("最近辣椒國皇宮門口放了很多鮮花，因為躺床小精靈直播時不小心透漏，只要和辣椒國國王套椒情，辣椒國國王就會幫你的spicygram按讚。\n");
        break;
    case 50:
        printf("躺床小精靈跟著潮天椒的步伐，成為椒大的特聘教授，他甚至成立了躺床學院，也不知道這個學院在研究甚麼領域的知識。\n");
        break;
    case 51:
        printf("躺床小精靈的實驗室學生因為都沉迷躺床，所以他的學生論文一拖再拖，畢業也遙遙無期，基於現實考量，椒大的學生還是更喜歡去潮天椒的實驗室，畢竟應該可以畢業吧。\n");
        break;
    case 52:
        printf("網友在spicygram發出偶遇照，疑似偶遇潮天椒出現在椒綠沒有股份公司的企業大樓，難道潮天椒要簽下新的代言合約?他會帶領椒綠沒有股份公司走向新的高度嗎?\n");
        break;
    case 53:
        printf("躺床小精靈最近收了一個青椒國的學生，由於實驗室空間不夠，辣椒國學生躺雙人床，青椒國學生只能躺單人床，引發眾議。\n");
        break;
    }
}

void show_bag(int water, int fat, int med){
    printf("water : %d\n",water);
    printf("fat : %d\n",fat);
    printf("med : %d\n",med);
    in_enter();
}

void show_info(){
    printf("水:種植辣椒不可或缺的資源，種1根辣椒需要澆1杯水，可收成3根辣椒\n");
    printf("神奇肥料：種辣椒時如果有放神奇肥料，會有種出高級辣椒的可能，高級辣椒有非常高的椒質，可以抵好幾根普通辣椒\n");
    printf("辣椒王水：辣椒國風雲莫測，一旦觸發隨機事件，有可能給你帶來致命一擊，辣椒王水可以給你一次復活的機會\n");
    in_enter();
}
void casino_reminder(int x, int y, int *king,int temp){
    gotoxy(x, y);
    printf("你現在擁有 %d 根辣椒，累積獲得 %d 杯水，是否繼續賭?\n",king[1],king[2]-temp);
}
void show_pass(){
    system("cls");
    mciSendString("close mp3", NULL, 0, NULL);
    mciSendString("open \"king.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    print_temple(45,5);
    print_win(5,18);
    print_win(120,18);
    print_small_chilli(5,5);
    print_small_chilli(20,5);
    print_small_chilli(5,30);
    print_small_chilli(20,30);
    print_small_chilli(120,5);
    print_small_chilli(135,5);
    print_small_chilli(120,30);
    print_small_chilli(135,30);
}
void show_lose(){
    mciSendString("close mp3", NULL, 0, NULL);
    mciSendString("open \"fail.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    for(int i=0;i<4;i++){
        print_lose(50,10*i);
    }
}
