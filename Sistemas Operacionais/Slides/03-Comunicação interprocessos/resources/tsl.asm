entrar_regiao:
  TSL REGISTER LOCK
  CMP REGISTER, #0
  JNE enter_region
  RET

sair_regiao:
  MOVE LOCK, #0
  RET