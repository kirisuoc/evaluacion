#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("33 ft_split\n");

	char	*string06 = "////Hola/que//tal/hola/";
	char	delimitador = '/';
	char	**array3 = ft_split(string06, delimitador);

	printf("		String original: %s\n", string06);
	if (array3 == NULL)
	{
		printf("Error al separar la cadena.\n");
		return (1);
	}

	// Imprimir todas las subcadenas resultantes
	for (int i = 0; array3[i] != NULL; i++)
	{
		printf("		Subcadena %d: %s\n", i, array3[i]);
	}

	// Liberar la memoria asignada por ft_split
	for (int i = 0; array3[i] != NULL; i++)
	{
		free(array3[i]); // Liberar cada subcadena
	}
	free(array3); // Liberar el array de punteros
	printf("\n\n");
	return (0);
}
