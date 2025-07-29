typedef struct{
  int elemento[100];
  int fim;
}Fila;

void iniciaFila(Fila *fila);
void incereElemento(Fila *fila, int *n);
void removeElemento(Fila *fila);
void verificaFila(Fila *fila);
void liberaFila(Fila *fila);