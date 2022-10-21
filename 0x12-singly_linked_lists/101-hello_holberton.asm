global main
extern puts

section .text
main:
	push msg
	call puts
	ret

msg: db "Hello, Holberton",10,0


