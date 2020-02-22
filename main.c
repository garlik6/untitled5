#include <stdio.h>
#include <malloc.h>
#define MaxN 100
typedef struct Line {
    int n; //колличество эллементов в строке матрицы
    int *parr; //массив элементов
} Line;

typedef struct Matrix {
    int lines; // колличество строк матрицы
    Line *pmatr;// массив строк матрицы
}Matrix;

int main() {
    printf("Hello, World!\n");
    return 0;
}
int input(Matrix *rm);
int getInt(int *);// ввод целого числа
void output(const char *msg, Matrix a);//вывод матрицы
void erase(Matrix *a);//освобождение памяти


int input(Matrix *rm){
    const char *pr="";
    int m, i, j, *p;
    do{
        printf("%s\n",pr);
        printf("Insert num of lines: -->");
        pr="Error";
        if(getInt(&m)==0)
            return 0;
    } while (m<1);
    rm->lines=m;
    rm->pmatr=(Line *)calloc(m, sizeof(Line));
     for(i=0;i<rm->lines;i++){
         //колличество столбцов для каждой строки матрицы
         pr ="";
         do{
             printf("%s\n",pr);
             printf("insert number of items in line %d: -->", i+1);
             pr = "Error";
              if (getInt(&m) == 0){
                  rm->lines=i;
                  erase(rm);
                  return 0;//обнаружен конец файла
              }
         } while(m<1);
         rm->pmatr[i].n = m;
         // выделение необходимую память под элементы строки
         p = (int*)malloc(sizeof(double)*m);
     }





