//pokethon phase 1 game by team wckd_cr3w
//name: MOKSHA
#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds)
        ;
}
string strToUpper(string su)
{
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    return su;
}


bool chakra[7]={0,0,0,0,0,0,0};
string pack[4]={"ALGEBRA","\0","\0","\0"};
bool fTime=true;
bool coachtalk=false;
bool medab=false;
bool book=0;
int lov=0;
bool medLib=false,poem=false;
bool stopPorn=false;
bool thirdPageGot=false;
int medLevel=0,ball=0;

void printFile1()
{
cout<<endl<<"O seeker of truth! Here's an an ancient secret...";
cout<<endl<<"Man thou art not flesh but consciousness...";
cout<<endl<<"A long long time ago, consciousness descended from the causal plane of ideas";
cout<<endl<<"to the astral plane of forms created by sheer thought. And then, into flesh";
cout<<endl<<"through the brain and spine, the tree of life. The astral You connected to the";
cout<<endl<<"physical body through seven swirling vortices of energy called chakras... ";
cout<<endl<<"Reverse this descend and you are sure to attain Godhood. As your consciousness ";
cout<<endl<<"ascends through the seven chakras the quality of your thinking and needs ";
cout<<endl<<"change... Starting from the lowest the chakras are:";
cout<<endl;
cout<<endl<<"* MULADHARA : Sexuality, Rootedness...";
cout<<endl;
cout<<endl<<"* SVADHISTHANA : Imagination, Appreciation of art, Creativity";
cout<<endl;
cout<<endl<<"* MANIPURA : Discipline";
cout<<endl;
cout<<endl<<"* ANAHATA : Love";
cout<<endl;
cout<<endl<<"* VISHUDDHI : Communication";
cout<<endl;
cout<<endl<<"* AJNA : The third eye... The nature of Reality change";
cout<<endl;
cout<<endl<<"* SAHASRARA : You attain nirvana";
}
void printFile2()
{
cout<<endl<<"You read about an ancient meditation technique in this page..";
cout<<endl<<"You have acquired the ability to meditate:"; medab=true;
}
void printFile3()
{
cout<<endl<<"Hiranmayena patrena satya-syapi-hitam mukham,";
cout<<endl<<"tattvam pusanna-pavrnu satya �dharmaya drstave.";
cout<<endl;
cout<<endl<<"Truth lies concealed by golden vessel.";
cout<<endl<<"Do thou o Sun!";
cout<<endl<<"Open the entrance of that cover";
cout<<endl<<"So as the Truth  you so concealed";
cout<<endl<<"be visible to me,";
cout<<endl<<"a devotee, who by nature is truthful,";
cout<<endl<<"in the light of your illuminating Grace.";
}
void sheet(int n)
{
    switch(n)
    {
        case 1: printFile1();break;
        case 2: printFile2();break;
        case 3: printFile3();break;
        default: ;
    }



}
void BackPack()
{   string choice;
    int page;
    for(int i=0;pack[i]!="\0";i++)
        cout<<endl<<pack[i];
    cout<<"choice?:";
    cin>>choice;
    if(strToUpper(choice)=="VEDAS")
    {                   cout<<endl<<"page 1";
                      cout<<endl<<"page 2";
                      cout<<endl<<"page 3";
                      bool repeat=false;
                      do{
                      cout<<endl<<"enter the page number:";
                      cin>>page;
                      if(page==3 && chakra[5]==true)
                                        {sheet(3);thirdPageGot=true;}
                    else if(page==3 && chakra[5]==false)
                                        cout<<endl<<" ~blank page~   ";
                      else if(page<=2&&page>=1)
                      {
                                sheet(page);

                      }else  {cout<<endl<<" Invalid Choice, pls try again.."; repeat=true;}
                    }while(repeat);
    }
    else cout<<endl<<"You read a beautiful romantic poem..";
    getche();
}
void story();
void porn();
void afterToilet();
void Lecture2();
void discipline();
void library();
void GodLevel();
void propose();
void eye3();
void ground();
void RJ();
void portal();
int main()
{
        system("CLS");
        ball=0;medab=false;coachtalk=false,medLib=0;poem=0;
        char choice;
        if(fTime==true)
        {
            cout<<endl<<"~~MOKSHA~~This game may haunt you for multiple lives. Do not tarry when you fall, Get up and try again!";
            cout<<"~~On screen it will be printed :Onions! You won the game!~~";
             cout<<endl<<endl<<"~~~You will able to access menu just after you LEVEL up by typing m/M ~~~";
             cout<<endl<<"..................................................";
            cout<<endl<<"..................................................";
            cout<<endl<<"............U.U...............U.U.................";
            cout<<endl<<"............U.U...............U.U.................";
            cout<<endl<<"............U.U...............U.U.................";
            cout<<endl<<"............U.U...............U.U.................";
            cout<<endl<<"............U.U...............U.U.................";
            cout<<endl<<"............U.U...............U.U.................";
            cout<<endl<<"............U.U...............U.U.................";
            cout<<endl<<"............U.U...............U.U.................";
            cout<<endl<<"............U.UUUUUUUUUUUUUUUUU.U.................";
            cout<<endl<<"............UUUUUUUUUUUUUUUUUUUUU.................";
            cout<<endl<<"..................................................";
            cout<<endl<<"..................................................";
            fTime=false;
        }
        cout<<endl<<"Do you wish to Continue?(Y/N):";
        cin>>choice;
        switch(toupper(choice))
        {
            case 'Y': story();break;
            case 'N': cout<<endl<<"World waits you to SAVE it. Hope you will return, Bye Comrade...";
                    exit(0);
            default: cout<<endl<<" Invalid Choice, Closing the game";cout<<endl<<"World waits you to SAVE it. Hope you will return, Bye Comrade...";
                    exit(0);
        }



    return 0;
}
void menu()
{
    getche();system("CLS");
    int choice;
    cout<<endl<<"1.BackPack";
    cout<<endl<<"2.Restart the Game";
    cout<<endl<<"3.Quit the Game";
    cout<<endl<<"4.Close the menu and return to the game.";
    cin>>choice;
    switch(choice)
    {
        case 1: BackPack(); menu();break;
        case 2: getche();system("CLS");getche();main(); break;
        case 3:     cout<<endl<<"World waits you to SAVE it. Hope you will return, Bye Comrade...";
                    exit(0);
        case 4: getche();system("CLS");return;
        default: cout<<endl<<" Invalid Choice, Closing the menu"; return ;
    }
}
void story()
{
    cout<<endl<<"You find yourself in a lecture in college";
    delay(1);
    cout<<endl<<"The lecture is boring... You are at the back, so you pull out your phone.";
    delay(1);
    cout<<endl<<"You start by reading some celebrity gossip, proceed to a bikini photoshoot and before you know it, end up watching porn";
    delay(1);
    porn();
}

