#define VIC_TOP_BORDER_TOP (8) 
#define VIC_TOP_BORDER_BOTTOM (50) 
#define BOTTOM_BORDER_TOP (250) 
#define VIC_BOTTOM_BORDER_BOTTOM (299)
unsigned short GETLINE();
void VBLANK();
void NOT_VBLANK();

void VBLANK() { 
    while ( GETLINE() < BOTTOM_BORDER_TOP ); 
} 
void NOT_VBLANK() { 
    while ( GETLINE() >= BOTTOM_BORDER_TOP ); 
} 
unsigned short GETLINE() { 
    return ((unsigned short)VIC.rasterline) | ((VIC.ctrl1 & 0x80) ? 0x100 : 0); 
} 
