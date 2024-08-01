#include <iostream>
#include <stdio.h>
#include <math.h>


struct point_ {
	int posx;
	int posy;
};

typedef struct person_{
	char name[30];
	char phoneNum[20];
	int age;
	struct point_ point;
}Person;


typedef int INT;
typedef point_ Point;
//typedef person_ Person;

void printPoint(Point p) { printf("pointX:%d, pointY:%d", p.posx, p.posy); }

int main()
{
	Person person[3] = { {"최수혁","01066285939",22,{1,1}},{"최수혁","01066285939",22,{1,1}},{"최수혁","01066285939",22,{1,1}} };
	

	for (int i = 0; i < 3; i++) {
		printf("이름 : %s", person[i].name);
		printf("전화번호 : %s", person[i].phoneNum);
		printf("나이 : %s", person[i].age);
		printf("포인트 : %s", person[i].point.posx, person[i].point.posy);
	}



	//struct point pos1, pos2;
	//double distance;
	//fputc("point1 pos : ", stdout);
	//scanf("%d %d", &pos1.posx, &pos2.posy);

	//distance = (pos1.posx * &pos1.posy);
	//printf("multified : %f", distance)
}
