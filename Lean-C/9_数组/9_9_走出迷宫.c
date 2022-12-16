//  二维数组的应用：走出迷宫

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 6
#define COLUMN 10

char grid[ROW][COLUMN]={
            {'#','#','#','#','#','#','#','#','#','#'},
            {'#','0','#',' ',' ',' ',' ','#','#','#'},
            {'#',' ','#',' ','#','#',' ','#','#','#'},
            {'#',' ','#',' ','#','#',' ','#','#','#'},
            {'#',' ',' ',' ','#','#',' ','#','#','#'},
            {'#','#','#','#','#','#',' ','#','#','#'}
        };

// 小人（0）的行坐标
int currentRowIndex = 1;
// 小人（0）的列坐标
int currentColumnIndex = 1;

void showMap();
char receiveDirection();
void moveDirection(char direction);

void moveLeft();
void moveRight();
void moveUp();
void moveDown();
void move_9_9(int nextRow, nextColum);
void exitGame();
void successGame();

//int main(int argc, const char *argv[]) {
int main_9_9(int argc, const char *argv[]) {
//    int row=6;
//    int colum=10;
    // Error : Variable-sized object may not be initialized
//    char grid[row][colum]={
//        {'#','#','#','#','#','#','#','#','#','#'},
//        {'#','0','#',' ',' ',' ',' ','#','#','#'},
//        {'#',' ','#',' ','#','#',' ','#','#','#'},
//        {'#',' ','#',' ','#','#',' ','#','#','#'},
//        {'#',' ',' ',' ','#','#',' ','#','#','#'},
//        {'#','#','#','#','#','#',' ','#','#','#'}
//    };

//    showMap();
//    char direction = receiveDirection();
//    moveDirection(direction);
    
    while (1) {
        system("clear");
        showMap();
        if(currentRowIndex == 0 || currentRowIndex == (ROW-1) || currentColumnIndex == 0 || currentColumnIndex == (COLUMN-1)){
            successGame();
            break;
        }
        
        char direction = receiveDirection();
        moveDirection(direction);
    }
    return 0;
}

// 显示map
void showMap(){
    for (int i = 0; i<ROW; i++) {
        for(int j = 0; j<COLUMN;j++){
            printf("%c",grid[i][j]);
        }
        printf("\n");
    }
}

// 接收输入的方向
char receiveDirection(){
    printf("输入：w 上 s下 a左 d右。q结束。");
    char dir = 'a';
    rewind(stdin);
    scanf("%c",&dir);
    return dir;
}

void moveDirection(char direction){
    switch(direction){
        case 'a':
        case 'A':
            moveLeft();
            break;
            
        case 'd':
        case 'D':
            moveRight();
            break;
            
        case 'w':
        case 'W':
            moveUp();
            break;
            
        case 's':
        case 'S':
            moveDown();
            showMap();
            break;
            
        case 'q':
        case 'Q':
            exitGame();
            break;
            
    }
}

void moveLeft(){
    int nextRow = currentRowIndex;
    int nextColum = currentColumnIndex - 1;
    move_9_9(nextRow, nextColum);
}
void moveRight(){
    int nextRow = currentRowIndex;
    int nextColum = currentColumnIndex + 1;
    move_9_9(nextRow, nextColum);
}
void moveUp(){
    int nextRow = currentRowIndex - 1;
    int nextColum = currentColumnIndex;
    move_9_9(nextRow, nextColum);
}
//void moveDown(){
//    // 判断小人下边的格子类型。墙：不移动，路：移动
//    // 如何知道小人下边的格子类型？知道小人的坐标，就知道小人下边的格子坐标。
//
//    int nextRow = currentRowIndex + 1;
//    int nextColum = currentColumnIndex;
//
//    if(nextRow >= ROW){
//        return;
//    }
//
//
//    if(grid[nextRow][nextColum]==' '){
//        grid[nextRow][nextColum]='0';
//        grid[currentRowIndex][currentColumnIndex]=' ';
//
//        currentRowIndex = nextRow;
//        currentColumnIndex = nextColum;
//    }
//}

void moveDown(){
    int nextRow = currentRowIndex + 1;
    int nextColum = currentColumnIndex;
    move_9_9(nextRow, nextColum);
}

void move_9_9(int nextRow, nextColum){
    if(nextRow >= ROW || nextRow < 0 || nextColum >= COLUMN && nextColum < 0){
        return;
    }
    
    if(grid[nextRow][nextColum]==' '){
        grid[nextRow][nextColum]='0';
        grid[currentRowIndex][currentColumnIndex]=' ';
        
        currentRowIndex = nextRow;
        currentColumnIndex = nextColum;
    }
}

void exitGame(){
    printf("exit the game\n");
}

void successGame(){
    printf("Sucess\n");
}


/**
 走出迷宫
 
 分析：数据是一个表格，即二维数组
 
 1、将每1个格子的类型保存起来。
   只有保存起来，才能知道下一个是什么东西。
   用二维数组，保存地图上每一个格子的类型。
 
 2、游戏的流程
    1）、第一步：根据二维数组，显示游戏地图。
    while(1){
    2）、第二步：接受输入的前进方向。      <------|
    3）、第三步：根据输入，移动小人          --------->
 
 3、 如何让游戏看着是连续的？
    step 1 ： clear 输入内容。因为clear和重新输出很快，所以看起来是连续的。
    #include <stdlib.h>
        system("clear");
 
    说明：Xcode的Output不支持clear : TERM environment variable not set.
    https://blog.csdn.net/weixin_44147924/article/details/128301384
    
    step 2: Products 的exec 可执行文件，用terminal打开。
 }
 */
