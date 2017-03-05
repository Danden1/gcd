#include <stdio.h>

int main(){
	int map[10][10];
	int x = 1, y =1;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	map[1][1] = 9;
	while(1){
		if(map[y][x+1] != 1){
			x += 1;
			if(map[y][x] == 2){
				map[y][x] = 9;
				break;
			}
			map[y][x] = 9;	
		}
		else if(map[y+1][x] != 1){
			y += 1;
			if(map[y][x] == 2){
				map[y][x] = 9;
				break;
			}
			map[y][x] = 9;	
		}
		else 
			break;
	}
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
}
