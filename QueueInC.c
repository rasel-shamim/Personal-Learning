#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX = 100006


char queue[100006];
int front_pointer = 0;
int back_pointer = -1;
int count=0;
int pos = 0;

//////We can store maximum 100005 items in this queue/////
char pop(){
	char x = queue[front_pointer];
	front_pointer++;
	count--;
	return x;
}
int empty(){
	if(count==0)
		return 1;
	else
		return 0;
}
int size(){
	return count;
}
char front(){
	return queue[front_pointer];
}
int full(){
	if(count==100006){
		return 1;
	}
	else
		return 0;
}
void push_back(char x){
	if(!full()){
		queue[++back_pointer] = x;
		count++;
	}
}
void printQueue(){
	for(int i=front_pointer;i<=back_pointer+1;i++){
		printf("%c",queue[i]);
	}
	printf("\n");
}

int main(){
	push_back('A');
	push_back('B');
	push_back('C');
	printf("---------------------State of Queue till now---------\n");
	printQueue();
	push_back('D');
	printf("---------------------State of Queue after inserting \'D\' in the Queue---\n");
	printQueue();
	pop();
	printf("---------------------State of Queue after poping first element---\n");
	printQueue();
	return 0;
}
