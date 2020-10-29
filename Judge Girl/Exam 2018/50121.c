#include<stdio.h>
int main(){
    int map[500][500] = {};
    int n,m;
    int x,y,e;
    int stone,stx,sty,stm,ins;
    scanf("%d %d %d %d %d %d",&n,&m,&x,&y,&e,&stone);
    int tep = x;
    x = y;
    y = tep;
    map[x][y] = e;
    // printf("%d",map[x][y]);
    for(int i = 0; i < stone; i++){
        scanf("%d%d%d",&stx,&sty,&stm);
        map[sty][stx] = stm;
    }
    // map[x+1][y] = 9;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         printf("%d",map[j][i]);
    //     }
    //     printf("\n");
    // }
    // printf("ss%d",map[x+1][y]);
    while(scanf("%d",&ins) != EOF){
        int sum = 0, cnt = 0;
        if(ins == 0){
            for(int i = 0; i < n; i++){
                printf("%d",map[0][i]);
                for(int j = 1; j < m; j++){
                    printf(" %d",map[j][i]);
                }
                printf("\n");
            }
        }
        if(ins == 1){
            for(int i = x+1; i < m; i++){
                // printf("yo%d ",map[i][y]);
                if(map[i][y] == 0){
                    break;
                }
                else{
                    sum += map[i][y];
                    cnt++;
                }
            }
            // printf("yo%d",sum);
            if(sum <= map[x][y] && cnt < m-x-1){
                map[x][y] -= sum;
                for(int i = x+cnt+1; i > x; i--){
                    map[i][y] = map[i-1][y];
                }
                map[x][y] = 0;
                x++;
            }
        }
        if(ins == 2){
            for(int i = y+1; i < n; i++){
                if(map[x][i] == 0){
                    break;
                }
                else{
                    sum += map[x][i];
                    cnt++;
                }
            }
            if(sum <= map[x][y] && cnt < n-y-1){
                map[x][y] -= sum;
                for(int i = y+cnt+1; i > y; i--){
                    map[x][i] = map[x][i-1];
                }
                map[x][y] = 0;
                y++;
            }
        }
        if(ins == 3){
            for(int i = x-1; i >= 0; i--){
                if(map[i][y] == 0){
                    break;
                }
                else{
                    sum += map[i][y];
                    cnt++;
                }
            }
            if(sum <= map[x][y] && cnt < x){
                map[x][y] -= sum;
                for(int i = x-cnt-1; i < x; i++){
                    map[i][y] = map[i+1][y];
                }
                map[x][y] = 0;
                x--;
            }
        }
        if(ins == 4){
            for(int i = y-1; i >= 0; i--){
                if(map[x][i] == 0){
                    break;
                }
                else{
                    sum += map[x][i];
                    cnt++;
                }
            }
            if(sum <= map[x][y] && cnt < y){
                map[x][y] -= sum;
                for(int i = y-cnt-1; i < y; i++){
                    map[x][i] = map[x][i+1];
                }
                map[x][y] = 0;
                y--;
            }
        }
        // for(int i = 0; i < n; i++){
        //         for(int j = 0; j < m; j++){
        //             printf("%d",map[j][i]);
        //         }
        //         printf("\n");
        //     }
    }
}
