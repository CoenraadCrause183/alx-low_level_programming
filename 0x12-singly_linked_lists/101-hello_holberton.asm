global	main
extern	printf

main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret/*asked a friend from uni for help*/
format: db `Hello, Holberton\n`,0
