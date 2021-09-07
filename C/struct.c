#include <stdio.h>
#include <string.h>


//----------------------------------

struct book {
	char title[50];
	char author[30];
	int page;
	int price;
};

void struct_practice() {
	struct book b;
	gets_s(b.title);
	gets_s(b.author);

	scanf_s("%d", &b.page);
	scanf_s("%d", &b.price);
	printf("%s %s %d %d", b.title, b.author, b.page, b.price);
}
//---------------------------------------------------------
struct score {
	char name[20];
	int kor;
	int eng;
	int math;
	int total;
	double avg;
};


void struct_arr() {

	struct score s[3] = {
		{"홍길동", 95,87,97},
		{"박기동", 99, 89, 80},
		{"강철수", 88, 77, 66}
	};
	for (int i = 0; i < 3; i++) {
		s[i].total = s[i].eng + s[i].kor + s[i].math;
		s[i].avg = (double)s[i].total / 3.0;
		printf("%s %d %d %d %d %.2lf\n", s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].avg);
	}
}
//----------------------------------
struct member {
	char name[10];
	char gender;
	int age;
	char level[20];
};

void struct_find() {
	struct member mem[5] = {
		{"홍길동", 'm', 49, "사장"},
		{"김성훈", 'm', 50, "무직"},
		{"김도균", 'm', 50, "백수"},
		{"신태윤", 'm', 50, "사람"},
		{"오유찬", 'm', 40, "백수2"}
	};
	for (int i = 0; i < 5; i++) {
		if (mem[i].age >= 40 && mem[i].gender == 'm') {
			printf("%s\n", mem[i].name);
		}
	}
	char name[10];
	gets_s(name);
	for (int i = 0; i < 5; i++) {
		if (!strcmp(mem[i].name, name)) printf("있습니다");
	}
}
//---------------------------------------

typedef struct student {
	int num;
	char name[20];
	double grade;
}STU;

int equal(STU a, STU b) {
	if (a.num == b.num) return 1;
	return 0;
}

void struct_func() {
	//struct student st;
	STU a = { 1, "hong", 3.8 };
	STU b = { 2, "kim", 4.0 };

	if (equal(a, b)) printf("is same"); // student의 num을 비교
	else printf("is differ");
}

//----------------------

int pequal(STU* a, STU* b) {
	if (a->num == b->num) return 1;
	return 0;
}

void struct_funcP() {
	STU a = { 1, "hong", 3.8 };
	STU b = { 2, "kim", 4.0 };

	if (pequal(&a, &b)) printf("is same"); // student의 num을 비교
	else printf("is differ");
}

//----------------------

struct vector {
	float x;
	float y;
};

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector sum = { a.x + b.x, a.y + b.y };
	return sum;
}

void struct_calc() {
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("%f %f", sum.x, sum.y);
}

//----------------------

int main() {
	struct_calc();
	return 0;
}
