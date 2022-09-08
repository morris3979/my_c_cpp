#include<stdio.h>
#include<stdlib.h>

struct student
{
    long id;
    char Name[10];
    int subject1, subject2, subject3;
};

void swap(struct student *s1, struct student *s2);
void printscore(struct student *sn);

int main(int argc, char const *argv[])
{
    struct student st1 = {104310030, "學生1", 60, 70, 80};
    struct student st2 = {104310047, "學生2", 90, 80, 70};
    printf("交換前\n");
    printscore(&st1);
    printscore(&st2);
    swap(&st1, &st2);
    printf("交換後\n");
    printscore(&st1);
    printscore(&st2);
    return 0;
}

void swap(struct student *s1, struct student *s2)
{
    struct student temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void printscore(struct student *sn)
{
    printf("%ld %s\n", sn -> id, sn -> Name);
    printf(" 科目1成績:%d\n", sn -> subject1);
    printf(" 科目2成績:%d\n", sn -> subject2);
    printf(" 科目3成績:%d\n", sn -> subject3);
}
