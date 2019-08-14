// 이름까지 입력받고 1등부터 차례대로 출력해보기
#include<stdio.h>

typedef struct {
	int kor;
	int eng;
	int mat;
	int sum;
	float avg;
	int rank;
	char name[10]; 
}STUDENT;

void sortRank(STUDENT student[]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (student[i].avg < student[j].avg) {
				student[i].rank++;
			}
		}
	}

}


int main() {
	STUDENT student[3];

	for (int i = 0; i < 3; i++) {
		/*printf("학생의 이름을 입력해주세요 : ");
		gets(student[i].name);*/
		printf("(%d) 번째 학생의 국어, 영어, 수학 점수를 입력해주세요 : ", i+1);
		scanf_s("%d %d %d", &student[i].kor, &student[i].eng, &student[i].mat);
		student[i].sum = student[i].kor + student[i].eng + student[i].mat;
		student[i].avg = student[i].sum / 3;
	}

	for (int i = 0; i < 3; i++) {
		student[i].rank = 1;
	}

	sortRank(student);

	for (int i = 0; i < 3; i++) {
		printf("(%d) 번째 학생의 국어점수 : %d,\t 영어점수 : %d,\t 수학점수 : %d,\t 총점 : %d,\t 평균 : %f,\t 등수 : %d\n",
			i+1, student[i].kor, student[i].eng, student[i].mat, student[i].sum, student[i].avg, student[i].rank);
	}

	return 0;
}
