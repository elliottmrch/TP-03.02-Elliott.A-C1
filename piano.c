#include "piano.h"

int main()
{
    Note** notes = malloc(12 * sizeof(Note*));
    if(notes == NULL)
    {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }
    float frequencies[12] = { 261.63, 277.18, 293.66, 311.13, 329.63, 349.23, 369.99, 392.00, 415.30, 440.00, 466.16, 493.88 };
    for(int i = 0; i < 12; i++)
    {
        notes[i] = creerNote(frequencies[i], 500);
    }
    simulerPiano(notes, 12);
    libererNotes(notes, 12);
    return 0;
}