void porn()
{   bool repeat;
    char choice;

    do{

        cout<<endl<<"Do you want to go to toilet to get some relief from your boiling emotions?(Y/N):";
        cin>>choice;
        switch(toupper(choice))
        {
            case 'Y': cout<<endl<<"Phew! You blew off some steam in there!";afterToilet();break;
            case 'N':   cout<<endl<<"You are in the afternoon lecture... Guess what? This one's boring too.";
                        cout<<endl<<"You are in your old seat.";
                        cout<<endl<<"You still cannot concentrate on lecture. So you watch porn again.";
                        cout<<endl<<"Your life is full of the lies of porn";
                        cout<<"You are depressed.GAME OVER.";getche();system("CLS");getche();main();
            default: cout<<endl<<" Invalid Choice, pls try again.."; repeat=true;
        }
    }while(repeat);


}
void afterToilet()
{
    bool repeat;
    char choice;
    cout<<endl<<"You are in the afternoon lecture... Guess what? This one's boring too.";
    cout<<endl<<"You are in your old seat.";
    cout<< "Do still feel like watching porn?(y/n)";
    cin>>choice;
        switch(toupper(choice))
        {
            case 'N': cout<<endl<<"";Lecture2();break;
            case 'Y': cout<<endl<<"You still cannot concentrate on lecture.";
                        cout<<endl<<"Your life is full of the lies of porn";
                        cout<<"You are depressed.GAME OVER.";getche();system("CLS");getche();main();
            default: cout<<endl<<" Invalid Choice, pls try again.."; repeat=true;

    }while(repeat);

}

