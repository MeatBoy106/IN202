# IN202

Corrections des exercices d'IN202.

La technique de compilation utilisée emploi CMake, un outil courrament avec le langage C++.
Il ne vous est pas demandé de savoir l'utiliser.
Le nécessaire pour compiler est expliqué ce-dessous.

## Récupération initiale des corrections

```console
cd path/to/where/you/want/to/clone/the/correction
git clone https://github.com/MeatBoy106/IN202.git
```

## Mise à jour de la correction avec les dernière modifications

```console
cd path/to/where/you/want/to/clone/the/correction/IN202
git pull
```

## Compilation des corrections

Entrer dans le dossier d'un des exercices.
```console
mkdir build
cd build
cmake ..
make
```

L'exécutable compilé sera alors présent dans le dossier courant.
