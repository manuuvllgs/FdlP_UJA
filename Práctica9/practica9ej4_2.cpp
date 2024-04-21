// @author Manuel Villegas Aceituno
// @file practica9ej3.cpp
// @date 28-nov-2023
// @desc Define  una  estructura  fecha  que  almacene  el  día,  mes  y  año  como  enteros.
// Implementa  funciones que permitan:

#include <iostream>

using namespace std;
const int TAM_MAX = 10;

struct Libro {
    string codigo, titulo;
    double precio;
};

struct Cliente {
    string codigo, nombre;
};

struct Venta {
    string codigo_libro, codigo_cliente;
};

/**
 * Descripcion: funcion que halla la cantidad de ejemplares vendidos de un libro
 * @param ventas vector donde se almacenan los datos de las ventas
 * @param codigo codigo del libro a buscar sus ventas
 * @param numero_ventas tamaño del vector
 * @return el numero de ejemplares vendidos del libro
 */

int numLibrosVendidos(Venta ventas[TAM_MAX], string codigo, int numero_ventas) {
    int cont_libros_vendidos = 0;
    for (int i = 0; i < numero_ventas; ++i) {
        if (ventas[i].codigo_libro == codigo) {
            ++cont_libros_vendidos;
        }
    }
    return cont_libros_vendidos;
}

/**
 * Descripcion: funcion que devuelve la posiion donde se encuentra el libro en el vector segun su codigo
 * @param libros vector donde se almacenan todos los libros
 * @param codigo codigo a buscar en el vector
 * @param numero_libros tamaño del vector
 * @return la posicion donde se encuentra el libro en el vector
 */

int posLibro(Libro libros[TAM_MAX], string codigo, int numero_libros) {
    int pos_libro;
    for (int i = 0; i < numero_libros; ++i) {
        if (libros[i].codigo == codigo) {
            pos_libro = i;
        }
    }
    return pos_libro;
}

/**
 * Descripcion: funcion que segun el codigo del cliente devuelve el nombre
 * @param clientes vector donde se almacenan los clientes
 * @param num_clientes tamaño del vector
 * @param codigo codigo del cliente cuyo nombre es buscado
 * @return el nombre del cliente dado el codigo
 */

string nombreCodigo(Cliente clientes[TAM_MAX], int num_clientes, string codigo){
    string nombre_codigo;
    for (int i=0 ; i < num_clientes ; ++i){
        if (codigo == clientes[i].codigo){
            nombre_codigo = clientes[i].nombre;
        }
    }
    return nombre_codigo;
}

/**
 * Descripcion: funcion que  segun el codigo de un libro devuelve el titulo de este
 * @param libros vector donde se almacenan los libros
 * @param codigo_libro codigo del libro cuyo nombre se busca
 * @param num_libros tamaño del vector
 * @return nombre del libro
 */


string nombreLibro(Libro libros[TAM_MAX], string codigo_libro, int num_libros) {
    string nombrelibro;
    for (int i = 0; i < num_libros; ++i) {
        if (codigo_libro == libros[i].codigo) {
            nombrelibro = libros[i].titulo;
        }
    }
    return nombrelibro;
}

/**
 * Descripcion: funcion que busca el libro que mas ejemplares ha vendido
 * @param ventas vector donde se almacenan las ventas de todos los libros
 * @param libros vector donde se almacena la infromacion de todos los libros
 * @param numero_ventas tamaño del vector de ventas
 * @param num_libros tamaño del vector de los libros
 * @return el nombre del libro mas vendido
 */

string masVendido(Venta ventas[TAM_MAX], Libro libros[TAM_MAX], int numero_ventas, int num_libros) {
    int vendidos1 = 0, vendidos = 0;
    string maslibrosvendidos;
    for (int i = 0; i < numero_ventas; ++i) {
        for (int j = i + 1; j < numero_ventas; ++j) {
            if (ventas[i].codigo_libro == ventas[j].codigo_libro) {
                ++vendidos;
            }
            if (vendidos > vendidos1) {
                vendidos1 = vendidos;
                maslibrosvendidos = nombreLibro(libros, ventas[i].codigo_libro, num_libros);
            }
        }
    }
    return maslibrosvendidos;
}

/**
 * Descripcion: funcion que busca el libro que mas dinero ha recaudado
 * @param ventas vector donde se almacenan las ventas de todos los libros
 * @param num_ventas tamaño del vector de ventas
 * @param libros vector que almacena todos los libros
 * @param num_libros tamaño del vector de libros
 * @return el nombre del libro que mas dinero ha recaudado
 */

string masDineroRecaudado(Venta ventas[TAM_MAX], int num_ventas, Libro libros[TAM_MAX], int num_libros) {
    double sumatotal = 0, sumainicial = 0;
    string masdinerorecaudado;
    for (int i = 0; i < num_ventas; ++i) {
        for (int j = i + 1; j < num_ventas; ++j) {
            if (ventas[i].codigo_libro == ventas[j].codigo_libro) {
                sumatotal += libros[posLibro(libros, ventas[i].codigo_libro, num_libros)].precio;
            }
            if (sumatotal > sumainicial) {
                sumainicial = sumatotal;
                masdinerorecaudado = nombreLibro(libros, ventas[i].codigo_libro, num_libros);
            }
        }
    }
    return masdinerorecaudado;
};

/**
 * Descripcion: funcion que guarda en un nuevo vector todos los libros comprados por un mismo cliente
 * @param ventas vector que almacena las ventas
 * @param clientes vector que almacena los clientes
 * @param libros vector que almacena los libros
 * @param libros2 nuevo vector que almacenara los libros comprados por el cliente dado su codigo
 * @param compras_cliente el tamaño del vetor que tendra el nuevo vector
 * @param num_ventas el tamaño del vector ventas
 * @param num_libros el tamaño del vector libros
 * @param codigo codigo del cliente cuyas compras se almcacenan en el nuevo vector
 */

