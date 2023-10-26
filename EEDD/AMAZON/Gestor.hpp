class Gestor
{
	public:
		Gestor();
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
		int numPedU = 1;
		int numPedE = 51;
		int generarNSeguimiento();
		int generarNPedido();
		char* generarDNI();
};