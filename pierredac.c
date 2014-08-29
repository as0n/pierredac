#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	const int n = 8;
	const char *quotes[n];
	quotes[0] = "Le chaînon manquant entre le singe et l'homme c'est nous.";
	quotes[1] = "Les penses-bêtes sont les porte-clés de la mémoire.";
	quotes[2] = "On n'attrape pas des mouches avec du vinaigre ni une broncho-pneumonie dans un bain turc.";
	quotes[3] = "Quand on ne condamnera plus les portes et quand on n'acquittera plus les factures, la justice aura fait un beau demi-tour en avant.";
	quotes[4] = "Si vous avez les yeux plus grand que le ventre, vous n'êtes pas près de trouver une paire de lunette.";
	quotes[5] = "En politique, parler pour ne rien dire et ne rien dire pour parler sont les deux principes majeurs de tous ceux qui feraient mieux de la fermer avant de l'ouvrir.";
	quotes[6] = "Mourir en bonne santé, c'est le voeu de tout bon vivant bien portant.";
	quotes[7] = "Mettre de l'argent de côté pour l'avoir devant soi, est, pour paradoxale qu'elle soit, une façon comme une autre d'assurer ses arrières à effet de ne pas l'avoir dans le dos.";

	int r = rand() % n;
	printf("%s\n", quotes[r]);
}
