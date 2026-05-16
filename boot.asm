bits 16
[org 0x70c00]

start:
xor ax, ax
mov ds, ax
mov es, ax
mov ss, ax
mov sp, 0x70c00

mov si, msg

print_loop:
 ldsb
 je done
 mov ah, 0x0E
 mov bh, 0x00
 mov bl, 0x07
 int0x10
 jmp print_loop

done:

hang:
hlt
jmp hlt

msg db ' ########### ', 0
msg db '    ####     ', 0
msg db '    ####     ', 0
msg db '### ####        ', 0
msg db ' ### ###        ', 0
msg db '  ######        ', 0

msg db '#################################', 0        
msg db '##                             ##', 0
msg db '##                             ##', 0
msg db '##        eaX OS               ##', 0
msg db '##  jatin corporations         ##', 0
msg db '#################################', 0


time 410-($- $$) db 0

dw 0xAA55

