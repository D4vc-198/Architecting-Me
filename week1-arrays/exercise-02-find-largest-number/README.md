# 🧠 Ejercicio 2 — Encontrar el segundo número más grande

Este programa solicita al usuario ingresar una lista de números enteros y determina cuál es el **segundo número más grande**, siempre que exista uno distinto al mayor.

## 🧪 Requisitos del programa

- ✅ Solicitar al usuario la longitud del arreglo (mínimo 2).
- ✅ Validar que la entrada sea un número válido.
- ✅ Leer los valores del arreglo desde la entrada estándar.
- ✅ Validar que cada entrada sea numérica.
- ✅ Encontrar el segundo número más grande de forma eficiente (O(n)).
- ✅ Mostrar un mensaje claro si **no existe un segundo número distinto** al mayor.

## 📥 Entrada esperada

- Un número entero `n ≥ 2`, que representa el tamaño del arreglo.
- Luego, `n` números enteros que se almacenarán en un arreglo.
```yaml
Ingrese la longitud del ARRAY: 5
Ingrese los valores:
3
9
7
9
2
```
## 📤 Salida esperada
```yaml
Segundo mayor es: 7
```

O Si no hay segundo mayor válido:
```yaml
"No existe un segundo valor distinto al mayor."
```  


## 🧮 Ejemplo de ejecución
```bash
Ingrese la longitud del ARRAY: hola
Entrada inválida. Intenta de nuevo
Ingrese la longitud del ARRAY: 1
Longitud minima es de 2. Ingrese nuevamente: 4
Ingrese los valores:
a
Entrada inválida. Intenta de nuevo
10
5
5
10
Segundo mayor es: 5

```

## 🔍 ¿Cómo encontrar el segundo número más grande sin escribir código?

1. Imagina que comienzas con dos valores: mayor y segundoMayor, ambos al mínimo posible (-∞)

2. Recorres el arreglo uno por uno:
    - Si ves un número mayor que mayor, actualizas segundoMayor con el mayor actual, y luego actualizas mayor.

    - Si no supera a mayor pero sí a segundoMayor y es diferente de mayor, lo actualizas como nuevo segundoMayor.

## ✍️ Ejemplo mental (paso a paso)

Supongamos que el arreglo es: `[10, 20, 20, 10, 5]`

| i | array[i] | mayor | segundoMayor | Acción                  |
|---|----------|--------|---------------|--------------------------|
| 0 | 10       | 10     | -∞            | mayor actualizado        |
| 1 | 20       | 20     | 10            | mayor y segundo actual.  |
| 2 | 20       | 20     | 10            | no cambia (repetido)     |
| 3 | 10       | 20     | 10            | no cambia                |
| 4 | 5        | 20     | 10            | no cambia                |

Resultado: `Segundo mayor es: 10`


## 🎓 Conclusión

- ✅ Este algoritmo tiene **complejidad lineal O(n)**, ya que se recorre el arreglo una sola vez.
- ✅ No se utilizan estructuras auxiliares.
- ✅ Se manejan entradas no válidas de forma robusta.


## 🧠 Conocimientos aplicados

- Lectura segura de `cin` y validación de entrada.
- Uso de `INT_MIN` de `<climits>`.
- Algoritmos de recorrido con condiciones múltiples.
- Uso de referencias (`&`) para modificar variables desde funciones.


## ✅ Lista de verificación técnica

| Requisito                                               | Estado     |
|----------------------------------------------------------|------------|
| Validación robusta de entradas numéricas (`cin`)         | ✅ Cumplido |
| Validación de longitud mínima del arreglo (≥ 2)          | ✅ Cumplido |
| Lectura del arreglo desde entrada                        | ✅ Cumplido |
| Algoritmo eficiente (O(n))                               | ✅ Cumplido |
| Manejo de casos donde no hay segundo número distinto     | ✅ Cumplido |
| Uso de referencias para mantener estado global           | ✅ Cumplido |
| Formato de salida claro y correcto                       | ✅ Cumplido |

