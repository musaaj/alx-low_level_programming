global main
extern printf

section .text
main:
	mov rdi, msg
	mov rdx, fmt
	mov eax,0 
	call printf
	ret

section .data
msg: db "Hello, Holberton",10,0
fmt: db "%s",0

