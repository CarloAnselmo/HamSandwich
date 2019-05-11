#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <io.h>
#include "display.h"

#define FNAMELEN  32

#define FM_NEW		1
#define FM_LOAD		2
#define FM_SAVE		4
#define FM_EXIT		8
#define FM_ASKLOAD	16
#define FM_PLAYSONGS 32
#define FM_NOWAVS	64	// disregard wav files
#define FM_MERGE	128

void InitFileDialog(char *fileSpec,byte menuItemsToShow,char *defaultName);
void ExitFileDialog(void);
void RenderFileDialog(int msx,int msy,MGLDraw *mgl);
byte FileDialogKey(char key);
byte FileDialogClick(int msx,int msy);

char *GetFilename(char *header);
byte FileDialogCommand(void);
void AddDLWToFilename(void);

#endif
