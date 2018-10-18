#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//宏定义（不能加分号;）
#define MAXSIZE 2932
#define pi 3.1415926

//条件编译命令
#ifdef DEBUG
// DEBUG
[#else

			]
#endif 


struct date {
	int year;
	int month;
	int day;
};


struct student{
	char no[7];
	char name[10];
	char sex;
	struct date birthday;
} suc = { "s001","jack",'M',{ 2018,9,15 } };

typedef int INTEGER; //类型别名
typedef float FLOAT10[10];

typedef struct {
	char name[10];
	char sex;
	char id[18];
	char addr[100];
} PERSON; //结构体类型别名定义

typedef int *j_i; //指针型别名（自定义类型名称建议全大写）
typedef char *P_C[10];

int main(void) {
	struct student stu,*pstu = &stu;
	FILE *file; //文件类型指针
	char *fileName = "D:\\Information\\Device\\PC\\WindowsFile\\桌面\\testfile";
	char *mode = "wb+";//二进制读写
	if ((file = fopen(fileName, mode)) == NULL) {
		printf("%s\n", "文件打开失败！");
		exit(1);//错误退出
	}
	
	fwrite(&suc, sizeof(struct student), 1, file);
	fclose(file);

	if ((file = fopen(fileName, mode)) == NULL) {
		printf("%s\n", "文件打开失败！");
		exit(1);//错误退出
	}

	fread(&suc, sizeof(struct student), 1, file);
	printf("%-7s%10s%c",pstu->no,pstu->name,pstu->sex);

	system("pause");
	return 0;
}

#undef PI

//
int test7(void) {
	int i, j, sum1=0, sum2 = 0;
	int a[][3] = { 1,2,3,4,5,6,0,0,0 };
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 2;j++) {
			if (i == j) {
				sum1 = sum1 + a[i][j];
			}
			if (i + j == 2) {
				sum2 = sum2 + a[i][j];
			}
		}
	}
	printf("%d\n%d", sum1, sum2);

	printf("\n");
	return 0;
}

//排序
int test6(void) {
	int x[3][3] = {1,3,5,2,4,6,7,9,8},i,j,tem;
	for (i = 0; i < 2; i++) {
		for (j = i + 1;j < 3;j++) {
			if (x[i][i] < x[j][j]) {
				tem = x[i][i];
				x[i][i] = x[j][j];
				x[j][j] = tem;
			}
		}
	}
	for (i = 0;i < 3;i++) {
		printf("%d", x[0][i]);
	}

	printf("\n");
	return 0;
}

//去重
int test5(void) {
	int a[7] = { 3,3,9,7,5,7,9 };
	int n = 0, i, j, k;
	for (i = 0;i < 7 - n;i++) {
		for (j = i + 1;j < 7 - n;j++) {
			if (a[j] == a[i]) {
				n++;
				for (k = j;k < 7 - n;k++) {
					a[k] = a[k + 1];
				}
			}
		}
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}

int test4(void) {
	int a[6] = { 10,31,34,1,9,8 }, i, j;

	for (i = 1; i <= 6 - 1;i++) {
		for (j = 0;j <= 6 - 1 - i;j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0;i <= 5;i++) {
		printf("%d ", a[i]);
	}

	return 0;
}

int test3(void) {
	int a, i, m;
	for (a = 1;a <= 1000;a++) {
		m = 0;
		//找出它的因子数的和
		for (i = 1;i <= a / 2;i++) {
			if (!(a%i)) {
				m += i;
			}
		}
		//如果它因子数的和等于它本身，则输出这个数
		if (m == a) {
			printf("%d\n", a);
		}
	}

	return 0;
}

int test1(void) {
	int a = 3, b = 2, c = 1, d;
	switch (a = 3)
	{
	case 1:d = 1;break;
	case 2:d = 2;break;
	case 3:d = 3; break;
	default:d = 4;
	}

	printf("d=%d", d);
	return 0;
}

int test2(void) {
	int count = 0;
	char ch;

	while ((ch = getchar()) != 10) {
		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
			count++;
		}
	}

	printf("有%d个字母", count);

	return 0;
}