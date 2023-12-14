main function
	mov eax, 25; move the literal value 25 to eax register
	mov ebx, 30
	add eax, ebx; eax = eax + ebx
INVOKE ExitProcess, 0; call exit function
Main ENDP; exit main procedure