void Lecture2()
{
    char choice;bool repeat;
    char men;
        getche();system("CLS");
        cout<<endl<<"Congrats!! You have Leveled up!"<<endl<<"The Kundalini has risen from the Muladhara ";chakra[0]=true;
            cout<<endl<<"-------------------------------------------------type anything";
            cin>>men;
            if(toupper(men)=='M') menu();
    cout<<endl<<"Now you are able to listen to lectures!!";
    cout<<endl<<"Sir:\"TAKE VOL.I\"";
    delay(1);
    cout<<endl<<endl<<"The guy to your right says hi. His name is Bob. He asks you if you were actually watching porn last lecture.";
    do{
        cout<<endl<<"What do you reply?(Y/N)";
    cin>>choice;
    switch(toupper(choice))
        {
            case 'Y': cout<<endl<<"\"You know its harmful for you right?\", he asks.";break;
            case 'N': cout<<endl<<"\"Everybody pretends it's kind of normal\"";
                        cout<<endl<<"\"Your life is full of the lies of porn\"";break;
            default: cout<<endl<<" Invalid Choice, pls try again.."; repeat=true;
        }

    }while(repeat);
    string name;
    cout<<endl<<"\"you reply: Okay now i feel really bad \"";
    cout<<endl<<"BOB\": Don't. But be informed.\n   May be you will quit it if you fall in love, 'cause Porn Kills Love. \"";
    cout<<endl<<endl<<"Sir:\"TAKE VOL.I\""<<endl;
    cout<<endl<<"Class ends... As you leave you and Bob meet three of your other classmates: Richie, Katherine and Judy. After the";
    cout<<endl<<"conversation endas and you prepare to leave, Bob asks,\"So which one is it?\" \"TAKE VOL.I\" You hear the professor shout from another hall...";
    cout<<endl<<"Which one is what?, You reply.";
    cout<<endl<<"You really seemed interested in one of the girls...";
    getche();system("CLS");
    cout<<endl<<"Sir:\"TAKE VOL.I\"";
    cout<<endl<<"Type the name of the Girl:";
    cin>>name;
    if(strToUpper(name)=="KAT" || strToUpper(name)=="KATHERINE" || strToUpper(name)=="JUDY" )
        {
            if(strToUpper(name)=="KAT" || strToUpper(name)=="KATHERINE")
            {
            lov=1;
            cout<<endl<<"bob: hey may be u should go and talk to her";
            cout<<endl<<"~~You talk to her again. She likes poems. You accompany her to the library.";
            library();
            }

            else
            {
            cout<<"Bob says: She doesn't really seem yor type";
            cout<<endl<<"You reply:Okay... I'm going to the ground";lov=2;
            ground();
            discipline();

            }

        }
    else
        {       lov=0;
                cout<<"You said that you don't like any girl...";getche();

                ground();
                discipline();
        }



}
void ground()
{

      bool repeat=false;

    int choice;
    cout<<endl<<"Reached football Ground..";
    cout<<endl<<"1. Talk to coach";
    cout<<endl<<"2. Talk to your buddy";
    do{
    cout<<endl<<"choose an option:";
    cin>>choice;
    switch(choice)
    {
        case 1: if(coachtalk==false)   { cout<<endl<<"~~you joined the football team~~";coachtalk=true;}
                else{
                    cout<<endl<<"~~you completed a practice session";ball++;}
                    return;
        case 2: cout<<endl<<"buddy: Yo bro.. Do wanna try a new drug? Got it when i was in GALACTOS club";
                cout<<endl<<"you got addicted to the Drug.. CANNOT SAVE THE WORLD..GAME OVER";getche();main();
        default:cout<<endl<<" Invalid Choice, pls try again.."; repeat=true;
    }
    }while(repeat);
    getche();

}

