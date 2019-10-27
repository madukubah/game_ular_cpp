#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <sys/timeb.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
int tinggi=25, lebar=60;
int batux=4, batuy=3;
int ix=1, iy=1, foodx, foody, hapusx, hapusy;
int ix1=59, iy1=1, hapusx1, hapusy1;
int ekorx[100], ekory[100];
int ekorx1[100], ekory1[100];
int nekor=3;
int nekor1=3;
int score = 0;
int score1 = 0;
enum arah {STOP=0, LEFT, RIGHT, UP, DOWN};
arah dir=RIGHT;
enum aruh {STiP=0, LiFT, RIGHi, iP, DiWN};
aruh dur=LiFT;

bool gameover=false;


void cek(){
    /*for(int i=0; i<nekor; i++){
        if((ix==ekorx[i] && iy==ekory[i])||(ix1==ekorx1[i] && iy1==ekory1[i]))
            gameover= true;
        }*/
    if(ix==lebar)
        ix=1;
    if(ix==0)
        ix=lebar-1;
    if(iy==tinggi)
        iy=1;
    if(iy==0)
        iy=tinggi-1;

    if(ix1==lebar)
        ix1=1;
    if(ix1==0)
        ix1=lebar-1;
    if(iy1==tinggi)
        iy1=1;
    if(iy1==0)
        iy1=tinggi-1;

}

