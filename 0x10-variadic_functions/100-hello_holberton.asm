  
section .rodata
	msg:    db 'Hello, Holberton', 10
	msglen: equ $-msg

section .text
	global main

	main:
	; write(1, msg, msglen)
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	mov rax, 1
	syscall
	; exit(0)
	mov rdi, 0
	mov rax, 60
	syscall