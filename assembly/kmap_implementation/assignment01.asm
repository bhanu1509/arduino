;Simplify the following Boolean functions, using three-variable maps:
;(b) F (x, y, z) = minterms(0, 2, 4, 5, 6)


.include "/home/bhanu/m328Pdef.inc"
ldi r16,0b00111100
out DDRD,r16
ldi r17,0b00000001 ;initialize x
ldi r18,0b00000000 ;initialize y
ldi r19,0b00000000 ;initialize z
ldi r20,0b00000001             
mov r0,r20            
eor r0,r17                 ;r0=x compliment
mov r1,r20         
eor r1,r18                 ;r1=y compliment
mov r2,r20
eor r2,r19                 ;r2=z compliment

mov r3,r17            ;r3=x dummy
mov r4,r18              ;r4=y dummy
mov r5,r19              ;r5=z dummy

mov r6,r0              ;r9=x compliment dummy
mov r7,r1              ;r10=y compliment dummy
mov r8,r2               ;r11=z compliment dummy

and r17,r1
or r17,r2
mov r16,r17
lsl r16
lsl r16
out PORTD,r16

start:
rjmp start
