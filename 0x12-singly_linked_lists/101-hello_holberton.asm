global    main
extern    printf

main:
    push message
    push dword format
    call printf
    add esp, 8
    ret

format:
    db "%s", 10, 0
