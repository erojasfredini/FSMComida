#pragma once
#include "StateMachine.h"
#include "Hormiga.h"

class State_Hormiga_Deambular : public State<Hormiga>{

	private:

	//constructores vacios y por copia privados
	//para que nadie pueda crear la instancia
	State_Hormiga_Deambular (){}
	State_Hormiga_Deambular (const State_Hormiga_Deambular * &other){}
	State_Hormiga_Deambular & operator=(const State_Hormiga_Deambular&){}

	public:
	static State_Hormiga_Deambular * Instance();
	void Execute(Hormiga* hormiga);
	void Enter(Hormiga* hormiga);
	void Exit(Hormiga* hormiga);
	virtual char* GetStateName();

};
