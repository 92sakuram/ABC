#include <stdio.h>
//変換したい数、もとの底、変換したい底、を入力してください。 
char baseArr[] = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

int Bekijo(int x,int y){
	int a,k;
	a=1;
	for(k=0;k<y;k++){
		a=a*x;
	};
	return a;
};

int baseValue(char x){
	for(int i=0;i<36;i++){
		if(baseArr[i]==x){
			return i;
		};
	};
	return -1;
};


int main(void) {
	char inputNumber[100],outputNumber[100];
	int Number,baseAfter,baseBefore;
	scanf("%s",&inputNumber);
	scanf("%d",&baseBefore);
	scanf("%d",&baseAfter);
	Number = 0;
	printf("%s(%d)\n↓\n",inputNumber,baseBefore);
	for(int i=0;i<100;i++){
		if(baseValue(inputNumber[i])==-1){
			break;
		};
		Number = Number*baseBefore + (baseValue(inputNumber[i]));
	};
	for(int i;Number!=0;i++){
		if(i>=100){
			printf("結果が長すぎて表示できません。");
			exit;
		};
		outputNumber[i] = baseArr[Number % baseAfter];
		printf("%c",outputNumber[i]);
		Number = Number / baseAfter;
	};
	printf("(%d)",baseAfter);
	/*-----------------------------------------------------------------
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
	-----------------------------------------------------------------*/
};