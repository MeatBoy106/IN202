## question 2.1.3

Cela compile et c'est normal.
Tant que les méthodes de Stack ne sont pas appelées, elle n'ont pas besoin d'être définies.

## question 2.1.4

Cela ne compile plus et c'est normal.
Maintenant que nous appelons la méthode size(), le compilateur a besoin de sa définition.

## question 2.1.6

Suivant l'implémentation choisie, plusieurs comportements sont possibles.
Il est par exemple possible de vérifier que la pile n'est pas vide ou pleine et de ne rien faire dans le cas contraire.
Il est aussi possible de déclencher une erreur comme une exception (hors programme) ou en quittant le programme tout simplement.
Un autre choix très commun en C++ est de définir les règles d'utilisation des fonctions.
La règle peut en l'occurence stipuler que la pile ne doit pas être vide lors d'un appel à pop() par exemple.
Dans le cas contraire, le comportement n'est pas précisé et le crash fait parti des possibilités.
C'est ce qui a été choisi dans cette correction,\.
