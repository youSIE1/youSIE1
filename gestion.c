#include <stdio.h>
#include<stdlib.h>
#define t 10
		typedef struct etudiant {
		char nom[10];
		char pernom[10];
		char niveau[10];
		char filiere[10];
		int id;
		int vide;//0 case vide 1 case plane
		}etudiant;


	void ini(etudiant e[t])
	{int i;
		for(i=0;i<t;i++){
			e[i].vide=0;
		}
	}

		void ajoute(etudiant e[t],int *y){
			int i;
			for (i=0;i<t;i++){
				if(e[i].vide==0)
					{
						printf("entre les informations des etudiants \n");
						printf("le nom:");
						scanf("%s",e[i].nom);
						printf("\nle prenom:");
						scanf("%s",e[i].pernom);
						printf("\n niveau:");
						scanf("%s",e[i].niveau);
						printf("\nfiliere:");
						scanf("%s",e[i].filiere);
						e[i].id = *y;
						e[i].vide=1;
						*y=*y+1;
						break;
                                }
                        }
                    }

/* 	void affichre(etudiant e[t]){
	int i;
		for (i=0;i<t;i++){
		    if(e[i].vide==1)
			printf( "%i ,%s ,%s ,%s ,%s \n",e[i].id,e[i].nom,e[i].pernom,e[i].niveau,e[i].filiere);
		}
	} */
		void afficher1(etudiant e[t]){
		int i;
			FILE *fp;
			fp = fopen("test7.txt", "w+");
			for (i=0;i<t;i++)
				if(e[i].vide==1)
			 fprintf(fp, "%i ,%s ,%s ,%s ,%s \n",e[i].id,e[i].nom,e[i].pernom,e[i].niveau,e[i].filiere);

			fclose(fp);
		}

			void remove1(etudiant e[t]){
				int id,i ;
				printf("\nentre le id de voter etudiant : ");
				scanf("%d",&id);
			for(i=0;i<t;i++){
				if (e[i].id==id){
					e[i].vide=0;
				break;}
			else{
			    printf("aucune etudiant correspondant a ce id ");
			break;}
		}}

int main(){
int n,p=0;
		etudiant tabEd[t];
    ini(tabEd);

		printf("votre choix");
		while (1){

	printf("\n1 pour ajoute un etdiant\n");
	printf("2 pour supprimer un etdiant\n");
	printf("3 pour afficher les etdiants\n");
	printf("4 pour quitte le programe \n");
		scanf("%d",&n);
	switch (n){
		case 1 :
			ajoute(tabEd,&p);
			break;
		case 2:
			remove1(tabEd);
			break;
		case 3:
			afficher1(tabEd);
			break;
		default: return 0;

                }
                }

return 0;
}