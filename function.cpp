#include <iostream>
#include <stdlib.h>
#include "function.h"
#include <ctime>

int longueur(const char* chaine){
    int compteur = 0;
    while (chaine[compteur] != '\0'){
        compteur++;
    }
    return compteur;
}

void copie(char* dest, const char* source){
    int i = 0;
    while(source[i] != '\0'){
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
}

void concatene(char* dest, const char* source){
    int i = 0;
    int j = 0;
    // std::cout << "Source : " << source;
    // std::cout << "Destination : " << dest;
    while(dest[i] != '\0'){
        i++;
    }
    i+1;
    while(source[j] != '\0'){
        dest[i] = source[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    std::cout << "La chaine concatene vaut : " << dest << "\n";
}

int compare(const char* chaine1, const char* chaine2){
    if (longueur(chaine1) == longueur(chaine2)){    
        return 0;
    }
    else if(longueur(chaine1) > longueur(chaine2)){
        return 1;
    }
    else{
        return -1;
    }
}

char *cherche_char(const char* chaine, char caractere){
    int i = 0;
   while(chaine[i] != '\0'){
        if(chaine[i] == caractere){
            char* ptr = &caractere;
            return ptr;
        }
        i++;
   }
   return NULL;
}



void inverse(char* chaine){
    char tmp = 0;
    int taille= longueur(chaine);
    // std::cout << "La taille est " << taille << "\n";
    for (int i = 0, j = taille - 1; i < j; i++, j--){
            tmp = chaine[i];
            chaine[i] = chaine[j];
            chaine[j] = tmp;
    }  
}

void to_upper(char *chaine){
    int taille= longueur(chaine);
    for (int i = 0; i < taille; i++){
        if (chaine[i] >= 'a' && chaine[i] <= 'z')chaine[i] = chaine[i] - 32;
    }
}

void to_lower(char *chaine){
    int taille= longueur(chaine);
    for (int i = 0; i < taille; i++){
        if (chaine[i] >= 'A' && chaine[i] <= 'Z')chaine[i] = chaine[i] + 32;
    }
}

char *cherche_mot(const char* phrase, const char* mot){
    char* p = nullptr;
    int taille = longueur(phrase);
    int taille2 = longueur(mot);
    for(int i = 0; i <= taille - taille2; i++){
        int j;
        for (j = 0; j < taille2; j++){
            if (phrase[i + j] != mot[j]){
                break;
            }
        }
        if (j == taille2){
            p = (char*)(phrase + i);
            break;
        }
    }
    return p;
}




void sous_chaine(const char* source, char* dest, int debut, int longueur){
    for (int i = debut, j = 0; i < debut + longueur, j <= longueur; i++, j++){
        dest[j] = source[i];
    }
}

void supprime_caractere(char* chaine, char caractere){
    int taille = longueur(chaine);
    for(int i = 0; i <= taille; i++){
        if (chaine[i] == caractere){
            chaine[i] = '1';
        }
    }
    for(int i = 0; i <= taille; i++){
        if (chaine[i] == '1'){
            int j = i;
            while(chaine[j] != '\0'){
                chaine[j] = chaine[j+1];
                j++;
            }
        }
    }
}

int compte_mots(const char* phrase){
    int temoin = 0;
    int taille = longueur(phrase);
    for (int i = 0; i <= taille; i++){
        if (phrase[i] == ' ' && phrase[i+1] != ' '){
            temoin++;
        }
    }
    return temoin + 1;
}

void affiche_pendu(int progress){
    if(progress == 0){
        std::cout << "___________________\n";
        std::cout << "|                  |\n";
        std::cout << "|                  |\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
    }
    else if(progress == 1){
        std::cout << "___________________\n";
        std::cout << "|                  |\n";
        std::cout << "|                  |\n";
        std::cout << "|                  @\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
    }
    else if(progress == 2){
        std::cout << "___________________\n";
        std::cout << "|                  |\n";
        std::cout << "|                  |\n";
        std::cout << "|                  @\n";
        std::cout << "|                  |\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
    }
    else if(progress == 3){
        std::cout << "___________________\n";
        std::cout << "|                  |\n";
        std::cout << "|                  |\n";
        std::cout << "|                  @\n";
        std::cout << "|                 /|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
    }
    else if(progress == 4){
        std::cout << "___________________\n";
        std::cout << "|                  |\n";
        std::cout << "|                  |\n";
        std::cout << "|                  @\n";
        std::cout << "|                 /|\\\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
    }
    else if(progress == 5){
        std::cout << "___________________\n";
        std::cout << "|                  |\n";
        std::cout << "|                  |\n";
        std::cout << "|                  @\n";
        std::cout << "|                 /|\\\n";
        std::cout << "|                 /\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
    }
    else if(progress == 6){
        std::cout << "___________________\n";
        std::cout << "|                  |\n";
        std::cout << "|                  |\n";
        std::cout << "|                  X\n";
        std::cout << "|                 /|\\\n";
        std::cout << "|                 / \\\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
    }
}

bool check(const char* chaine2,int taille){
    for (int i = 0; i < taille; i++){
        if (chaine2[i] == '_'){
            return false;
        }
    }
    return true;
}

void pendu(int progression){
    srand(time(0));
    const char* ck[] = {  
    "PROGRAMMATION", "POULET", "DOLIPRANE", "BASTOS", "POLYTECH", "BANANE", "ROI", "HACHE",  
    "PISTACHE", "DIMANCHE", "HOPITAL", "INGENIEUR", "ORDINATEUR", "NUMERIQUE", "INFORMATIQUE",  
    "XYLOPHONE", "SYNESTHESIE", "OBSTETRIQUE", "MEGALOMANE", "PARADIGME", "LOGARITHME", "HYPOTENUSE",  
    "CATASTROPHE", "CRYPTOMONNAIE", "BIBLIOTHECAIRE", "ANTICONSTITUTIONNELLEMENT", "PSYCHOTROPES",  
    "ELECTROENCEPHALOGRAMME", "DYSTOPIQUE", "ORTHODONTISTE", "HIERARCHISATION", "DICHOTOMIE",  
    "XENOPHOBIE", "QUADRILATERAL", "METAPHYSIQUE", "SARCOPHAGE", "HOMONYMIE", "KLEPTOMANE",  
    "PHYLLOXERA", "ZEUGMA", "CHLOROFORME", "ONOMATOPEE", "JUXTAPOSITION", "RHINOCEROS",  
    "SUBTERFUGE", "VENTRILOQUE", "ZYMOTIQUE", "ULTRACREPIDARIANISME", "PHOSPHORESCENT",  
    "VISCOSIMETRE"
};    // std::cout << "Entrez le mot a deviner\n";
    // std::cin >> word;
    
    char word2[100];
    char car;
    bool state = true;
    int j = rand() % 51;
    int taille = longueur(ck[j]);
    char word[21];
    copie(word, ck[j]);
    for (int i = 0; i < taille; i++){
        word2[i] = '_';
    }
    word2[taille] = '\0';
    while (state){
        std::cout << "Entrer une lettre : ";
        std::cout << word2 << "\n";
        std::cin >> car;
        bool found = false;
        for (int i = 0; i < taille; i++){
            if (car == word[i] && word2[i] != word[i]){
                word2[i] = car;
                found = true;
            }
        }

        if (!found){
            progression = progression + 1;
            affiche_pendu(progression);
        }
        
        
        if (progression == 6){
            state = false;
            std::cout << "Vous etes pendu !!!\n";
            std::cout << "Le mot etait " << word << "\n";
        }

        if (check(word2, taille)){
            std::cout << "Vous avez gagner !!!\n";
            state = false;
        }
    }
}
