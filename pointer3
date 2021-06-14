#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

struct me {
	char name[10];
	int age;
};

struct point {
	int x;
	int y;
};

int main() {
	char trash;/*
	struct student s1 = { 5, "chan", 100.0 };
	printf("%d %s %lf\n\n", s1.number, s1.name, s1.grade);

	struct student s2;
	s2.number = 5;
	strcpy_s(s2.name, "chanwoo");
	s2.grade = 3.1415927585;
	printf("%d %s %lf\n\n", s2.number, s2.name, s2.grade);

	struct student s;
	printf("학번 : ");
	scanf_s("%d", &s.number);
	printf("이름 : ");
	trash = getchar();
	gets_s(s.name);
	printf("학점 : ");
	scanf_s("%lf", &s.grade);
	printf("%d %s %lf\n\n", s.number, s.name, s.grade);*/

	/*struct point p1 = { 10, 10 };
	struct point p2 = { 10, 10 };*/

	//if(p1 == p2) error

	/*if (p1.x == p2.y) {
		printf("same\n\n");
	}*/

	/*struct student list[3];

	for (int i = 0; i < 3; i++) {
		printf("학번 : ");
		scanf_s("%d", &list[i].number);
		printf("이름 : ");
		trash = getchar();
		gets_s(list[i].name);
		printf("학점 : ");
		scanf_s("%lf", &list[i].grade);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("%d %s %lf\n\n", list[i].number, list[i].name, list[i].grade);
	}*/

	/*struct student sp = { 24, "name", 4.3 };
	struct student* p;

	p = &sp;

	printf("%d %s %lf\n\n", (*p).number, (*p).name, (*p).grade);
	printf("%d %s %lf\n\n", p -> number, p -> name, p -> grade);*/

	struct me chan {"찬우", 17};
	struct me* p;
	p = &chan;
	printf("%s %d\n", chan.name, chan.age);

	printf("\n이름 : ");
	gets_s(p->name);
	printf("나이 : ");
	scanf_s("%d", &p->age);

	printf("%s %d\n", chan.name, chan.age);

	return 0;
}
