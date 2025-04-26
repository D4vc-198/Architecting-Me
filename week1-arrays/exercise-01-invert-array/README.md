# 🧠 Ejercicio 1: Inversión de un Array

Este es el primer ejercicio del reto, donde comenzamos a trabajar con arrays en C++.

Este programa solicita al usuario ingresar una lista de 10 números enteros, invierte el contenido del arreglo de forma eficiente (O(n/2)), y muestra el arreglo resultante en orden inverso.


## 🧪 Requisitos del programa

- ✅ Leer 10 números desde consola.
- ✅ Almacenarlos en un array.
- ✅ Invertir el arreglo de manera eficiente (O(n/2)).
- ✅ Validar que cada entrada sea numérica (manejar entradas inválidas).
- ✅  Mostrar el arreglo invertido de manera clara en la consola.

## 📥 Entrada esperada

- 10 números introducidos uno por uno.
```yaml
Ingresa 10 números:
5
8
2
9
1
0
7
6
4
3
```

## 📤 Salida esperada
```yaml
Array en orden inverso: 3 4 6 7 0 1 9 2 8 5 
```



## 🧮 Ejemplo de ejecución
```bash
Ingresa 10 números:
hola
Entrada inválida. Intenta de nuevo
5
8
2
9
1
0
7
6
4
3
Array en orden inverso: 3 4 6 7 0 1 9 2 8 5
```

## 🔍 ¿Cómo invertir un arreglo sin escribir código?
1. Imagina el arreglo como una fila de fichas.

2. Tomas la primera ficha y la intercambias con la última, la segunda con la penúltima, y así sucesivamente, hasta llegar al centro.

3. Para lograrlo eficientemente:
    - Solo recorres la mitad del arreglo (n/2 veces).
    - En cada paso, haces un intercambio entre dos posiciones opuestas.
    - Así no necesitas crear un nuevo arreglo: solo intercambias en su lugar.


## ✍️ Ejemplo mental (paso a paso)

Supongamos que el arreglo es: `[5, 8, 2, 9, 1, 0, 7, 6, 4, 3]`

| i | array[i] | array[n - i - 1] | Acción              |
|---|----------|------------------|--------------------|
| 0 | 5        | 3                | Intercambio 5 ↔️ 3 |
| 1 | 8        | 4                | Intercambio 8 ↔️ 4 |
| 2 | 2        | 6                | Intercambio 2 ↔️ 6 |
| 3 | 9        | 7                | Intercambio 9 ↔️ 7 |
| 4 | 1        | 0                | Intercambio 1 ↔️ 0 |

A partir de ahí ya llegamos al centro, ¡inversión completa!

Resultado: `[3, 4, 6, 7, 0, 1, 9, 2, 8, 5]`


## 🎓 Conclusión

- ✅ Este algoritmo tiene **complejidad lineal O(n)**, ya que se recorre el arreglo una sola vez.
- ✅ La inversión del arreglo se realiza en O(n/2), equivalente a O(n) en notación Big-O.
- ✅ Solo se recorrió la mitad del arreglo, optimizando el número de operaciones.
- ✅ No se utilizó memoria adicional para otro arreglo, haciéndolo más eficiente en espacio.


## 🧠 Conocimientos aplicados

- Validación robusta de entrada de usuario usando cin.
- Algoritmo de inversión de arreglos en su lugar.
- Manipulación de arreglos con índices.
- Manejo básico de bucles for.


## ✅ Lista de verificación técnica

| Requisito                                               | Estado     |
|----------------------------------------------------------|------------|
| Validación robusta de entradas numéricas (`cin`) | ✅ Cumplido |
| Lectura del arreglo completo | ✅ Cumplido |
| Inversion eficiente del arreglo (O(n/2)) | ✅ Cumplido |
| Sin uso de arreglos auxiliares | ✅ Cumplido |
| Formato de salida claro y ordenado | ✅ Cumplido |
