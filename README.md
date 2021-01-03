# Machine_Learning
<<<<<<< HEAD
Codes de machine learning que j'ai réalisé

->  Les codes sont écrits en langage c++.

-> Ce travaille consiste à implémenter deux codes qui font le tri d’un vecteur v contenant des valeurs aléatoires. Le but de ce travaille est de réaliser deux codes differents qui effectuent le tri du vecteur.

Par la suite on analyse la performance des deux codes pour différents tailles de vecteur v afin de comparer la rapidité des deux codes.

    • Le premier code (méthode) est nommé(e) tri à bulle (bubble sort).
    • Le deuxième code (méthode)est nommé(e) tri rapide (quicksort).

La méthode tri rapide est connue pour être plus rapide que celle de tri à bulle.


-> Analyse des résultats :
   **********************

On établie une mesure de performance des deux codes pour différents tailles de vecteur v. Le tableau ci-après montre les résultats obtenus :

Nombre de valeurs   Tri à bulles    Tri rapide
10                  0.000220896s    0.000121532 s
100                 0.000552195s    0.000338217 s
1000                0.0164327 s     0.00261468 s
10000               0.735645 s      0.0198831 s


-> Analyse des résultats:
  **********************

En analysant les résultats de Tableau 1, on constate que l’on gagne en performance en utilisant le code tri_rapide, notamment à partir de la taille de vecteur 100 jusqu’au 10000.

Étant donné n est la taille de vecteur :

    • La complexité de l’algorithme tri_a_bulles est de n x n  
    • la complexité de l’algorithme tri_rapide est de n x log(n)


-> Conclusion:
  ************
Le tri d’un vecteur v a été réalisé avec succès avec deux méthodes différentes. L’analyse des résultats a prouvé que l’algorithme ayant une complexité inférieure (càd tri_rapide) est meilleure en terme de performance pour différentes tailles de vecteur.
