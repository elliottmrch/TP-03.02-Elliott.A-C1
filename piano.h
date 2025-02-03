#ifndef PIANO_H
#define PIANO_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

typedef struct
{
    int frequence;
    int duree;
}Note;

Note* creerNote(int frequence, int duree);

void libererNotes(Note** notes, int taille);

void simulerPiano(Note** notes, int taille);

#endif