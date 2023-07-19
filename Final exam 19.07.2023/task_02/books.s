	.file	"books.c"
	.text
	.globl	_compareTitleAscending
	.def	_compareTitleAscending;	.scl	2;	.type	32;	.endef
_compareTitleAscending:
LFB17:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	8(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_strcmp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE17:
	.globl	_compareTitleDescending
	.def	_compareTitleDescending;	.scl	2;	.type	32;	.endef
_compareTitleDescending:
LFB18:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	8(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	-12(%ebp), %edx
	movl	-16(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_strcmp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE18:
	.globl	_comparePagesAscending
	.def	_comparePagesAscending;	.scl	2;	.type	32;	.endef
_comparePagesAscending:
LFB19:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	-4(%ebp), %eax
	movzwl	200(%eax), %eax
	movzwl	%ax, %edx
	movl	-8(%ebp), %eax
	movzwl	200(%eax), %eax
	movzwl	%ax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE19:
	.globl	_comparePagesDescending
	.def	_comparePagesDescending;	.scl	2;	.type	32;	.endef
_comparePagesDescending:
LFB20:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movzwl	200(%eax), %eax
	movzwl	%ax, %edx
	movl	-4(%ebp), %eax
	movzwl	200(%eax), %eax
	movzwl	%ax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE20:
	.globl	_comparePriceAscending
	.def	_comparePriceAscending;	.scl	2;	.type	32;	.endef
_comparePriceAscending:
LFB21:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	-4(%ebp), %eax
	fldl	208(%eax)
	movl	-8(%ebp), %eax
	fldl	208(%eax)
	fucompp
	fnstsw	%ax
	sahf
	jbe	L17
	movl	$-1, %eax
	jmp	L12
L17:
	movl	-4(%ebp), %eax
	fldl	208(%eax)
	movl	-8(%ebp), %eax
	fldl	208(%eax)
	fxch	%st(1)
	fucompp
	fnstsw	%ax
	sahf
	jbe	L18
	movl	$1, %eax
	jmp	L12
L18:
	movl	$0, %eax
L12:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE21:
	.globl	_comparePriceDescending
	.def	_comparePriceDescending;	.scl	2;	.type	32;	.endef
_comparePriceDescending:
LFB22:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	-4(%ebp), %eax
	fldl	208(%eax)
	movl	-8(%ebp), %eax
	fldl	208(%eax)
	fucompp
	fnstsw	%ax
	sahf
	jbe	L27
	movl	$1, %eax
	jmp	L22
L27:
	movl	-4(%ebp), %eax
	fldl	208(%eax)
	movl	-8(%ebp), %eax
	fldl	208(%eax)
	fxch	%st(1)
	fucompp
	fnstsw	%ax
	sahf
	jbe	L28
	movl	$-1, %eax
	jmp	L22
L28:
	movl	$0, %eax
L22:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE22:
	.globl	_getComparator
	.def	_getComparator;	.scl	2;	.type	32;	.endef
_getComparator:
LFB23:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	cmpl	$6, 8(%ebp)
	ja	L30
	movl	8(%ebp), %eax
	sall	$2, %eax
	addl	$L32, %eax
	movl	(%eax), %eax
	jmp	*%eax
	.section .rdata,"dr"
	.align 4
L32:
	.long	L30
	.long	L31
	.long	L33
	.long	L34
	.long	L35
	.long	L36
	.long	L37
	.text
L31:
	movl	$_compareTitleAscending, %eax
	jmp	L38
L33:
	movl	$_compareTitleDescending, %eax
	jmp	L38
L34:
	movl	$_comparePagesAscending, %eax
	jmp	L38
L35:
	movl	$_comparePagesDescending, %eax
	jmp	L38
L36:
	movl	$_comparePriceAscending, %eax
	jmp	L38
L37:
	movl	$_comparePriceDescending, %eax
	jmp	L38
L30:
	movl	$0, %eax
L38:
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE23:
	.section .rdata,"dr"
LC1:
	.ascii "Title: %s\12\0"
LC2:
	.ascii "Author: %s\12\0"
LC3:
	.ascii "Pages: %d\12\0"
LC4:
	.ascii "Price: %.2f\12\12\0"
	.text
	.globl	_printBooks
	.def	_printBooks;	.scl	2;	.type	32;	.endef
_printBooks:
LFB24:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -12(%ebp)
	jmp	L40
L41:
	movl	-12(%ebp), %eax
	imull	$216, %eax, %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	-12(%ebp), %eax
	imull	$216, %eax, %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	addl	$100, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	-12(%ebp), %eax
	imull	$216, %eax, %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movzwl	200(%eax), %eax
	movzwl	%ax, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	-12(%ebp), %eax
	imull	$216, %eax, %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	fldl	208(%eax)
	fstpl	4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	addl	$1, -12(%ebp)
L40:
	movl	-12(%ebp), %eax
	cmpl	12(%ebp), %eax
	jl	L41
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE24:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_strcmp;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
