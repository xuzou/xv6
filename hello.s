hello:
	.ascii "Hello world\n"

.globl _start

_start:
	movl $4, %eax
	movl $1, %ebx
	movl $hello, %ecx
	movl $12, %edx
	int $0x80

	movl $1, %eax
	int $0x80
