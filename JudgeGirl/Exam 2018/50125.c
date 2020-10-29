#include <stdio.h>
//#include "findLength.h"
#define MAXN 256

int findLength (int array[][256], int N, int r, int c, int dr, int dc){
    if(r != -2 && c!= -2 && dr!= -2&&dc!= -2){

        int array2[N+2][N+2];
        for(int i = 0;i < N+2;i ++){
            for(int j = 0 ; j < N+2;j++){
                if(i == 0||j==0||i==N+1||j==N+1){
                    array2[i][j] = -1;
                }
                else{
                    array2[i][j] = array[i-1][j-1];
                }
            }
        }

        int tempmax = 0;
        int temp = 0;
        int flag1 = 1;
        int flag2 = 1;
        int tempx= r,tempy = c;
        if(dr == 1 && dc == 0){
            while(flag1){
                if(array2[tempx+1][tempy+1]!=-1){
                    if(array2[tempx+1][tempy+1]==1){
                        temp++;
                        if(temp>tempmax){
                            tempmax = temp;
                        }
                    }
                    else{
                        temp = 0;
                    }
                    tempx += dr;
                    tempy+= dc;
                }
                else{
                    flag1 = 0;
                    break;
                }
            }
        }
        else if(dr == 1 && dc == 1){
            while(flag1){
                if(array2[tempx+1][tempy+1]!=-1){
                    if(array2[tempx+1][tempy+1]==1){
                        temp++;
                        if(temp>tempmax){
                            tempmax = temp;
                        }
                    }
                    else{
                        temp = 0;
                    }
                    tempx += dr;
                    tempy+= dc;
                }
                else{
                    flag1 = 0;
                    break;
                }
            }
        }
        else if(dr == 0 && dc == 1){
            while(flag1){
                if(array2[tempx+1][tempy+1]!=-1){
                    if(array2[tempx+1][tempy+1]==1){
                        temp++;
                        if(temp>tempmax){
                            tempmax = temp;
                        }
                    }
                    else{
                        temp = 0;
                    }
                    tempx += dr;
                    tempy+= dc;
                }
                else{
                    flag1 = 0;
                    break;
                }
            }
        }
        else if(dr == -1 && dc == 1){
            while(flag1){
                if(array2[tempx+1][tempy+1]!=-1){
                    if(array2[tempx+1][tempy+1]==1){
                        temp++;
                        if(temp>tempmax){
                            tempmax = temp;
                        }
                    }
                    else{
                        temp = 0;
                    }
                    tempx += dr;
                    tempy+= dc;
                }
                else{
                    flag1 = 0;
                    break;
                }
            }
        }

        return tempmax;
    }
    else{
            int array2[N+2][N+2];
        for(int i = 0;i < N+2;i ++){
            for(int j = 0 ; j < N+2;j++){
                if(i == 0||j==0||i==N+1||j==N+1){
                    array2[i][j] = -1;
                }
                else{
                    array2[i][j] = array[i-1][j-1];
                }
            }
        }
        int tempmax = 0;
        int flag3;
        for(int i = 0;i<N;i++){
            int temp = 0;

            for(int j = 0;j < N;j++){
                if(array[i][j] ==1){
                    temp++;
                    if(temp > tempmax){
                        tempmax = temp;
                        flag3 = 1;
                    }
                }
                else{
                    temp  = 0;
                }
            }
        }

        for(int i = 0;i<N;i++){
            int temp = 0;
            for(int j = 0;j < N;j++){
                if(array[j][i] ==1){
                    temp++;
                    if(temp > tempmax){
                        tempmax = temp;
                        flag3 = 2;
                    }
                }
                else{
                    temp  = 0;
                }
            }
        }

        for(int i = 0;i < N;i ++){
            int j = 0;
            int temp = 0;
            int ii = i;
            int jj = j;
            while(array2[ii+1][jj+1]!=-1){
                if(array2[ii+1][jj+1]==1){
                    temp++;
                    if(temp>tempmax){
                        tempmax = temp;
                        flag3 = 3;
                    }
                }
                else{
                    temp = 0;
                }
                ii++;
                jj++;
            }
        }
        for(int i = 0;i < N;i ++){
            int j = 0;
            int temp = 0;
            int ii = i;
            int jj = j;
            while(array2[jj+1][ii+1]!=-1){
                if(array2[jj+1][ii+1]==1){
                    temp++;
                    if(temp>tempmax){
                        tempmax = temp;
                        flag3 = 4;
                    }
                }
                else{
                    temp = 0;
                }
                ii++;
                jj++;
            }
        }
        for(int i = N-1;i >=0;i --){
            int j = 0;
            int temp = 0;
            int ii = i;
            int jj = j;
            while(array2[jj+1][ii+1]!=-1){
                if(array2[jj+1][ii+1]==1){
                    temp++;
                    if(temp>tempmax){
                        tempmax = temp;
                        flag3 = 5;
                    }
                }
                else{
                    temp = 0;
                }
                ii--;
                jj++;
            }
        }
        for(int j = 0;j <N;j ++){
            int i = N-1;
            int temp = 0;
            int ii = i;
            int jj = j;
            while(array2[jj+1][ii+1]!=-1){
                if(array2[jj+1][ii+1]==1){
                    temp++;
                    if(temp>tempmax){
                        tempmax = temp;
                        flag3 = 6;
                    }
                }
                else{
                    temp = 0;
                }
                ii--;
                jj++;
            }
        }
        //printf("%d\n",flag3 );
        return tempmax;

    }
}
