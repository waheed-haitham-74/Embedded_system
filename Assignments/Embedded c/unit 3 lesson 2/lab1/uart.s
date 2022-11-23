
uart.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <Uart_Send_string>:
   0:	e52db004 	push	{fp}		; (str fp, [sp, #-4]!)
   4:	e28db000 	add	fp, sp, #0
   8:	e24dd00c 	sub	sp, sp, #12
   c:	e50b0008 	str	r0, [fp, #-8]
  10:	ea000006 	b	30 <Uart_Send_string+0x30>
  14:	e51b3008 	ldr	r3, [fp, #-8]
  18:	e5d32000 	ldrb	r2, [r3]
  1c:	e59f302c 	ldr	r3, [pc, #44]	; 50 <Uart_Send_string+0x50>
  20:	e5832000 	str	r2, [r3]
  24:	e51b3008 	ldr	r3, [fp, #-8]
  28:	e2833001 	add	r3, r3, #1
  2c:	e50b3008 	str	r3, [fp, #-8]
  30:	e51b3008 	ldr	r3, [fp, #-8]
  34:	e5d33000 	ldrb	r3, [r3]
  38:	e3530000 	cmp	r3, #0
  3c:	1afffff4 	bne	14 <Uart_Send_string+0x14>
  40:	e1a00000 	nop			; (mov r0, r0)
  44:	e28bd000 	add	sp, fp, #0
  48:	e49db004 	pop	{fp}		; (ldr fp, [sp], #4)
  4c:	e12fff1e 	bx	lr
  50:	101f1000 	andsne	r1, pc, r0

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000053 	andeq	r0, r0, r3, asr r0
   4:	00000004 	andeq	r0, r0, r4
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	0000000c 	andeq	r0, r0, ip
  10:	0000ab0c 	andeq	sl, r0, ip, lsl #22
  14:	00006600 	andeq	r6, r0, r0, lsl #12
  18:	00000000 	andeq	r0, r0, r0
  1c:	00005400 	andeq	r5, r0, r0, lsl #8
  20:	00000000 	andeq	r0, r0, r0
  24:	009a0200 	addseq	r0, sl, r0, lsl #4
  28:	04010000 	streq	r0, [r1], #-0
  2c:	00000000 	andeq	r0, r0, r0
  30:	00000054 	andeq	r0, r0, r4, asr r0
  34:	00499c01 	subeq	r9, r9, r1, lsl #24
  38:	00030000 	andeq	r0, r3, r0
  3c:	01000000 	mrseq	r0, (UNDEF: 0)
  40:	00004904 	andeq	r4, r0, r4, lsl #18
  44:	74910200 	ldrvc	r0, [r1], #512	; 0x200
  48:	4f040400 	svcmi	0x00040400
  4c:	05000000 	streq	r0, [r0, #-0]
  50:	00580801 	subseq	r0, r8, r1, lsl #16
  54:	Address 0x00000054 is out of bounds.


Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0xfffffeff
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10061201 	andne	r1, r6, r1, lsl #4
  10:	02000017 	andeq	r0, r0, #23
  14:	193f012e 	ldmdbne	pc!, {r1, r2, r3, r5, r8}	; <UNPREDICTABLE>
  18:	0b3a0e03 	bleq	e8382c <Uart_Send_string+0xe8382c>
  1c:	19270b3b 	stmdbne	r7!, {r0, r1, r3, r4, r5, r8, r9, fp}
  20:	06120111 			; <UNDEFINED> instruction: 0x06120111
  24:	42971840 	addsmi	r1, r7, #64, 16	; 0x400000
  28:	00130119 	andseq	r0, r3, r9, lsl r1
  2c:	00050300 	andeq	r0, r5, r0, lsl #6
  30:	0b3a0e03 	bleq	e83844 <Uart_Send_string+0xe83844>
  34:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  38:	00001802 	andeq	r1, r0, r2, lsl #16
  3c:	0b000f04 	bleq	3c54 <Uart_Send_string+0x3c54>
  40:	0013490b 	andseq	r4, r3, fp, lsl #18
  44:	00240500 	eoreq	r0, r4, r0, lsl #10
  48:	0b3e0b0b 	bleq	f82c7c <Uart_Send_string+0xf82c7c>
  4c:	00000e03 	andeq	r0, r0, r3, lsl #28
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000054 	andeq	r0, r0, r4, asr r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000035 	andeq	r0, r0, r5, lsr r0
   4:	001d0002 	andseq	r0, sp, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	74726175 	ldrbtvc	r6, [r2], #-373	; 0xfffffe8b
  20:	0000632e 	andeq	r6, r0, lr, lsr #6
  24:	00000000 	andeq	r0, r0, r0
  28:	00000205 	andeq	r0, r0, r5, lsl #4
  2c:	83160000 	tsthi	r6, #0
  30:	87638330 			; <UNDEFINED> instruction: 0x87638330
  34:	01000a02 	tsteq	r0, r2, lsl #20
  38:	Address 0x00000038 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	78745f50 	ldmdavc	r4!, {r4, r6, r8, r9, sl, fp, ip, lr}^
   4:	7274735f 	rsbsvc	r7, r4, #2080374785	; 0x7c000001
   8:	00676e69 	rsbeq	r6, r7, r9, ror #28
   c:	20554e47 	subscs	r4, r5, r7, asr #28
  10:	20313143 	eorscs	r3, r1, r3, asr #2
  14:	2e322e37 	mrccs	14, 1, r2, cr2, cr7, {1}
  18:	30322031 	eorscc	r2, r2, r1, lsr r0
  1c:	39303731 	ldmdbcc	r0!, {r0, r4, r5, r8, r9, sl, ip, sp}
  20:	28203430 	stmdacs	r0!, {r4, r5, sl, ip, sp}
  24:	656c6572 	strbvs	r6, [ip, #-1394]!	; 0xfffffa8e
  28:	29657361 	stmdbcs	r5!, {r0, r5, r6, r8, r9, ip, sp, lr}^
  2c:	52415b20 	subpl	r5, r1, #32, 22	; 0x8000
  30:	6d652f4d 	stclvs	15, cr2, [r5, #-308]!	; 0xfffffecc
  34:	64646562 	strbtvs	r6, [r4], #-1378	; 0xfffffa9e
  38:	372d6465 	strcc	r6, [sp, -r5, ror #8]!
  3c:	6172622d 	cmnvs	r2, sp, lsr #4
  40:	2068636e 	rsbcs	r6, r8, lr, ror #6
  44:	69766572 	ldmdbvs	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
  48:	6e6f6973 			; <UNDEFINED> instruction: 0x6e6f6973
  4c:	35353220 	ldrcc	r3, [r5, #-544]!	; 0xfffffde0
  50:	5d343032 	ldcpl	0, cr3, [r4, #-200]!	; 0xffffff38
  54:	00672d20 	rsbeq	r2, r7, r0, lsr #26
  58:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  5c:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xfffff199
  60:	61686320 	cmnvs	r8, r0, lsr #6
  64:	3a440072 	bcc	1100234 <Uart_Send_string+0x1100234>
  68:	73614d5c 	cmnvc	r1, #92, 26	; 0x1700
  6c:	69726574 	ldmdbvs	r2!, {r2, r4, r5, r6, r8, sl, sp, lr}^
  70:	6920676e 	stmdbvs	r0!, {r1, r2, r3, r5, r6, r8, r9, sl, sp, lr}
  74:	6d65206e 	stclvs	0, cr2, [r5, #-440]!	; 0xfffffe48
  78:	64646562 	strbtvs	r6, [r4], #-1378	; 0xfffffa9e
  7c:	545c6465 	ldrbpl	r6, [ip], #-1125	; 0xfffffb9b
  80:	49545345 	ldmdbmi	r4, {r0, r2, r6, r8, r9, ip, lr}^
  84:	6c5c474e 	mrrcvs	7, 4, r4, ip, cr14
  88:	20316261 	eorscs	r6, r1, r1, ror #4
  8c:	74696e75 	strbtvc	r6, [r9], #-3701	; 0xfffff18b
  90:	656c2033 	strbvs	r2, [ip, #-51]!	; 0xffffffcd
  94:	6e6f7373 	mcrvs	3, 3, r7, cr15, cr3, {3}
  98:	61550032 	cmpvs	r5, r2, lsr r0
  9c:	535f7472 	cmppl	pc, #1912602624	; 0x72000000
  a0:	5f646e65 	svcpl	0x00646e65
  a4:	69727473 	ldmdbvs	r2!, {r0, r1, r4, r5, r6, sl, ip, sp, lr}^
  a8:	7500676e 	strvc	r6, [r0, #-1902]	; 0xfffff892
  ac:	2e747261 	cdpcs	2, 7, cr7, cr4, cr1, {3}
  b0:	Address 0x000000b0 is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	5420554e 	strtpl	r5, [r0], #-1358	; 0xfffffab2
   c:	736c6f6f 	cmnvc	ip, #444	; 0x1bc
  10:	726f6620 	rsbvc	r6, pc, #32, 12	; 0x2000000
  14:	6d724120 	ldfvse	f4, [r2, #-128]!	; 0xffffff80
  18:	626d4520 	rsbvs	r4, sp, #32, 10	; 0x8000000
  1c:	65646465 	strbvs	r6, [r4, #-1125]!	; 0xfffffb9b
  20:	72502064 	subsvc	r2, r0, #100	; 0x64
  24:	7365636f 	cmnvc	r5, #-1140850687	; 0xbc000001
  28:	73726f73 	cmnvc	r2, #460	; 0x1cc
  2c:	322d3720 	eorcc	r3, sp, #32, 14	; 0x800000
  30:	2d373130 	ldfcss	f3, [r7, #-192]!	; 0xffffff40
  34:	6d2d3471 	cfstrsvs	mvf3, [sp, #-452]!	; 0xfffffe3c
  38:	726f6a61 	rsbvc	r6, pc, #397312	; 0x61000
  3c:	2e372029 	cdpcs	0, 3, cr2, cr7, cr9, {1}
  40:	20312e32 	eorscs	r2, r1, r2, lsr lr
  44:	37313032 			; <UNDEFINED> instruction: 0x37313032
  48:	34303930 	ldrtcc	r3, [r0], #-2352	; 0xfffff6d0
  4c:	65722820 	ldrbvs	r2, [r2, #-2080]!	; 0xfffff7e0
  50:	7361656c 	cmnvc	r1, #108, 10	; 0x1b000000
  54:	5b202965 	blpl	80a5f0 <Uart_Send_string+0x80a5f0>
  58:	2f4d5241 	svccs	0x004d5241
  5c:	65626d65 	strbvs	r6, [r2, #-3429]!	; 0xfffff29b
  60:	64656464 	strbtvs	r6, [r5], #-1124	; 0xfffffb9c
  64:	622d372d 	eorvs	r3, sp, #11796480	; 0xb40000
  68:	636e6172 	cmnvs	lr, #-2147483620	; 0x8000001c
  6c:	65722068 	ldrbvs	r2, [r2, #-104]!	; 0xffffff98
  70:	69736976 	ldmdbvs	r3!, {r1, r2, r4, r5, r6, r8, fp, sp, lr}^
  74:	32206e6f 	eorcc	r6, r0, #1776	; 0x6f0
  78:	30323535 	eorscc	r3, r2, r5, lsr r5
  7c:	Address 0x0000007c is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	0000001c 	andeq	r0, r0, ip, lsl r0
	...
  1c:	00000054 	andeq	r0, r0, r4, asr r0
  20:	8b040e42 	blhi	103930 <Uart_Send_string+0x103930>
  24:	0b0d4201 	bleq	350830 <Uart_Send_string+0x350830>
  28:	420d0d60 	andmi	r0, sp, #96, 26	; 0x1800
  2c:	00000ecb 	andeq	r0, r0, fp, asr #29

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002f41 	andeq	r2, r0, r1, asr #30
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000025 	andeq	r0, r0, r5, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	4d445437 	cfstrdmi	mvd5, [r4, #-220]	; 0xffffff24
  18:	02060049 	andeq	r0, r6, #73	; 0x49
  1c:	01090108 	tsteq	r9, r8, lsl #2
  20:	01140412 	tsteq	r4, r2, lsl r4
  24:	03170115 	tsteq	r7, #1073741829	; 0x40000005
  28:	01190118 	tsteq	r9, r8, lsl r1
  2c:	061e011a 			; <UNDEFINED> instruction: 0x061e011a
