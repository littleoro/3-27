#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>

//int main() {
//	int i = 0;
//	for (i = 0; i < 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
// 
// 
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	for (i = b; i > 1; i--) {
//		if(a % i == 0 && b%i==0) {
//			printf("%d", i);
//		}
//	}
//	return 0;
//}


//int main() {
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	
//	goto flag;
//	return 0;
//}





//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请老婆注意！你的电脑将在一分钟后关机，如果输入：“你是猪”就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "你是猪") == 0) {
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("别以为我不知道你没好好输入指定字符哦\n");
//		goto again;
//	}
//	return 0;
//}


//int main() {
//	char arr1[20] = { 0 };
//	char arr2[10] = "hahaha";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//int main() {
//	char arr1[] = "hello bit";
//	char* pa = arr1;
//	memset(arr1, 'x', 5);
//	printf("%s\n",arr1);
//
//	return 0;
//
//
//}

//int MAX(int x, int y) {
//	if (x <=y) {
//		x = y;
//	}
//	return x;
//}
//
//
//int main() {
//	int a = 5;
//	int b = 100;
//	int c = MAX(a, b);
//	printf("%d\n", c);
//	printf("%d", a);
//	printf("%d", b);
//	return 0;
//}

void swap(int* pa, int* pb) {
	int c = 0;
	c = *pa;
	*pa = *pb;
*pb = c;
}
int main() {
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	swap(pa, pb);
	printf("%d  %d", a, b);
}