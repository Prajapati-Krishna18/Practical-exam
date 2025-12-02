#include <stdio.h>

struct student{
    int id;
    char name[20];
    int marks;
};

int main(){
    struct student obj;
    obj.id;
    obj.name;
    obj.marks;

    scanf("%d",&obj.id);
    printf("Id :%d\n",obj.id);

    scanf("%s",&obj.name);
    printf("Name :%s\n",obj.name);

    scanf("%d",&obj.marks);
    printf("Marks :%d\n",obj.marks);
    
    return 0;
}