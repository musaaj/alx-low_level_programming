SECTION .data
	msg db "Hello, Holberton",10,0

SECTION .text

_start:
	global _start
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 16
	syscall
	mov rax, 60
	mov rdi, 0
	syscall
