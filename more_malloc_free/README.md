🧠 C - More malloc, free

🗂️ Table of Contents
Project Description

Resources

Learning Objectives

Requirements

Tasks & Learnings

Trust no one

string_nconcat

_calloc

array_range

_realloc

We must accept finite disappointment, but never lose infinite hope

Compilation & Execution

Author

License & Acknowledgments

---

🌟 Introduction
La gestion dynamique de la mémoire est une compétence essentielle en C. Contrairement aux langages de haut niveau, C te donne un contrôle total sur l’allocation et la libération de mémoire. Cela implique aussi une grande responsabilité : éviter les fuites mémoire et les erreurs de segmentation.

Ce projet, C - More malloc, free, approfondit l’utilisation de malloc, free, ainsi que les fonctions associées comme calloc et realloc. Tu apprendras à manipuler la mémoire de manière sûre et efficace, et à construire des programmes robustes.

Tu vas apprendre à :

Allouer et libérer de la mémoire dynamiquement.

Utiliser calloc et realloc pour gérer des blocs mémoire.

Créer des tableaux dynamiques d’entiers.

Écrire un programme de multiplication de grands nombres en base 10.

🧾 Project Description
Ce projet introduit des fonctions avancées de gestion mémoire en C. Tu implémenteras tes propres versions de calloc, realloc, ainsi que des fonctions utilitaires pour manipuler des chaînes et des tableaux.

---

📚 Resources
Read or watch:

Do I cast the result of malloc?

man exit

man calloc

man realloc

---

🎯 Learning Objectives
À la fin de ce projet, tu devras être capable d’expliquer :

Comment utiliser la fonction exit.

Le rôle et l’utilisation de calloc et realloc.

Comment créer et gérer des tableaux dynamiques.

Comment manipuler la mémoire pour des opérations complexes comme la multiplication de grands nombres.

---

⚙️ Requirements
Compilation: Ubuntu 20.04 LTS avec gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Style: Betty (betty-style.pl et betty-doc.pl)

Pas de variables globales

Maximum 5 fonctions par fichier (sauf indication contraire)

Fonctions autorisées: malloc, free, exit

Tous les prototypes doivent être inclus dans main.h

---

🧩 Tasks & Learnings

🥇 0. Trust no one
File: 0-malloc_checked.c Prototype: void *malloc_checked(unsigned int b);

💡 Description Alloue de la mémoire avec malloc. Termine le programme avec le code de sortie 98 si l’allocation échoue.

🧠 Ce que j’ai appris

Vérifier les erreurs d’allocation.

Utiliser exit pour gérer les échecs.

🥈 1. string_nconcat

File: 1-string_nconcat.c Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);

💡 Description Concatène deux chaînes en allouant un nouvel espace mémoire.

🧠 Ce que j’ai appris

Gérer les chaînes NULL comme vides.

Combiner deux chaînes en mémoire dynamique.

🥉 2. _calloc

File: 2-calloc.c Prototype: void *_calloc(unsigned int nmemb, unsigned int size);

💡 Description Alloue un tableau de nmemb éléments de size octets chacun, initialisés à zéro.

🧠 Ce que j’ai appris

Initialiser la mémoire à zéro.

Reproduire le comportement de calloc.

🏅 3. array_range

File: 3-array_range.c Prototype: int *array_range(int min, int max);

💡 Description Crée un tableau d’entiers allant de min à max.

🧠 Ce que j’ai appris

Générer des séquences numériques dynamiques.

Vérifier les bornes et gérer les erreurs.

🏆 4. _realloc

File: 100-realloc.c Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

💡 Description Réalloue un bloc mémoire en copiant les données existantes.

🧠 Ce que j’ai appris

Adapter la taille d’un bloc mémoire.

Gérer les cas particuliers (ptr == NULL, new_size == 0).

🧱 5. We must accept finite disappointment, but never lose infinite hope

File: 101-mul.c

💡 Description Programme qui multiplie deux grands nombres positifs passés en base 10.

🧠 Ce que j’ai appris

Manipuler des chaînes représentant des nombres.

Implémenter une multiplication manuelle en C.

Gérer les erreurs d’arguments et de format.

🧰 Compilation & Execution
bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <file>.c -o <executable>
./<executable>
Exemple :

bash
gcc 1-main.c 1-string_nconcat.c -o string_nconcat
./string_nconcat

---
🏁 Conclusion

Ce projet m’a permis de renforcer ma compréhension de la gestion mémoire en C. J’ai appris à :

Allouer et libérer correctement la mémoire.

Écrire mes propres versions de fonctions standards (calloc, realloc).

Manipuler des structures dynamiques comme des tableaux et des chaînes.

Implémenter des algorithmes complexes (multiplication de grands nombres) en utilisant uniquement la mémoire dynamique.

“La mémoire est une arme puissante : bien utilisée, elle construit ; mal utilisée, elle détruit.”

👤 Author
SARA REBATI [https://github.com/SaraEstelle]

📜 License & Acknowledgments
Ce projet est sous licence MIT. Merci à Holberton School Thonon-les-Bains pour ces projets exigeants et formateurs en programmation C.
