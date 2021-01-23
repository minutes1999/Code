#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//空地0 墙壁1 箱子3 目的地 4 人5 箱子+目的地7 人＋目的地9
int map[8][8]={
    1,1,1,1,1,1,1,1,
    1,1,4,3,0,1,1,1,
    1,1,1,0,0,1,1,1,
    1,1,1,0,0,0,1,1,
    1,1,0,5,1,0,1,1,
    1,1,1,0,0,0,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1
};

void show(){
    for (int i = 0; i<8;i++){
        for(int j = 0; j <8;j++){
            if(map[i][j]==1){
                printf("#");
            }
            else if(map[i][j]==0){
                printf(" ");
            }
            else if (map[i][j]==3)
            {
                printf("@");
            }
            else if (map[i][j]==4)
            {
                printf("$");
            }
            else if (map[i][j]==5 || map[i][j]==9)
            {
                printf("o");
            }
            else if (map[i][j]==7)
            {
                printf("X");
            }
            // printf("%d",map[i][j]);
        }
        printf ("\n");
    }
}

//玩游戏
int i=0,j=0;
void playgame(){
    //首先找人，遍历出人位置
    for (i=0;i<8;i++){
        for (j=0;j<8;j++)
        {
            if(map[i][j]==5||map[i][j]==9){
                break;
            }
        }
        if(map[i][j]==5||map[i][j]==9){
                break;
            }
    }
    // printf("%d,%d",i,j);

    char ch;//捕获按键
    fflush(stdin);//清空键盘缓冲区
    ch = getch();
    switch (ch)
    {
    case 'W':
    case 'w':
        /* code */
        //空地上走
        if(map[i-1][j]==0||map[i-1][j]==4){
            map[i][j]-=5;
            map[i-1][j]+=5;
        }
        //推箱子
        if(map[i-1][j]==3||map[i-1][j]==7){
            if(map[i-2][j]==0||map[i-2][j]==4){
                map[i][j]-=5;
                map[i-1][j]+=2;
                map[i-2][j]+=3;
            }
        }


        break;
    case 'A':
    case 'a':
        //空地上走
        if(map[i][j-1]==0||map[i][j-1]==4){
            map[i][j]-=5;
            map[i][j-1]+=5;
        }
        //推箱子
        if(map[i][j-1]==3||map[i][j-1]==7){
            if(map[i][j-2]==0||map[i][j-2]==4){
                map[i][j]-=5;
                map[i][j-1]+=2;
                map[i][j-2]+=3;
            }
        }

        break;
    case 'S':
    case 's':
        //空地上走
        if(map[i+1][j]==0||map[i+1][j]==4){
            map[i][j]-=5;
            map[i+1][j]+=5;
        }
        //推箱子
        if(map[i+1][j]==3||map[i+1][j]==7){
            if(map[i+2][j]==0||map[i+2][j]==4){
                map[i][j]-=5;
                map[i+1][j]+=2;
                map[i+2][j]+=3;
            }
        }

        break;
    case 'D':
    case 'd':
        //空地上走
        if(map[i][j+1]==0||map[i][j+1]==4){
            map[i][j]-=5;
            map[i][j+1]+=5;
        }
        //推箱子
        if(map[i][j+1]==3||map[i][j+1]==7){
            if(map[i][j+2]==0||map[i][j+2]==4){
                map[i][j]-=5;
                map[i][j+1]+=2;
                map[i][j+2]+=3;
            }
        }

        break;
    default:
        break;
    }
}

int main(){
    while(1){
        printf("大呆呆宝贝第一个玩哦！\n");
        printf("o=人；#=墙壁；$=目的地；@=箱子\n");
        show();
        //捕捉屏幕按键
        playgame();

        //屏幕刷新
        system("cls");
    } 
    return 0;
}