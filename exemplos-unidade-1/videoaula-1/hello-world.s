; Disciplina:     Estrutura de Dados 1 - EAD Fametro
; Facilitador:    Orlewilson B. Maia
; Descrição:      Hello World em Linguagem Assembly
; Fonte:          https://jameshfisher.com/2018/03/10/linux-assembly-hello-world/

global _start

section .text

_start:
  mov rax, 1        ; write(
  mov rdi, 1        ;   STDOUT_FILENO,
  mov rsi, msg      ;   "Hello, world!\n",
  mov rdx, msglen   ;   sizeof("Hello, world!\n")
  syscall           ; );

  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );

section .rodata
  msg: db "Hello, world!", 10
  msglen: equ $ - msg