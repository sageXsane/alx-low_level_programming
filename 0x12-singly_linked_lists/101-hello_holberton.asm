section .data
	format db "%s", 0
	message db "Hello Holberton", 0

section .text
	global main
	extern printf, exit

main:
	sub rsp, 8
	mov rdi, format
	mov rsi, message
	call printf
	add rsp, 8
	mov rax, 60
	xor rdi, rdi
	syscall

section .data
	 printf db "/lib/x86_64-linux-gnu/libc.so.6", 0
