	.file	"conditional-statments.c"
	.text
	.globl	main                            # -- Begin function main
	.p2align	4
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movabsq	$.L.str, %rdi
	movb	$0, %al
	callq	printf
	movabsq	$.L.str.1, %rdi
	leaq	-8(%rbp), %rsi
	movb	$0, %al
	callq	__isoc99_scanf
	movl	-8(%rbp), %esi
	movabsq	$.L.str.2, %rdi
	movb	$0, %al
	callq	printf
	cmpl	$70, -8(%rbp)
	jle	.LBB0_2
# %bb.1:
	movl	-8(%rbp), %esi
	movabsq	$.L.str.3, %rdi
	movb	$0, %al
	callq	printf
	jmp	.LBB0_7
.LBB0_2:
	cmpl	$70, -8(%rbp)
	jg	.LBB0_5
# %bb.3:
	cmpl	$30, -8(%rbp)
	jl	.LBB0_5
# %bb.4:
	movabsq	$.L.str.4, %rdi
	movb	$0, %al
	callq	printf
	jmp	.LBB0_6
.LBB0_5:
	movabsq	$.L.str.5, %rdi
	movb	$0, %al
	callq	printf
.LBB0_6:
	jmp	.LBB0_7
.LBB0_7:
	movabsq	$.L.str.6, %rdi
	movb	$0, %al
	callq	printf
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	GLOBAL,@object                  # @GLOBAL
	.data
	.globl	GLOBAL
	.p2align	2, 0x0
GLOBAL:
	.long	3                               # 0x3
	.size	GLOBAL, 4

	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"What temperature is it now?"
	.size	.L.str, 28

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"%d\n"
	.size	.L.str.1, 4

	.type	.L.str.2,@object                # @.str.2
.L.str.2:
	.asciz	"Input: %d\n"
	.size	.L.str.2, 11

	.type	.L.str.3,@object                # @.str.3
.L.str.3:
	.asciz	"Temperature is %d\n - HOT LIKE HELL\n"
	.size	.L.str.3, 36

	.type	.L.str.4,@object                # @.str.4
.L.str.4:
	.asciz	"Temperature is in the between 70 and 30\n"
	.size	.L.str.4, 41

	.type	.L.str.5,@object                # @.str.5
.L.str.5:
	.asciz	"Temperature is less then 30.\n"
	.size	.L.str.5, 30

	.type	.L.str.6,@object                # @.str.6
.L.str.6:
	.asciz	"End of program.\n"
	.size	.L.str.6, 17

	.ident	"clang version 21.1.6 (Fedora 21.1.6-1.fc43)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym printf
	.addrsig_sym __isoc99_scanf
