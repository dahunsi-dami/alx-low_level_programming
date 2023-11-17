section .data
	message db "Hello, Holberton", 10, 0	; newline and null terminator

section .text
	global main	; entry point for c-compiler
	extern printf	; will be borrowed from c-library
			; printf(char* format, data)
			; printf(rdi, rsi)

main:
	mov rdi, message	; the format is the message
	xor rax, rax		; clear the RAX register for no SSE regs used
	call printf

	mov rax, 60		; system call for exit
	xor rdi, rdi		; exit code 0
	syscall			; invoke operating system to exit
