/***********************************
 * *   볼링 점수 계산 프로그램  **
 * *   작성자 : 전선진          **
 * *   작성일 : 2016년 4월 30일 **
 * ********************************/
#include <stdio.h>
int main(void){
	int i=0,j=0,k=0,f=0,l=0,cnt=1,t=1,sum=0;
	while(t<10){
		printf("%d번째 프레임 1번째 처리 핀 수 : ",t);
		scanf("%d",&i);
		if(i<=9){
			if(j+f==10){
				cnt++;
				if(cnt>=3){cnt=3;}
				else cnt=cnt;
				sum+=cnt*i;
				printf("**** 현재까지 점수 : %d\n",sum);}
			else{
				cnt=1;
				sum+=i;
				printf("**** 현재까지 점수 : %d\n",sum);}
			printf("%d번째 프레임 2번째 처리 핀 수 : ",t);
			scanf("%d",&k);
			if(j==10){
				sum+=k;}
			if(i+k<10){
				sum+=k;
				printf("**** 현재까지 점수 : %d\n",sum);}
			else if(i+k==10){
				sum+=k;
				printf("**** 현재까지 점수 : %d\n",sum);}
			j=i,f=k,k=0;}
		else if(i==10){
			if(j+f==10){
				cnt++;
				if(cnt>=3){cnt=3;}
				else cnt=cnt;
				sum+=cnt*i;
				printf("**** 현재까지 점수 : %d\n",sum);}
			else{
				cnt=1;
				sum+=i;
				printf("**** 현재까지 점수 : %d\n",sum);}
			j=i,f=k, k=0;}
		t++;
	}
	if(t==10){
		printf("%d번째 프레임 1번째 처리 핀 수 : ",t);
		scanf("%d",&i);
		if(i<=9){
			if(j+f==10){
				cnt++;
				if(cnt>=3){cnt=3;}
				else cnt=cnt;
				sum+=cnt*i;
				printf("**** 현재까지 점수 : %d\n",sum);}
			else{
				cnt=1;
				sum+=i;
				printf("**** 현재까지 점수: %d\n",sum);
			}
			printf("%d번째 프레임 2번째 처리 핀 수 : ",t);
			scanf("%d",&k);
			if(j==10){
				sum+=k;}
			if(i+k<10){
				sum+=k;
				printf("**** 최종 점수 : %d\n",sum);}
			else if (i+k==10){
				sum+=k;
				printf("**** 현재까지 점수 : %d\n",sum);
				printf("%d번째 프레임 3번째 처리 핀 수 : ", l);
				scanf("%d",&l);
				sum+=l;
				printf("**** 최종 점수 : %d\n",sum);}}
		if(i==10){
			if(j+k==10){
				cnt++;
				if(cnt>=3){cnt=3;}
				else cnt=cnt;
				sum+=cnt*i;
				printf("**** 현재까지 점수 : %d\n",sum);}
			else{
				cnt=1;
				sum+=i;
				printf("**** 현재까지 점수 : %d\n",sum);}
			printf("%d번째 프레임 2번째 핀 수 : ",t);
			scanf("%d",&k);

			if(k==10){
				cnt++;
				if(cnt>=2){cnt=2;}
				else cnt=cnt;
				sum+=cnt*k;
				printf("**** 현재까지 점수 : %d\n",sum);}
			else {
				cnt=1;
				sum+=k;
				printf("**** 현재까지 점수 : %d\n",sum);}
			printf("%d번째 프레임 3번째 핀 수 : ",t);
			scanf("%d",&l);
			cnt=1;
			sum+=cnt*l;
			printf("**** 최종 점수 : %d\n",sum);}}
	return 0;
}

