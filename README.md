*Este proyecto ha sido creado como parte del currículo de 42 por manmoral*

# Libft

## Descripción

Libft es el primer proyecto del currículo de 42.
El objetivo de este proyecto es recrear una selección de funciones de la biblioteca estándar de C, además de desarrollar funciones adicionales y herramientas para la gestión de listas enlazadas.

Esta librería personalizada será reutilizada en futuros proyectos del cursus.
Su finalidad es reforzar la comprensión de:

- Gestión de memoria.
- Manipulación de cadenas.
- Uso de punteros.
- Asignación dinámica de memoria.
- Estructuras de datos (listas enlazadas).

El resultado final es una librería estática llamada `libft.a`.

---

## Estructura del Proyecto

El proyecto está dividido en tres partes principales:

### Parte 1 – Funciones de libc

Reimplementación de funciones estándar de la biblioteca C como:

- Comprobación de caracteres (isalpha, isdigit, isalnum, etc.).
- Manipulación de cadenas (strlen, strchr, strncmp, etc.).
- Funciones de memoria (memset, memcpy, memmove, etc.).
- Conversión de tipos (atoi).
- Reserva de memoria (calloc, strdup).

Todas las funciones están prefijadas con `ft_`.

---

### Parte 2 – Funciones Adicionales

Funciones utilitarias que no pertenecen a libc o que están implementadas de forma distinta:

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

Estas funciones se centran principalmente en:

- Manipulación avanzada de cadenas.
- Escritura en descriptores de archivo.
- Conceptos de programación funcional.

---

### Parte 3 – Listas Enlazadas

Implementación de una estructura básica de lista enlazada:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

Funciones implementadas para la gestión de listas:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

Estas funciones permiten crear, recorrer, modificar y liberar listas enlazadas.

---

## Compilación

Para compilar la librería:

```bash
make
```

Esto generará:

```
libft.a
```

Reglas disponibles en el Makefile:

- `make` o `make all`
- `make clean`
- `make fclean`
- `make re`

Flags de compilación utilizadas:

```
-Wall -Wextra -Werror
```

La librería se crea utilizando:

```
ar rcs libft.a
```

---

## Cómo utilizar la librería

1. Incluye el header en tu archivo C:

```c
#include "libft.h"
```

2. Compila tu proyecto junto con la librería:

```bash
cc main.c libft.a
```

O si es necesario:

```bash
cc main.c -L. -lft
```

---

## Gestión de memoria

Toda la memoria asignada dinámicamente está correctamente gestionada.  
No se permiten memory leaks.  
Toda reserva en el heap debe liberarse cuando ya no sea necesaria.

---

## Recursos

Recursos utilizados durante el desarrollo:

- Manuales del sistema (`man nombre_función`).
- Documentación de la biblioteca estándar de C.
- Documentación oficial de 42 (intranet).

### Uso de IA

Las herramientas de IA se utilizaron únicamente como apoyo para:

- Aclarar conceptos teóricos.
- Comprender casos límite (edge cases).
- Revisar explicaciones lógicas.

Todo el código fue escrito, probado y comprendido manualmente para garantizar el aprendizaje real del proyecto.

---

## Aprendizajes adquiridos

Durante este proyecto he desarrollado:

- Mayor comprensión de punteros
- Dominio de la asignación y liberación de memoria
- Entendimiento interno del funcionamiento de funciones estándar
- Implementación básica de estructuras de datos
- Mejora en la detección y resolución de errores como segmentation faults

---

## Nota final

Libft es la base de futuros proyectos en 42.
Esta librería será ampliada y reutilizada a lo largo del cursus.
