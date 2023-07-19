	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC1:
	.ascii "\11Before sorting:\0"
	.align 4
LC2:
	.ascii "-----------------------------------\0"
LC3:
	.ascii "\11Choose the option\0"
	.align 4
LC4:
	.ascii "1. Compare books title ascending\0"
	.align 4
LC5:
	.ascii "2. Compare books title descending\0"
	.align 4
LC6:
	.ascii "3. Compare books pages ascending\0"
	.align 4
LC7:
	.ascii "4. Compare books pages descending\0"
	.align 4
LC8:
	.ascii "5. Compare books price ascending\0"
	.align 4
LC9:
	.ascii "6. Compare books price descending\0"
LC10:
	.ascii "Enter sorting option (1-6): \0"
LC11:
	.ascii "%d\0"
LC12:
	.ascii "Invalid choice!!!\0"
LC13:
	.ascii "\12\11After sorting:\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB18:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$3520, %esp
	.cfi_offset 3, -12
	call	___main
	movl	$0, (%esp)
	call	_time
	movl	%eax, (%esp)
	call	_srand
	movl	$0, 3516(%esp)
	jmp	L2
L15:
	call	_rand
	movl	%eax, %ecx
	movl	$780903145, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	leal	10(%edx), %eax
	movl	%eax, 3500(%esp)
	movl	$0, 3512(%esp)
	jmp	L3
L6:
	cmpl	$0, 3512(%esp)
	jne	L4
	call	_rand
	movl	%eax, %ecx
	movl	$1321528399, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$26, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	addl	$65, %eax
	movl	%eax, %ecx
	leal	44(%esp), %edx
	movl	3512(%esp), %eax
	addl	%edx, %eax
	movb	%cl, (%eax)
	jmp	L5
L4:
	call	_rand
	movl	%eax, %ecx
	movl	$1321528399, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$26, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	addl	$97, %eax
	movl	%eax, %ecx
	leal	44(%esp), %edx
	movl	3512(%esp), %eax
	addl	%edx, %eax
	movb	%cl, (%eax)
L5:
	addl	$1, 3512(%esp)
L3:
	movl	3512(%esp), %eax
	cmpl	3500(%esp), %eax
	jl	L6
	leal	44(%esp), %edx
	movl	3500(%esp), %eax
	addl	%edx, %eax
	movb	$0, (%eax)
	leal	248(%esp), %edx
	movl	3516(%esp), %eax
	imull	$216, %eax, %eax
	addl	%eax, %edx
	movl	$100, 8(%esp)
	leal	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	_strncpy
	call	_rand
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$29, %eax
	addl	%eax, %edx
	andl	$7, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	addl	$3, %eax
	movl	%eax, 3496(%esp)
	call	_rand
	movl	%eax, %edx
	movl	%edx, %eax
	sarl	$31, %eax
	shrl	$29, %eax
	addl	%eax, %edx
	andl	$7, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	addl	$3, %eax
	movl	%eax, 3492(%esp)
	movl	$0, 3508(%esp)
	jmp	L7
L10:
	cmpl	$0, 3508(%esp)
	jne	L8
	call	_rand
	movl	%eax, %ecx
	movl	$1321528399, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$26, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	addl	$65, %eax
	movl	%eax, %ecx
	leal	144(%esp), %edx
	movl	3508(%esp), %eax
	addl	%edx, %eax
	movb	%cl, (%eax)
	jmp	L9
L8:
	call	_rand
	movl	%eax, %ecx
	movl	$1321528399, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$26, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	addl	$97, %eax
	movl	%eax, %ecx
	leal	144(%esp), %edx
	movl	3508(%esp), %eax
	addl	%edx, %eax
	movb	%cl, (%eax)
L9:
	addl	$1, 3508(%esp)
L7:
	movl	3508(%esp), %eax
	cmpl	3496(%esp), %eax
	jl	L10
	leal	144(%esp), %edx
	movl	3496(%esp), %eax
	addl	%edx, %eax
	movb	$32, (%eax)
	movl	$0, 3504(%esp)
	jmp	L11
