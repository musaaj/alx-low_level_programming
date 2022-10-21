global main
extern puts

section .text
main:
	mov rdi, msg
	call puts
	ret

section .data
msg: db "Hello, Holberton",0


