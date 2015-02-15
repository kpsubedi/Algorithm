	.file	"integer_promo.c"
	.text
.globl main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	call	signed_char_expression
	call	complement_unsigned_char
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC0:
	.string	"cresult = %d.\n"
	.text
.globl signed_char_expression
	.type	signed_char_expression, @function
signed_char_expression:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movb	$100, -4(%rbp)
	movb	$3, -3(%rbp)
	movb	$4, -2(%rbp)
	movsbl	-4(%rbp), %edx
	movsbl	-3(%rbp), %eax
	imull	%edx, %eax
	movsbl	-2(%rbp), %edx
	movl	%edx, -20(%rbp)
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	-20(%rbp)
	movb	%al, -1(%rbp)
	movsbl	-1(%rbp), %edx
	movl	$.LC0, %eax
	movl	%edx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	signed_char_expression, .-signed_char_expression
	.section	.rodata
.LC1:
	.string	"i = %d.\n"
	.text
.globl complement_unsigned_char
	.type	complement_unsigned_char, @function
complement_unsigned_char:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movb	$-1, -5(%rbp)
	movzbl	-5(%rbp), %eax
	notl	%eax
	movl	%eax, -4(%rbp)
	movl	$.LC1, %eax
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	complement_unsigned_char, .-complement_unsigned_char
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
