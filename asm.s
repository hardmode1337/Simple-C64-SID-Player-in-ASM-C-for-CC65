.export _SIDINIT
.export _SIDSTEP 
.export _SIDFILE
_SIDFILE: .INCBIN "filename.sid",  $7e  

SIDLOAD = $4000;
SIDPLAY = $4003;

_SIDSTEP: 
    jsr SIDPLAY
    rts 

_SIDINIT: 
    lda #0 
    tax 
    tay 
    jsr SIDLOAD
    rts 
