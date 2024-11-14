// c structure
# include<stdio.h>//printf(),scanf()
#include<string.h>//strcpy()
 
struct employee{
     

    char Name[25];
    int Id;
    char Department[20];
    float Salary;
    char Email[50];

}employee1;

  int main(){
      printf("A program of employee details \n");
    //struct employee empolyee1;
    //strcpy(employee1.Name"John Doe");
    printf("Enter the name of employee");
    scanf("%s",employee1.Name);
    strcpy(employee1.Department,"Human resourse" );
    employee1.Id=12345;
    employee1.Salary=55000.5;
    strcpy(employee1.Email,"john.doe@company.com");
    printf("Department:%s \n",employee1.Department);
    printf ("Id:%d \n",employee1.Id);
    printf("Salary:%f \n",employee1.Salary);
    printf("Email :%s \n",employee1.Email);
    return 0;
    
  }
    

 