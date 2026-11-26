global main

section .data

	msg db "Hello, World", 0x0a
	len equ $ - msg
	
section .text

main:
	mov eax, 1		; sys_write
	mov edi, 1		; stdout
	lea rsi, [rel msg]	
	mov edx, len
	syscall

	mov eax, 60		; sys_exit
	xor edi, edi		; return (0);
	syscall
