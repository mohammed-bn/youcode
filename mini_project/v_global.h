#define ROUGE     "\033[1;31m"
#define VERT   "\033[1;32m"
#define BLUE    "\033[1;34m"
#define JUEN  "\033[1;33m"
#define Bleu_ciel  "\033[1;36m"
#define viole "\033[1;35m"
#define RESET   "\033[0m"

int id_avion[1000];
char modele[1000][30];
int capacite[1000];
char status[1000][20];
char dateEentree[1000][10];
int n_ajoute; // le nomber d'avion que enter par l'utilisateur
int jour, moi, annee; 