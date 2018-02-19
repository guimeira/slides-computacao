int idade;
scanf("%d",&idade);

if(idade < 18) {
	printf("Criança!\n");
} else if(idade < 60) {
	printf("Adulto!\n");
} else {
	printf("Idoso!\n");
}