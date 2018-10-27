#include <iostream>
#include "Francpp.hpp"

int	main()
{
	entier e = 90;
	caractere c = 'a';
	si (e > 60)
		std::cout << "Hello world! => " << lancer_statique<entier>(c) << std::endl;
	sinon
		std::cout << "Goodbye world!" << std::endl;
	retourne 0;
}
