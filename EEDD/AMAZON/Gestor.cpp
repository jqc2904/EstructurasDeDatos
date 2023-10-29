#include <iostream>
#include <string>
#include "Pedido.cpp"
#include "Gestor.hpp"

Gestor::Gestor()
{	
	int numPedU = 1;
	int numPedE = 51;
	int numSegU = 1;
	int numSegE = 501;
	Pila pila;
	Cola A;
	Cola B;
	Cola C;
	Cola D;
	Lista estandar;
	Lista urgente;
}
void Gestor::pedidosEnListaEstandar()
{
	estandar.getLongitud();
}
void Gestor::pedidosEnListaUrgente()
{
	urgente.getLongitud();
}
void Gestor::pedidosEnSalaA()
{
	cout << std::to_string(A.getLongitud());
}
void Gestor::pedidosEnSalaB()
{
	cout << std::to_string(B.getLongitud());
}
void Gestor::pedidosEnSalaC()
{
	cout << std::to_string(C.getLongitud());
}
void Gestor::pedidosEnSalaD()
{
	cout << std::to_string(D.getLongitud());
}
void Gestor::reiniciar()
{
	pila.vaciarPila();
	A.vaciar();
	B.vaciar();
	C.vaciar();
	D.vaciar();
	estandar.clear();
	urgente.clear();
	this->numPedU = 1;
	this->numPedE = 51;
	this->numSegU = 1;
	this->numSegE = 501;
}
void Gestor::buscarPedidos()
{
	Pedido* mayorPrioridadEs = estandar.getPedidoMenor();
	Pedido* menorPrioridadUr = urgente.getPedidoMayor();
	cout << "El pedido de mayor prioridad de la lista estandar es: " <<endl;
	cout << "DNI: " << mayorPrioridadEs->getDNI() << ", Urgencia: " << (mayorPrioridadEs->getEsUrgente() ? "Sí" : "No") << ", Número de Pedido: " << mayorPrioridadEs->getNPedido() << ", Número de Seguimiento: " << mayorPrioridadEs->getNSeguimiento() << std::endl;
	cout << "El pedido de menor prioridad de la lista urgente es: " <<endl;
	cout << "DNI: " << menorPrioridadUr->getDNI() << ", Urgencia: " << (menorPrioridadUr->getEsUrgente() ? "Sí" : "No") << ", Número de Pedido: " << menorPrioridadUr->getNPedido() << ", Número de Seguimiento: " << menorPrioridadUr->getNSeguimiento() << std::endl;

}
void Gestor::muestraPedidosUrgente()
{
	urgente.mostrar();
}
void Gestor::muestraPedidosEstandar()
{
	estandar.mostrar();
}
void Gestor::enlistarPedidos()
{
	for(int i = 0; i<=A.getLongitud();i++)
	{
		Pedido* p = A.eliminar();
		p->setNSeguimiento(generarNSeguimiento(p));
		estandar.append(p);
	}
	for(int i = 0; i<=B.getLongitud();i++)
	{
		Pedido* p = B.eliminar();
		p->setNSeguimiento(generarNSeguimiento(p));
		estandar.append(p);
	}
	for(int i = 0; i<=C.getLongitud();i++)
	{
		Pedido* p = C.eliminar();
		p->setNSeguimiento(generarNSeguimiento(p));
		urgente.append(p);
	}
	for(int i = 0; i<=D.getLongitud();i++)
	{
		Pedido* p = D.eliminar();
		p->setNSeguimiento(generarNSeguimiento(p));
		urgente.append(p);
	}
	estandar.ordenarPorPedido();
	urgente.ordenarPorPedido();
}
void Gestor::borraPedidosColas()
{
	A.vaciar();
	B.vaciar();
	C.vaciar();
	D.vaciar();
}
void Gestor::muestraPedidosSalasCyD()
{
	cout << "El contenido de la cola C es:"<<endl;
	C.mostrar();
	cout << "El contenido de la cola D es:"<<endl;
	D.mostrar();
}
void Gestor::muestraPedidosSalasAyB()
{
	cout << "El contenido de la cola A es:"<<endl;
	A.mostrar();
	cout << "El contenido de la cola B es:"<<endl;
	B.mostrar();
}
void Gestor::encolarPedidos()
{
	for(int i = 0; i<=pila.getLongitud(); i++)
	{
		Pedido* p = pila.extraer();
		int num = generarNPedido(p);
		p->setNPedido(num);
		if(p->getEsUrgente())
		{
			if(C.getLongitud()<=D.getLongitud())
			{
				C.insertar(p);
			}
			else
			{
				D.insertar(p);
			}
		}
		else
		{
			if(A.getLongitud()<=B.getLongitud())
			{
				A.insertar(p);
			}
			else
			{
				B.insertar(p);
			}
		}
	}
}
void Gestor::borraPedidosPila()
{
	pila.vaciarPila();
}
void Gestor::pedidosEnPila()
{
	cout << std::to_string(pila.getLongitud());
}
void Gestor::muestraPedidos()
{

	pila.mostrar();
}
void Gestor::generar12Pedidos()
{
	for(int i = 0; i <=12; i++)
	{
		Pedido pedido;
		bool urgente = rand()%2 == 1;
		pedido.setDNI(generarDNI());
		pedido.setEsUrgente(urgente);
		this->pila.insertar(&pedido);
	}
}
int Gestor::generarNPedido(Pedido* p)
{	
	int n;
	if(p->getEsUrgente())																			//
	{
		n = numPedU;
		this->numPedU++;
	}
	else
	{
		n = numPedE;
		this->numPedE++;
	}
	return n;
};
int Gestor::generarNSeguimiento(Pedido* p)
{	

	int n;
	if(p->getEsUrgente())																			//
	{
		n = numSegU;
		this->numSegU++;
	}
	else
	{
		n = numSegE;
		this->numSegE++;
	}
	return n;
};
char* Gestor::generarDNI()
{
	char DNI[10];
	char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
	int numDNI = 0, aux = 10000000;
	for(int i = 0; i<8; i++)
	{
		int num = rand() % 10;
		DNI[i] = '0' + num;
		numDNI = numDNI + num * aux;
		aux /= 10;
	}
	DNI[8] = letras[numDNI % 23];
	DNI[9] = '\0';
	return DNI;
}