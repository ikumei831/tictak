#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


char ox[3][3];
int val[3][3];
int flag;
int t;
int col;
int row;
int main(int argc, char** argv) {
	
    while(1){
    	
    	
        scanf("%d",&flag);
        flag%=9;
        col=(flag-1)/3;
	    row=(flag-1)%3;
	    
    	if(ox[col][row]!='o'&&ox[col][row]!='x'){
    		if(t%2==0){
				ox[col][row]='o';
				val[col][row]++;
			}
			else {
				ox[col][row]='x';
				val[col][row]--;
			}
		}
		else{
			printf("repeat\n\n");
			t--;
		}
		for(int y=0;y<3;y++){
			printf("%c|%c|%c\n",ox[2-y][0],ox[2-y][1],ox[2-y][2]);
			if(y<2)printf("-----\n");
		}
		
		t++;
		if(t>=9){
			printf("tie\n");
			break;
		}
		else{
	
			for(int x=0;x<3;x++){
				if(val[x][0]+val[x][1]+val[x][2]==3){
					printf("o wins\n");
					return 0 ;
				}
				else if(val[x][0]+val[x][1]+val[x][2]==-3){
					printf("x wins\n");
					return 0 ;
				}
			}
			for(int y=0;y<3;y++){
				if(val[0][y]+val[1][y]+val[2][y]==3){
					printf("o wins\n");
					return 0 ;
				}
				else if(val[0][y]+val[1][y]+val[2][y]==-3){
					printf("x wins\n");
					return 0 ;
				}
			
			}
			if(val[0][0]+val[1][1]+val[2][2]==3){
				printf("o wins\n");
				break;	
			}
			else if(val[0][0]+val[1][1]+val[2][2]==-3){
				printf("x wins\n");
				break;	
			}
			if(val[2][0]+val[1][1]+val[0][2]==3){
				printf("o wins\n");
				break;	
			}
			else if(val[2][0]+val[1][1]+val[0][2]==-3){
				printf("x wins\n");
				break;	
			}
			
		}
	}
	
	

}
