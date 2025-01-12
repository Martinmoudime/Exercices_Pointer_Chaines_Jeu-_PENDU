#include <iostream>
#include <string>
#include <limits>

#include "function.h"
int progression = 0;

int main(){
    
    int choix, choix2, position;
    char c, word[100], dest[100], text[100];
    std::cout << "1 : Compter le nombre de caracteres d'une chaine\n";
    std::cout << "2 : Copie des caracteres\n";
    std::cout << "3 : Concatenation\n";
    std::cout << "4 : Comparaisons\n";
    std::cout << "5 : Recherche de caractere\n";
    std::cout << "6 : Inverser chaine\n";
    std::cout << "7 : Conversion de chaine\n";
    std::cout << "8 : Recherche de mot\n";
    std::cout << "9 : Extraction de sous chaine\n";
    std::cout << "10 : Supprime caractere\n";
    std::cout << "11 : Compte mot\n";
    std::cout << "12 : Jeu du PENDU\n";
    std::cout << "Veuillez choisir l'operation sur les chaines de carcteres et pointeurs que vous souhaitez : ";
    std::cin >> choix;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch(choix){
        case 1:
            std::cout << "Entrer votre chaine de caracteres\n";
            std::cin.getline(text, 100);
            std::cout << "Cette chaine mesure " << longueur(text) << " caracteres\n";
        break;
        case 2:
            std::cout << "Entrer votre chaine de caracteres\n";
            std::cin.getline(text, 100);
            copie(dest, text);
            std::cout << "La source est : " << text << " et la destination vaut " << dest << "\n";
        break;
        case 3:
            std::cout << "Entrer votre premiere chaine de caracteres\n";
            std::cin.getline(text, 100);
            std::cout << "Entrer votre deuxieme chaine de caracteres\n";
            std::cin.getline(dest, 100);
            concatene(dest, text);
        break;
        case 4:
            std::cout << "Entrer votre premiere chaine de caracteres\n";
            std::cin.getline(text, 100);
            std::cout << "Entrer votre deuxieme chaine de caracteres\n";
            std::cin.getline(dest, 100);
            if (compare(text, dest) == 0){
                std::cout << "les 2 chaines sont egales\n";
            }
            else if (compare(text, dest) > 0){
                std::cout << "la chaine 1 est plus grande que la chaine 2\n";
            }
            else if(compare(text, dest) < 0){
                std::cout << "la chaine 2 est plus grande que la chaine 1\n";
            }
        break;
        case 5:
            std::cout << "Entrer votre chaine de caracteres\n";
            std::cin.getline(text, 100);
            std::cout << "Entrer le caractere a rechercher\n";
            std::cin >> c;
            if(cherche_char(text, c) != NULL){
                std::cout << "Le caractere est present\n";
                break;
            }
                std::cout << "Le caractere est introuvable dans la chaine\n";
        break;
        case 6:
            std::cout << "Entrer votre chaine de caracteres\n";
            std::cin.getline(dest, 100);
            inverse(dest);
            std::cout << dest << "\n";
        break;
        case 7:
            std::cout << "1 : Majuscule\n";
            std::cout << "2 : Miniscule\n";
            std::cin >> choix2;         
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            switch (choix2){
                case 1:
                    std::cout << "Entrer votre chaine de caracteres\n";
                    std::cin.getline(dest, 100);
                    to_upper(dest);
                    std::cout << dest  << "\n";
                break;
                case 2:
                    std::cout << "Entrer votre chaine de caracteres\n";
                    std::cin.getline(dest, 100);
                    to_lower(dest);
                    std::cout << dest  << "\n";
                break;
                    std::cout << dest  << "Entrer un chiffre compri entre 1 et 2\n";
                default:
                    break;
            }
        break;
        case 8:
            std::cout << "Entrer votre phrase\n";
            std::cin.getline(text, 100);
            std::cout << "Entrer le mot a rechercher\n";
            std::cin.getline(word, 100);
            if(cherche_mot(text, word) != nullptr){
                std::cout << "Le mot est present\n";
                break;
            }
            std::cout << "Le mot est introuvable dans la chaine\n";
            
        break;
        case 9:
            std::cout << "Entrer votre chaine de caracteres\n";
            std::cin.getline(text, 100);
            std::cout << "Entrer la position du mot a extraire\n";
            std::cin >> position;
            int longueur;
            for (int i = position; i != ' '; i++){
                longueur++;
            }
            std::cout << "la longueur est : " << longueur << "\n";
            sous_chaine(text, dest, position, longueur);
            std::cout << "Le mot extrait est : " << dest;
        break;
        case 10:
            std::cout << "Entrer votre chaine de caracteres\n";
            std::cin.getline(text, 100);
            std::cout << "Entrer le caractere a supprimer\n";
            std::cin >> c;
            supprime_caractere(text, c);
            std::cout << text  << "\n";
        break;
        case 11:
            std::cout << "Entrer votre chaine de caracteres\n";
            std::cin.getline(text, 100);
            std::cout << "Cette phrase comporte " << compte_mots(text) << " mots\n";
        break;
        case 12:
            pendu(progression);
        break;
    }
    return 0;
}