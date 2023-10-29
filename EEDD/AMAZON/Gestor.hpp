#include "Cola.cpp"
#include "Pila.cpp"
#include "Lista.cpp"
class Gestor
{
	public:
		Gestor();
		void generar12Pedidos();
		void pedidosEnListaEstandar();
		void pedidosEnListaUrgente();
		void pedidosEnSalaA();
		void pedidosEnSalaB();
		void pedidosEnSalaC();
		void pedidosEnSalaD();
		void reiniciar();
		void buscarPedidos();
		void muestraPedidosUrgente();
		void muestraPedidosEstandar();
		void enlistarPedidos();
		void borraPedidosColas();
		void muestraPedidosSalasCyD();
		void muestraPedidosSalasAyB();
		void encolarPedidos();
		void borraPedidosPila();
		void pedidosEnPila();
		void muestraPedidos();
	private:
		Pila pila;
		int numPedU;
		int numPedE;
		int numSegU;
		int numSegE;
		Cola A;
		Cola B;
		Cola C;
		Cola D;
		Lista estandar;
		Lista urgente;
		int generarNSeguimiento(Pedido* p);
		int generarNPedido(Pedido* p);
		char* generarDNI();
};