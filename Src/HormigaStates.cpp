#include "stdafx.h"
#include "HormigaStates.h"
#include "utils.h"
State_Hormiga_Deambular*  State_Hormiga_Deambular::Instance(){
		static State_Hormiga_Deambular instance;
		return &instance;
}

/////////////////////////////////////////////////////////////////////////////
//Deambular
/////////////////////////////////////////////////////////////////////////////

void State_Hormiga_Deambular::Enter(Hormiga* hormiga){


}

void State_Hormiga_Deambular::Execute(Hormiga* hormiga){

	//Calculamos si hay que cambiar de estado
	

	//calculamos si vamos a cambiar de dirección
	if (Utils::GetRandomIntValue(0, 100) == 0){
		hormiga->ChangeDirection();
	}
	
	hormiga->Move();



}

void State_Hormiga_Deambular::Exit(Hormiga* hormiga){


}

char* State_Hormiga_Deambular::GetStateName(){
	return "Deambular";
}
