#pragma once
#include "../Estructuras/Arboles/ArbolAA/ArbolAA.h"
#include "../Estructuras/ListaSimple/ListaSimple.h"

class MenuFuncionesAdmin
{
    static int ConseguirCantidadInventario(int CodInventario, ListaSimple* ListaCarritos);
public:

    static void Facturar(ListaSimple* ListaCompras, ListaSimple* HistorialCompras);

    static void VerificarIventario(ArbolAA* ArbolInventario, ListaSimple* ListaCarritos);

    static void RevisarGondolas(ListaSimple* ListaVentas, ArbolAA* ArbolInventario);
};
