#include <stdio.h>
 
int Bekijo(int x,int y){
	int a,k;
	a=1;
	for(k=0;k<y;k++){
		a=a*x;
	};
	return a;
};


int main(void) {
	int inputNumber,outputNumber,Number,baseAfter,baseBefore;
//	char baseArr[36] = {0,1,2,3,4,5,6,7,8,9,"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"}
	scanf("%d",&inputNumber);
	scanf("%d",&baseBefore);
	scanf("%d",&baseAfter);
	Number = 0;
	for(int i=0;inputNumber!=0;i++){
		Number = Number + ((inputNumber % 10)*(Bekijo(baseBefore,i)));
		inputNumber = inputNumber / 10;
	};
	outputNumber = 0;
	for(int j=0;Number!=0;j++){
		outputNumber = outputNumber + ((Number % baseAfter)*(Bekijo(10,j)));
		Number = Number / baseAfter;
	};
	printf("%d\n",outputNumber);
}