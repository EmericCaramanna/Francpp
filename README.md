# Francpp
Une simple collection de macros pour coder en C++ avec les mots clefs en français.
Les macros sont dans le fichier __Francpp.hpp__ qui lui-même est dans le dossier __src__, il suffit de l'inclure dans votre projet pour pouvoir utiliser les mots clefs C++ en français.

Voici un exemple simple de ce que vous pouvez faire.

``` C++

#include <iostream>
#include "Francpp.hpp"

int	main()
{
	entier e = 90;
	caractere c = 'a';
	si (e > 60)
		std::cout << "Bonjour! => " << lancer_statique<entier>(c) << std::endl;
	sinon
		std::cout << "Salut!" << std::endl;
	retourne 0;
}

```

