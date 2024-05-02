# Classcreator : Vos classes en CPP qui suivent la Forme Orthodoxe Canonique

## Comment l'utiliser ?

> :bulb: Vous pouvez vérifier votre version de bash avec `bash --version`

1.  Votre version de bash est >= 4.0 : vous pouvez exécuter la commande suivante :

<blockquote>

```bash
bash <(curl -fsSL --connect-timeout 10 https://raw.githubusercontent.com/nsainton/classcreator/main/classcreator.sh) NomClasse dossier_header dossier_sources
```

</blockquote>

2. Votre version de bash est < 4.0 : vous pouvez exécuter la commande suivante :

<blockquote>

```bash
curl -fsSL --connect-timeout 10 https://raw.githubusercontent.com/nsainton/classcreator/main/classcreator.sh -o /tmp/classcreator.sh && sh /tmp/classcreator.sh NomClasse dossier_header dossier_sources
```

</blockquote>


## Que fait-il

Ce script peut créer un fichier .cpp et un fichier .h pour une classe C++ avec le nom "NomClasse" (guillemets omis). <br/>
Cette classe contiendra :
1.	Un constructeur par défaut `NomClasse::NomClasse()`
2.	Un constructeur de copie `NomClasse::NomClasse( const NomClasse & autre )`
3.	Un opérateur d'assignation par copie `NomClasse & NomClasse::NomClasse( const NomClasse & autre )`
4.	Un destructeur virtuel `NomClasse::~NomClasse()`

Il est conçu pour être conforme à la forme canonique orthodoxe et est tel que le fichier produit par le script compilera immédiatement avec tous les avertissements du compilateur activés. <br/>
Bien qu'ils ne fassent absolument rien d'autre que d'écrire les fonctions qui sont appelées à l'objet ostream std::clog.

## Quels arguments puis-je fournir au Script ?

Ce script peut être exécuté de 3 manières distinctes :
1.	sh classcreator.sh NomClasse -> crée un fichier de classe Classname.cpp et Classname.h dans le répertoire courant
2.	sh classcreator.sh NomClasse dir -> crée un fichier dir/Classname.cpp et un fichier dir/Classname.h dans le répertoire spécifié
3.	sh classcreator.sh NomClasse dossier\_header dossier\_sources -> crée un fichier header\_dir/classname.h et un fichier class\_dir/classname.cpp dans les répertoires spécifiés et les fichiers sources

> :bulb: Tout répertoire inexistant sera créé par le script

## Que vais-je obtenir après avoir exécuté le Script ?

Exécutons la commande : `sh classcreator.sh Test includes sources` dans un répertoire vide <br/>
Nous obtiendrons deux nouveaux fichiers : sources/Test.cpp et includes/Test.h

> :bulb: Ces deux fichiers sont également disponibles dans le dossier "examples"

Voici à quoi ressemble le fichier [Test.h](/examples/Test.h) :
```cpp
#ifndef __TEST_H__
#define __TEST_H__

class	Test{
    public:
        Test();
        Test( const Test & );
        Test& operator=( const Test & );
        ~Test();
};

#endif
```

Voici à quoi ressemble le fichier [Test.cpp](/examples/Test.cpp) :
```cpp
#include "Test.h"

Test::Test(){
}

Test::Test( const Test & autre ){
}

Test&	Test::operator=( const Test & autre ){
    return (*this);
}

Test::~Test(){
}
```

Le fichier source Test.cpp peut être compilé immédiatement sans émettre d'avertissement.

## Obtenir de l'aide

Lancer the script sans aucun argument
```bash
sh classcreator.sh
```

## Comment puis-je contribuer ?

Il y a deux façons de contribuer à ce projet :
1. En m'envoyant un message sur discord (pour les étudiants de 42) ou par [mail](mailto:nsainton@student.42.fr?subject=[classcreator])
2. Les pull requests sont pour le moment désactivées, mais vous pouvez toujours m'envoyer un patch par mail ou sur discord

## Video de démonstration
