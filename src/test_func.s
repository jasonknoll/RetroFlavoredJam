; All functions are global
; Prefixed with '_'
; Sometimes the c is too slow and I'd prefer to avoid inline asm

_test_func::
    ld a, #0x01
    ret 