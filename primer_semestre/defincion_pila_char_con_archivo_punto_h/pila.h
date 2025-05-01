typedef struct _Pila* Pila;
//Constructora.
//Crea una pila vacia de la cantidad de tope
Pila crearPila(int tope);
//Selectoras
//pre-condicion la funcion pilaLlena rertorna false.
//pos-condicion inserta el elemento en el tope de la pila.
void insertarEnPila(Pila pila, char  elemento);
//pre-condicion vacia retorna false
//pos-condicion quita el elmento del tope de la pila
void quitarTopePila(Pila pila);
//pre-condicion vacia retorna false
//pos-condicion retorna el elmento del tope de la pila
int elementoTopePila(Pila pila);
//Predicados
//pos-condicion Retorna true si pila esta vacia
bool estaVaciaPila(Pila pila);
//pos-condicion Retorna true si pila esta llena
bool estaLlenaPila(Pila pila);
//Destructoras 
//pos-condicion se destruye toda la memoria de la pila
void eliminarPila(Pila pila);