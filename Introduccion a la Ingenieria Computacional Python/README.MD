# JOSUE ALEJANDRO MONTUFAR ZUNIGA (202510050077)

# N1 SNIPPET PARA IMPRIMIR UN HOLA MUNDO
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "hola",
		"body": [
			"print('Hola mundo!')",
			"$2"
		],
		"description": "Imprime un hola mundo"
	}
}

# N2 SNIPPET PARA LIMPIAR LA PANTALLA
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "limpiar",
		"body": [
			"import os",
			"os.system('cls' if os.name == 'nt' else 'clear')",
			"$2"
		],
		"description": "Limpia la pantalla de la consola"
	}
}

# N3 SNIPPET PARA INGRESAR UN ENTERO
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "python",
		"prefix": "NumeroEntero",
		"body": [
			"int(input(\"Digite una variable entera: $1\"))"
		],
		"description": "Definir y asignar una variable entera"
	}
}

# N4 SNIPPET PARA INGRESAR UN DECIMAL
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "python",
		"prefix": "NumeroDecimal",
		"body": [
			"float(input(\"Digite una variable decimal: $1\"))"
		],
		"description": "Definir y asignar una variable decimal"
	}
}

# N5 SNIPPET PARA INGRESAR UNA CADENA DE TEXTO
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "python",
		"prefix": "CadenaDeCaracteres",
		"body": [
			"input(\"Escriba su texto $1\")"
		],
		"description": "Definir y asignar una variable string"
	}
}

# N6 SNIPPET PARA INGRESAR UN PRINTF
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "python",
		"prefix": "Imprimir",
		"body": [
			"print(f\"texto {$1} texto {$2} texto\")",
			"$3"
		],
		"description": "printf en python"
	}
}