L14:
	cmpl	$0, 3504(%esp)
	jne	L12
	movl	3496(%esp), %eax
	leal	1(%eax), %edx
	movl	3504(%esp), %eax
	leal	(%edx,%eax), %ebx
	call	_rand
	movl	%eax, %ecx
	movl	$1321528399, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$26, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	addl	$65, %eax
	movb	%al, 144(%esp,%ebx)
	jmp	L13
L12:
	movl	3496(%esp), %eax
	leal	1(%eax), %edx
	movl	3504(%esp), %eax
	leal	(%edx,%eax), %ebx
	call	_rand
	movl	%eax, %ecx
	movl	$1321528399, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$26, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	addl	$97, %eax
	movb	%al, 144(%esp,%ebx)
L13:
	addl	$1, 3504(%esp)
L11:
	movl	3504(%esp), %eax
	cmpl	3492(%esp), %eax
	jl	L14
	movl	3496(%esp), %edx
	movl	3492(%esp), %eax
	addl	%edx, %eax
	addl	$1, %eax
	movb	$0, 144(%esp,%eax)
	leal	248(%esp), %eax
	movl	3516(%esp), %edx
	imull	$216, %edx, %edx
	addl	$96, %edx
	addl	%edx, %eax
	leal	4(%eax), %edx
	movl	$100, 8(%esp)
	leal	144(%esp), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	_strncpy
	call	_rand
	movl	%eax, %ecx
	movl	$554748551, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$7, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$991, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	leal	10(%eax), %edx
	movl	3516(%esp), %eax
	imull	$216, %eax, %eax
	leal	3520(%esp), %ebx
	addl	%ebx, %eax
	subl	$3072, %eax
	movw	%dx, (%eax)
	call	_rand
	movl	%eax, %ecx
	movl	$-705091559, %edx
	movl	%ecx, %eax
	imull	%edx
	leal	(%edx,%ecx), %eax
	sarl	$13, %eax
	movl	%eax, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$9801, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	addl	$200, %eax
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fldl	LC0
	fdivrp	%st, %st(1)
	movl	3516(%esp), %eax
	imull	$216, %eax, %eax
	leal	3520(%esp), %ebx
	addl	%ebx, %eax
	subl	$3064, %eax
	fstpl	(%eax)
	addl	$1, 3516(%esp)
L2:
	cmpl	$14, 3516(%esp)
	jle	L15
	movl	$LC1, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_puts
	movl	$15, 4(%esp)
	leal	248(%esp), %eax
	movl	%eax, (%esp)
	call	_printBooks
	movl	$LC2, (%esp)
	call	_puts
	movl	$LC3, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_puts
	movl	$LC4, (%esp)
	call	_puts
	movl	$LC5, (%esp)
	call	_puts
	movl	$LC6, (%esp)
	call	_puts
	movl	$LC7, (%esp)
	call	_puts
	movl	$LC8, (%esp)
	call	_puts
	movl	$LC9, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_puts
	movl	$LC10, (%esp)
	call	_printf
	leal	244(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC11, (%esp)
	call	_scanf
	movl	$LC2, (%esp)
	call	_puts
	movl	244(%esp), %eax
	movl	%eax, (%esp)
	call	_getComparator
	movl	%eax, 3488(%esp)
	cmpl	$0, 3488(%esp)
	jne	L16
	movl	$LC12, (%esp)
	call	_puts
	movl	$1, %eax
	jmp	L18
L16:
	movl	3488(%esp), %eax
	movl	%eax, 12(%esp)
	movl	$216, 8(%esp)
	movl	$15, 4(%esp)
	leal	248(%esp), %eax
	movl	%eax, (%esp)
	call	_qsort
	movl	$LC13, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_puts
	movl	$15, 4(%esp)
	leal	248(%esp), %eax
	movl	%eax, (%esp)
	call	_printBooks
	movl	$0, %eax
L18:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE18:
	.section .rdata,"dr"
	.align 8
LC0:
	.long	0
	.long	1079574528
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_time;	.scl	2;	.type	32;	.endef
	.def	_srand;	.scl	2;	.type	32;	.endef
	.def	_rand;	.scl	2;	.type	32;	.endef
	.def	_strncpy;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printBooks;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_getComparator;	.scl	2;	.type	32;	.endef
	.def	_qsort;	.scl	2;	.type	32;	.endef