void gotoxy(int x, int y)
{
 COORD pos = {x, y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void makanan(){
    bool mak=true;
    while(mak){
    foodx= rand()% lebar;
    foody= rand() % tinggi;
    if(foodx==0 || foody==0)
        mak=true;
    else
        mak=false;
    }
}

void batu(){
    int pbx=3, pby=3;
    for(int i=pbx; i<pbx+batux; i++){
        for(int j=pby; j<pby+batuy; j++){
            gotoxy(i,j);cout<<char(219);
            if((ix==i && iy==j)||(ix1==i && iy1==j))
                gameover=true;
            if(foodx==i && foody==j)
                makanan();
        }
    }
}
void batu1(){
    int pbx1=54, pby1=3;
    for(int a=pbx1; a<pbx1+batux; a++){
        for(int b=pby1; b<pby1+batuy; b++){
            gotoxy(a,b);cout<<char(219);
            if((ix==a && iy==b)||(ix1==a && iy1==b))
                gameover=true;
            if(foodx==a && foody==b)
                makanan();
        }
    }
}
void batu2(){
    int pbx2=54, pby2=20;
    for(int i=pbx2; i<pbx2+batux; i++){
        for(int j=pby2; j<pby2+batuy; j++){
            gotoxy(i,j);cout<<char(219);
            if((ix==i && iy==j)||(ix1==i && iy1==j))
                gameover=true;
            if(foodx==i && foody==j)
                makanan();
        }
    }
}
void batu3(){
    int pbx3=3, pby3=20;
    for(int i=pbx3; i<pbx3+batux; i++){
        for(int j=pby3; j<pby3+batuy; j++){
            gotoxy(i,j);cout<<char(219);
            if((ix==i && iy==j)||(ix1==i && iy1==j))
                gameover=true;
            if(foodx==i && foody==j)
                makanan();
        }
    }
}
void batu4(){
    int pbx4=8, pby4=8;
    for(int i=pbx4; i<pbx4+2; i++){
        for(int j=pby4; j<pby4+10; j++){
            gotoxy(i,j);cout<<char(219);
            if((ix==i && iy==j)||(ix1==i && iy1==j))
                gameover=true;
            if(foodx==i && foody==j)
                makanan();
        }
    }
}
void batu5(){
    int pbx5=51, pby5=8;
    for(int i=pbx5; i<pbx5+2; i++){
        for(int j=pby5; j<pby5+10; j++){
            gotoxy(i,j);cout<<char(219);
            if((ix==i && iy==j)||(ix1==i && iy1==j))
                gameover=true;
            if(foodx==i && foody==j)
                makanan();
        }
    }
}
void batu6(){
    int pbx6=51, pby6=8;
    for(int i=pbx6; i<pbx6+2; i++){
        for(int j=pby6; j<pby6+10; j++){
            gotoxy(i,j);cout<<char(219);
            if((ix==i && iy==j)||(ix1==i && iy1==j))
                gameover=true;
            if(foodx==i && foody==j)
                makanan();
        }
    }
}
void batu7(){
    int pbx7=27, pby7=10;
    for(int i=pbx7; i<pbx7+5; i++){
        for(int j=pby7; j<pby7+4; j++){
            gotoxy(i,j);cout<<char(219);
            if((ix==i && iy==j)||(ix1==i && iy1==j))
                gameover=true;
            if(foodx==i && foody==j)
                makanan();
        }
    }
}
 void batuu(){
    batu();
    batu1();
    batu2();
    batu3();
    batu4();
    batu5();
    batu7();
 }

void tulis(){
    gotoxy(65,1);cout<<"score p1 = "<<score;
    gotoxy(65,2);cout<<"panjang p1 = "<<nekor;
    gotoxy(65,4);cout<<"score p2 = "<<score1;
    gotoxy(65,5);cout<<"panjang p2 = "<<nekor1;
}
bool dimakan (){
    if((ix==foodx && iy==foody))
        return true;
    else
        return false;

}
bool dimakan1 (){
    if((ix1==foodx && iy1==foody))
        return true;
    else
        return false;

}

void hapus1(){
    hapusx1=ekorx1[nekor1-1];
    hapusy1= ekory1[nekor1-1];
    for(int i=nekor1-1; i>0; i--){
        ekorx1[i]=ekorx1[i-1];
        ekory1[i]=ekory1[i-1];
    }
    ekorx1[0]=ix1;
    ekory1[0]=iy1;

}
void hapus(){
    hapusx=ekorx[nekor-1];
    hapusy= ekory[nekor-1];
    for(int i=nekor-1; i>0; i--){
        ekorx[i]=ekorx[i-1];
        ekory[i]=ekory[i-1];
    }
    ekorx[0]=ix;
    ekory[0]=iy;

}
void tampil(){

    gotoxy(hapusx, hapusy); cout<<" ";
    gotoxy(hapusx1, hapusy1); cout<<" ";
    for(int i=0; i<nekor; i++){
        gotoxy(ekorx[i],ekory[i]);cout<<"+";
        }
    for(int i=0; i<nekor1; i++){
        gotoxy(ekorx1[i],ekory1[i]);cout<<"o";
        }
    gotoxy(foodx, foody);cout<<"X";
    gotoxy(ix,iy); cout<<"0";
    gotoxy(ix1,iy1); cout<<"G";
    batuu();

}


void input (){
if(_kbhit()){

    switch(_getch()){
        case 'a':
            dir= LEFT;
            break;
        case 'd':
            dir= RIGHT;
            break;
        case 'w':
            dir= UP;
            break;
        case 's':
            dir= DOWN;
            break;
        case 'x':
            system("pause");
            break;
        case 'j':
            dur= LiFT;
            break;
        case 'l':
            dur= RIGHi;
            break;
        case 'i':
            dur= iP;
            break;
        case 'k':
            dur= DiWN;
            break;

    }
}
}

void logic1(){
    switch(dur){
        case LiFT:
            ix1--;
            break;
        case RIGHi:
            ix1++;
            break;
        case iP:
            iy1--;
            break;
        case DiWN:
            iy1++;
            break;
    }

}

void logic(){
    switch(dir){
        case LEFT:
            ix--;
            break;
        case RIGHT:
            ix++;
            break;
        case UP:
            iy--;
            break;
        case DOWN:
            iy++;
            break;
    }

}
void batas(){

for(int j=0; j<=tinggi; j+= tinggi){
    for(int i=0; i<=lebar; i++){
        gotoxy(i,j);cout<<char(219);
    }
}
for(int j=0; j<=lebar; j+= lebar){
    for(int i=0; i<=tinggi; i++){
        gotoxy(j,i);cout<<char(219);
    }
}

}


void inisialisasi(){

    batas();
    makanan();
    tulis();
}

int main(){
    inisialisasi();
    while(!gameover){
            hapus();
            hapus1();

                input();



            logic();
            logic1();

            cek();
            tampil();



            if(dimakan()){
               makanan();
               nekor++;
               score+=10;
               tulis();

            }
            if(dimakan1()){
               makanan();
               nekor1++;
               score1+=10;
               tulis();

            }

            Sleep(150);
            }

}
