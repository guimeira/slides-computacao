entra_regiao:
  MOVE REGISTER, #1
  XCHG REGISTER, LOCK
  CMP REGISTER, #0
  JNE entra_regiao
  RET

sai_regiao:
  MOVE LOCK, #0
  RET