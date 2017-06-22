#ifndef MATRIZ_H
#define MATRIZ_H

class NodoMatriz
{
public:
    NodoMatriz(char *dato_, int fila_, int columna_, int nivel_);
    ~NodoMatriz();

    char* dato;
    int fila;
    int columna;
    int nivel;
    NodoMatriz *izquierda;
    NodoMatriz *derecha;
    NodoMatriz *arriba;
    NodoMatriz *abajo;
};

class Encabezado
{
public:
    Encabezado(int indice_);
    ~Encabezado();

    int indice;
    Encabezado *siguiente;
    Encabezado *anterior;
    NodoMatriz *apunta;
};

class ListaEncabezado
{
public:
    ListaEncabezado();
    ~ListaEncabezado();

    Encabezado *primero;
    void insertar(Encabezado *nuevo);
    Encabezado *getEncabezado(int indice);
};

class Matriz
{
    void escribir(char filename[], char texto[], char *modo);
    void rank();
    void graficarColumnas(int nivel);
    void graficarFilas(int nivel);
public:
    Matriz();
    ~Matriz();

    ListaEncabezado *columnas;
    ListaEncabezado *filas;
    void insertar(char *dato, int fila, int columna, int nivel);
    void linealizarFila();
    void linealizarColumna();
    void graficar(int nivel);
};

#endif // MATRIZ_H