void comprasCliente(Venta ventas[TAM_MAX], Cliente clientes[TAM_MAX], Libro libros[TAM_MAX], Libro libros2[TAM_MAX],
                    int &compras_cliente,
                    int num_ventas, int num_libros, string codigo) {
    for (int i = 0; i < num_ventas; ++i) {
        if (codigo == ventas[i].codigo_cliente) {
            libros2[compras_cliente].titulo = libros[posLibro(libros, ventas[i].codigo_libro, num_libros)].titulo;
            ++compras_cliente;
        }
    }
}

/**
 * Descripcion: funcion qu e busca el codigo del libro mas comprado
 * @param ventas vector que almacena las ventas
 * @param numero_ventas tamaño del vector ventas
 * @return el codigo del libro mas comprado
 */

string codigoMasComprados(Venta ventas[TAM_MAX], int numero_ventas) {
    int comprados1 = 0, comprados = 0;
    string maslibroscomprados;
    for (int i = 0; i < numero_ventas; ++i) {
        comprados = 0;
        for (int j = 0; j < numero_ventas; ++j) {
            if (ventas[i].codigo_cliente == ventas[j].codigo_cliente) {
                ++comprados;
            }
            if (comprados > comprados1) {
                comprados1 = comprados;
                maslibroscomprados = ventas[i].codigo_cliente;
            }
        }
    }
    return maslibroscomprados;
}

/**
 * Descripcion: funcion que busca el codugo del cliente que  mas dinero se ha gastado comprando libros
 * @param ventas vector que almacena las ventas
 * @param libros vector que almacena los libros
 * @param numero_ventas tamaño del vector de ventas
 * @param num_libros tamaño del vector de libros
 * @return el codigo del cliente que mas dinero se ha gastado
 */

string masDineroGastado(Venta ventas[TAM_MAX], Libro libros[TAM_MAX], int numero_ventas, int num_libros) {
    int gastado1 = 0, gastado = 0;
    string masdinerogastado;
    for (int i = 0; i < numero_ventas; ++i) {
        gastado = 0;
        for (int j = 0; j < numero_ventas; ++j) {
            if (ventas[i].codigo_cliente == ventas[j].codigo_cliente) {
                gastado += libros[posLibro(libros, ventas[i].codigo_libro, num_libros)].precio;
            }
            if (gastado > gastado1) {
                gastado1 = gastado;
                masdinerogastado = ventas[i].codigo_cliente;
            }
        }
    }
    return masdinerogastado;
}

int main() {
    int num_libros = 6, num_clientes = 6, num_ventas = 10, numero_compras_cliente = 0;
    string codigo2, codigo, codigo3;

    Libro libros2[TAM_MAX];

    Libro libros[TAM_MAX] = {
            {"12121212", "Las flores",              20.99},
            {"13131313", "Atardeceres",             15.90},
            {"14141414", "Navidad",                 30.99},
            {"15151515", "Petalos",                 10.99},
            {"16161616", "Atlas del cuerpo humano", 50.49},
            {"17171717", "La decima",               15.99}
    };

    Cliente clientes[TAM_MAX] = {
            {"100", "Miguel"},
            {"101", "Alba"},
            {"102", "Pedro"},
            {"103", "Maria"},
            {"104", "Lola"},
            {"105", "Mario"}
    };

    Venta ventas[TAM_MAX] = {
            {"12121212", "100"},
            {"13131313", "101"},
            {"14141414", "102"},
            {"15151515", "103"},
            {"16161616", "104"},
            {"17171717", "105"},
            {"16161616", "102"},
            {"12121212", "105"},
            {"16161616", "101"},
            {"15151515", "103"}
    };


    cout << "Introduzca el codigo del libro que quiere conocer las ventas: ";
    getline(cin >> ws, codigo);
    cout << "Se ha(n) vendido " << numLibrosVendidos(ventas, codigo, num_ventas) << " libro(s) titulado(s) "
         << nombreLibro(libros, codigo, num_libros) << endl;

    cout << "Introduzca el codigo del libro que quiere buscar en el vector: ";
    getline(cin >> ws, codigo2);
    cout << "El libro con codigo " << codigo2 << " se encuentra en la posicion "
         << posLibro(libros, codigo2, num_libros) + 1;
    cout << endl;

    cout << "El libro mas vendido es " << masVendido(ventas, libros, num_ventas, num_libros) << endl;

    cout << "El libro que mas dinero ha recaudado es " << masDineroRecaudado(ventas, num_ventas, libros, num_libros);

    cout << endl;
    cout << "Introduzca el codigo del cliente que quiere conocer cuantos libros ha comprado: ";
    getline(cin >> ws, codigo3);

    comprasCliente(ventas, clientes, libros, libros2, numero_compras_cliente, num_ventas, num_libros, codigo3);

    cout << "El cliente con codigo " << codigo3 << " ha comprado: ";
    for (int i = 0; i < numero_compras_cliente; ++i) {
        cout << libros2[i].titulo << ", ";
    }


    cout << endl;
    cout << "El codigo del cliente que mas libros ha comprado es " << codigoMasComprados(ventas, num_ventas);
    cout<<", " <<nombreCodigo(clientes, num_clientes, codigoMasComprados(ventas,num_ventas));

    cout<<endl;
    cout<<"El codigo del cliente que mas dinero se ha gastado es " <<masDineroGastado(ventas,libros,num_ventas,num_libros);
    cout<<", " <<nombreCodigo(clientes, num_clientes, masDineroGastado(ventas, libros, num_ventas, num_libros));

    return 0;
}