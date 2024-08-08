// Created by M.Mahadi on 2024-08-08 Time:04-15-46
#include <stdio.h>
int main(){

    int array[10][9] ={
        //0  1   2   3   4   5   6   7   8
        {10, 11, 12, 13, 14, 15, 16, 17, 18}, //0
        {10, 11, 12, 13, 14, 15, 16, 17, 18}, //1
        {20, 21, 22, 23, 24, 25, 26, 27, 28}, //2
        {30, 31, 32, 33, 34, 35, 36, 37, 38}, //3 
        {40, 41, 42, 43, 44, 45, 46, 47, 48}, //4 
        {50, 51, 52, 53, 54, 55, 56, 57, 58}, //5 
        {60, 61, 62, 63, 64, 65, 66, 67, 68}, //6 
        {70, 71, 72, 73, 74, 75, 76, 77, 78}, //7 
        {80, 81, 82, 83, 84, 85, 86, 87, 88}, //8 
        {90, 91, 92, 93, 94, 95, 96, 97, 98}  //9
    };
    // 1 : access cell;
    // 2 : access row;
    // 3 : access colum
    int opt; scanf("%d",&opt);
    if (opt == 1)
    {
        // 1 : access cell;
        int cal,row; scanf("%d %d",&cal,&row);
        printf("%d ",array[row][cal]);
    }
    if (opt == 2)
    {
        // 2 : access row;
        int row; scanf("%d",&row);
        for (int i = 0; i < 9; i++)
        {
            printf("%d ",array[row][i]);
        }
        
    }
    if (opt == 3)
    {
        // 3 : access colum
        int colum; scanf("%d",&colum);
        for (int i = 0; i < 10; i++)
        {
            printf("%d \n",array[i][colum]);
        }
        
    }
    
    
    return 0;
}