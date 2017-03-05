#include <stdio.h>
 
int main(){
    int arr[7][7] = {{0,},
                     {0, },
                     {0, },
                     {1,1,1,1,1,1,1},
                     {0, },
                     {0, },
                     {0, }
                    };
    int y,x;
    int x_tmp, y_tmp;    
    for(int i =0; i <3; i++){
        scanf("%d %d", &y, &x);
        y -=1; x-=1;
        
        arr[y][x] = 2;
    }
    //i,j,k,l,m,n,o,p 
    for(int l = 0; l <7; l++){
    if(arr[3][l]== 2){
    for(int i = 0; i <7; i++){        //첫번 째 2위치 확인 
        if(arr[3][i] == 2){
            for(int j = 0; j<7; j++){
                if(j == 3);//2값은 안 바꿈. 
                else if(arr[j][i] == 2){ //2를 만난 경우 
                    for(int k = 0; k < 7; k++){
                        if(k == i);
                        else if(arr[j][k] == 2){
                            x_tmp = k; y_tmp = j;
                        } 
                        else
                         arr[j][k] = 1;
                    }
                    for(int k = 0; k < 7; k++){
                        if(k == j);
                        else if(arr[k][i] == 2){
                            x_tmp = k; y_tmp = j;
                        } 
                        else
                         arr[k][i] = 1;
                    }        
                }
                else//2를 만나서 세로 
                    arr[j][i] = 1;
            }
        }
    }
    
    
    for(int i = 0; i < 7; i++){
        if(arr[y_tmp][i] == 2){
            for(int j = 0; j < 7; j++){
                if(j == y_tmp);
                else if(arr[j][i] == 2);
                else
                    arr[j][i] = 1;
            }
            for(int j = 0; j < 7; j++){
                if(j == i);
                else if(arr[y_tmp][j] == 2);
                else
                    arr[y_tmp][j] = 1;
            }
        }
        else if(arr[i][x_tmp] == 2){
            for(int j = 0; j < 7; j++){
                if(j == i);
                else if(arr[j][x_tmp] == 2);
                else
                    arr[j][x_tmp] = 1;
            }
            for(int j = 0; j < 7; j++){
                if(j == x_tmp);
                else if(arr[i][j] == 2);
                else
                    arr[i][j] = 1;
            }
        }
        
    }
}
    
    
    }
    
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}