void library()
{
    int choice;
    bool repeat;
    cout<<"entered library";
    cout<<"You have to issue a book. your backpack can handle only 2 books.";
    cout<<"but you already have an ALGEBRA book in your backpack"<<endl<<"the available books are:";
    do{
    cout<<endl<<"1.ROMANTICPOEMS"<<endl<<"2.VEDAS"<<"which among the following will u choose?(number)";
    cin>>choice;
    switch(choice)
    {
        case 1: pack[1]="ROMANTICPOEMS";book=0;repeat=false;break;
        case 2: pack[1]="VEDAS";chakra[1]=true;book=1;repeat=false;break;
        default: cout<<endl<<" Invalid Choice, pls try again.."; repeat=true;

    }
    }while(repeat);

    char men;
    getche();system("CLS");
        cout<<endl<<"Congrats!! You have Leveled up!"<<endl<<"The Kundalini has risen from the Svadhisthana ";chakra[1]=true;
            cout<<endl<<"-------------------------------------------------type anything";
            cin>>men;
            if(toupper(men)=='M') menu();


    cout<<endl<<"After leaving library.. you planned to go for football";
     ground();
     char ch;
     if(medab==true)
        {cout<<endl<<"~~It's night..Do you want to meditate?";
            cin>>ch;}
    switch(toupper(ch))
    {
        case 'Y': medLevel++;medLib=true;break;
        default: break;
    }
     discipline();


}
void discipline()
{
    if(lov==1)
        {if(book==0) {cout<<endl<<"You copied a poem from the book you took. Gave it to Katherine Saying you wrote it..";poem=0;}
        else if(medLib==true) {cout<<endl<<"You gave katherine a poem which you wrote after meditation";poem=1;}getche();
        }
    int day;
    for(day=1;day<=3;day++)
    {   getche();system("CLS");
        cout<<endl<<"Another morning..";
        if(medab==true)
            {   char ch;
                cout<<"~~do you want to meditate?~~";
                cin>>ch;
                if(toupper(ch)=='Y') medLevel++;
                else {cout<<endl<<"You decided to go to the ground";ground();}
            }
        else
        {   cout<<endl<<"You decided to go to the ground";ground();}

        cout<<"going to menu:";getche();menu();
    }
    if(medLevel+ball>=4)
    {
        char men;
        getche();system("CLS");
        cout<<endl<<"Congrats!! You have Leveled up!"<<endl<<"The Kundalini has risen from the Manipura ";chakra[2]=true;
            cout<<endl<<"-------------------------------------------------type anything";
            cin>>men;
            if(toupper(men)=='M') menu();

    }getche();
    propose();



}


bool puzzle()
{
    string code;
    cout<<endl<<"You realised it is some kind of code";
    cout<<endl<<"-- ---....-- ---....-- ---....-- ---....-- ---";
    cout<<endl<<endl<<"Write the message in the code: ";
    cin>>code;
    if(strToUpper(code)=="OHM")
        {  cout<<endl<<"you got the code right"; return true; }
    return false;

}

void propose()
{
    getche();system("CLS");
    if (chakra[2]==false  || lov==0){ cout<<endl<<"You wanted a relationship... but You didn't propose.. This lead to depression.GAME OVER";getche();main();}
    if(chakra[2]==true && lov==2 ){ cout<<endl<<"Judy said no, RJ selection stood and lost... leads to depression.GAME OVER.";getche();main();}
    if(chakra[2]==true && lov==1 )
        {
            if(poem==0){cout<<endl<<"YOU proposed to Kat and she said No...  You stood for RJ selection and lost... leads to depression.GAME OVER";getche();main();}
            else
                {
                cout<<endl<<"Katherine became your girlfriend.";
               char men;

                cout<<endl<<"Congrats!! You have Leveled up!"<<endl<<"The Kundalini has risen from the Anahata ";chakra[3]=true;
                cout<<endl<<"-------------------------------------------------type anything";
                cin>>men;
                if(toupper(men)=='M') menu();

                cout<<endl<<"You are in the mess. Knowing you dislike mess food, She put maggi for you in oven which takes time, meanwhile she tells you about selection for college Radio Jockey... When you go back to get the maggi, you find a green cube in its place... You tell her someone must have stolen it";
                cout<<endl<<endl<<"Since Kat asked, You stand for RJ selection..."<<endl<<"In the test You got a puzzle";
                if(puzzle())
                    RJ();
                else
                    {cout<<"You started feeling inferior because you lost. You broke up with Kat. You got depressed and COMMITED SUICIDE...";getche();main();}

                }
        }


}
void RJ()
{       char choice;
        char men;
    getche();system("CLS");
        cout<<endl<<"Congrats!! You have Leveled up!"<<endl<<"The Kundalini has risen from the Vishudhdhi ";chakra[4]=true;
            cout<<endl<<"-------------------------------------------------type anything";
            cin>>men;
            if(toupper(men)=='M') menu();

    string code;
    cout<<endl<<"you got selected as the RJ of your Campus";
    cout<<endl<<"Katherine comes and gives you a kiss and says I am leaving before anyone comes";

    bool repeat=false;
    do{
         cout<<endl<<"Do you wish to meditate tonight?(Y/N)";
    cin>>choice;
    switch(toupper(choice))
        {
            case 'Y': cout<<endl<<"\"Meditation Starts\", ";if(medLevel>=4){eye3();}break;
            case 'N': {cout<<endl<<"\"cannot proceed GAME OVER..\"";getche();main();}
            default: cout<<endl<<" Invalid Choice, pls try again.."; repeat=true;
        }

    }while(repeat);
}

