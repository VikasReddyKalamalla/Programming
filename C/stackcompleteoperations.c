#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;
void push(int value){
if(top>=MAX_SIZE-1){
printf("Stack Overflow\n");
return;
}
stack[++top]=value;
}
int pop(){
if(top<0){
printf("Stack Underflow");
return -1;
}
return stack[top--];
}
void display(){
if(top<0){
printf("Stack is empty\n");
return;
}
printf("Stack elements:\n");
for(int i=top;i>=0;i--){
printf("%d\n",stack[i]);
}
}
int main(){
push(10);
push(20);
push(30);
display();
printf("Popped:%d\n",pop());
display();
return 0;
}