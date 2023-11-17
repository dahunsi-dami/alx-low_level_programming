
          global    main         ; entry point for c-compiler
          extern    printf       ; will be borrowed from c-library
                                 ; printf(char* format, data)
                                 ; printf(rdi, rsi)

          section   .text
main:   
          lea       rdi, [rel message]   ; the format is the message!
                                         ; no need for rsi
                           ; printf("Hello, Holberton");
                   ; or (alternative):
          lea       rdi, [rel fmts]
          lea       rsi, [rel message]
                           ; printf("%s", "Hello, Holberton");
              
          mov       al, 0        ; no SSE regs used
          call      printf

          mov       rax, 0x3C    ; system call for exit
          xor       rdi, rdi     ; exit code 0
          syscall                ; invoke operating system to exit

          section   .data
message:  db        "Hello, Holberton"; don't forget to terminate
   fmts:  db        "%s",0       ; format fpr printing string