void eye3()
{
        chakra[5]=true;
        char men;
        getche();system("CLS");
        cout<<endl<<"Congrats!! You have leveled up. You opened your THIRD EYE. ";
            cout<<endl<<"-------------------------------------------------type anything";
            cin>>men;
            if(toupper(men)=='M') menu();
        cout<<endl<<"Now you thoughts and astral forms appear in your vision with great";
        cout<<endl<<" concentration you come back to your normal senses";
        getche();
        if(thirdPageGot==true)
            GodLevel();
        else {cout<<endl<<"You died GAME OVER";getche();main();}



}

void GodLevel()
{   char men;
    system("CLS");
    cout<<endl<<"Congrats!! You have increased by a level GOD LEVEL. ";
            cout<<endl<<"-------------------------------------------------type anything";
            cin>>men;
            if(toupper(men)=='M') menu();
    cout<<endl<<"You feel yourself easing out from your physical body� You are leaving it behind forever... ";
    cout<<endl<<"It had deteriorated due to poisoning� However, having mastered the seven chakras, ";
    cout<<endl<<"you become Shiva�";
    cout<<endl<<"In the causal plane, you come across the ideas of four realms�";
    cout<<endl<<endl<<"Choose the realm into which to project your conciousness";
    string realm[4]={"SWARGA","PURGATORY","GALACTOS","HADES"};
    string choice;
    cout<<endl<<"Which realm will you visit ?";
    for(int i=0;i<4;i++)
    {   cout<<endl<<realm[i];
    }
    cout<<endl<<endl<<"type the name:";
    cin>>choice;
    if(strToUpper(choice)=="GALACTOS")
            portal();
    else if(choice==realm[0])
        {
                cout<<endl<<"You enjoy all heavenly pleasures for millions of eons and being pleased dissolve into the Great Nothingness�";
                getche();main();}
    else if(choice==realm[1])
        {
                cout<<endl<<"You help other Good souls cross the ocean of Samsara. Finally, you disappear into the void.";
                getche();main();}
    else if(choice==realm[3])
        {
                cout<<endl<<"You undergo all suffering conceivable� However the distinction of pain and pleasure do not matter anymore to you� You dissolve into the void.";
                getche();main();}
}

void portal()
{
    string final;
    do{
    getche();system("CLS");
    cout<<endl<<"You acquire a form and descend into the physical realm of galactos.";
    cout<<endl<<"You find a Golden Luminous vessel";
    cout<<endl<<"The sphere splits open and reveals a packet of Maggi... It dawns upon you that the microwave in your college mess is a portal through spacetime";
    cout<<endl<<"You sense some alien beings approach... You turn invisible... They are carrying a small green cube...";
    cout<<endl<<"You start reading into their thought forms... Their race was mining in the Kshirsagar galaxy...";
    cout<<endl<<"This lead to the production of a highly poisonous radioactive substance Hala Hala... It was concentrated into the form of a green";
    cout<<endl<<"cube... Now they put this cube into the newly discovered portal and leave before it closes to avoid exposure";
    cout<<endl<<"What do you will?";
    cin>>final;

    }while(strToUpper(final)!="STOP");
    cout<<endl<<"You stop the portal from closing and swallow the cube...";
    cout<<endl<<"Using your Shakti stop it at your throat and become Neelkant";
    cout<<endl<<"You prevented your previous death and the whole living universe is saved!";
    cout<<endl<<endl<<"~~Onions! You have won the Game~~";getche();
    exit(0);
}
