//But: Cr�er un programme qui lit en entier et d�termine s'il s'agit d'un nombre impair ou pair
//Auteur: Marc-Olivier Parisien
//Date: 11 septembre 2020

#include <iostream> //Inclut le coffre a outils qui communique avec l'utilisateur en utilisant cout, cin

void main()
{
	setlocale(LC_ALL, ""); //Pour convertir correctement les accents

	//Nom de la variable que l'utilisateur entrera lorsque demand�; la valeur y sera stock�e
	int nb;
	
	 // On invite l'utilisateur a entrer une valeur pair ou impair
	std::cout << "Veuillez entrer un nombre entier. ";

	 // Le programme stock la valeur dans la variable initialiser par l'utilisateur
	std::cin >> nb;
	 
	if(nb % 2 == 0)
	{
		std::cout << nb << " est un nombre pair. ";
	}
	else
	{
		std::cout << nb << " est un nombre impair. ";
	}

}
//Plan de test
/*
	nb		r�sultat
	10		10 est un nombre pair.
	1		1 est un nombre impair.
	0		0 est un nombre pair.
*/