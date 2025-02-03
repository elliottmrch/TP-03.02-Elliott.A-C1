#include "piano.h"

Note* creerNote(int frequence, int duree)
{
    Note* note = malloc(sizeof(Note));
    if(note == NULL)
    {
        printf("Erreur d'allocation de mémoire\n");
    }
    note->frequence = frequence;
    note->duree = duree;
    return note;
}

void libererNotes(Note** notes, int taille)
{
    for(int i = 0; i < taille; i++)
    {
        free(notes[i]);
    }
    free(notes);
}

void simulerPiano(Note** notes, int taille)
{
    char touche;
    int i;
    printf("Appuyez sur une touche pour jouer une note (azertyuioplm / a e t y i p m = do re mi fa sol la si), ou sur 'q' pour quitter\n");

    while(1)
    {
        touche = _getch();

        if(touche == 'q')
        {
            break;
        }

        char touches[] = "azertyuioplm";

        for(i = 0; i < taille; i++)
        {
            if(touche == touches[i])
            {
                Beep(notes[i]->frequence, notes[i]->duree);
                break;
            }
        }
    }
}