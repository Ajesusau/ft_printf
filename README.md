#  ft_printf

**ft_printf** es una implementación personalizada de la función `printf` de la biblioteca estándar de C.  
Este proyecto forma parte del plan de estudios de [42 School](https://42.fr) y tiene como objetivo profundizar en el manejo de **variádicos**, **formatos de impresión** y la creación de funciones robustas para formatear y mostrar datos.

##  Objetivos del Proyecto

- Comprender el funcionamiento interno de la función `printf`.
- Manejar **funciones variádicas** en C (`<stdarg.h>`).
- Implementar diferentes **conversores de formato** (`%d`, `%s`, `%x`, etc.).
- Mejorar la modularidad y organización del código.
- Reforzar la escritura de código limpio, estructurado y eficiente.

##  Estructura del Proyecto
```
ft_printf/
├── Makefile # Reglas de compilación
├── ft_printf.c # Función principal ft_printf
├── ft_printf.h # Cabecera principal
├── ft_put_utils.c # Funciones auxiliares para imprimir
├── ft_putnbr.c # Funciones para imprimir números
└── README.md # Documentación del proyecto
```

##  Funcionalidades Implementadas

### Conversores obligatorios:
- `%c` → imprime un solo carácter
- `%s` → imprime una cadena de caracteres
- `%p` → imprime una dirección de memoria en formato hexadecimal
- `%d` → imprime un número decimal (base 10, con signo)
- `%i` → imprime un entero (idéntico a `%d`)
- `%u` → imprime un número decimal sin signo
- `%x` → imprime un número en hexadecimal (minúsculas)
- `%X` → imprime un número en hexadecimal (mayúsculas)
- `%%` → imprime el símbolo `%`

##  Compilación

Para compilar la librería, simplemente ejecuta:
```
make
```
Esto generará un archivo libftprintf.a que puedes usar en otros proyectos.

Para limpiar archivos objeto:
```
make clean
```
Para limpiar todo, incluyendo la librería:
```
make fclean
```
Para limpiar y recompilar:
```
make re
```
 Uso
Incluye el archivo de cabecera en tu proyecto:
```
#include "ft_printf.h"
```
Compila con tu programa principal y la librería:
```
cc main.c libftprintf.a
```
Ejemplo:
```
int main(void)
{
    ft_printf("Hola %s, el número es %d y en hex es %x\n", "Málaga", 42, 42);
    return (0);
}
```
