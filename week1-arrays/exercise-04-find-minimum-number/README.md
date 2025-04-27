# 🧠 Ejercicio 4 — Encontrar el valor mínimo y su índice en un arreglo
Este programa determina cuál es el valor más pequeño dentro de un array de ``n`` números y en qué índice (posición) se encuentra.

## 🧪 Requisitos del programa
- El usuario debe ingresar primero la longitud del arreglo (máximo 100).
- Validar que la longitud esté en el rango [1, 100].
- Permitir ingresar los elementos del arreglo.
- Encontrar correctamente:
- El valor mínimo del arreglo.
- La posición (índice) del valor mínimo.
- Mostrar el resultado en pantalla.

## 📥 Entrada esperada

```yaml
Ingrese la longitud del array: 4
Ingrese los 4 elementos del array (separado por espacios): 8 4 9 2

```
## 📤 Salida esperada

```yaml
El numero minimo es 2 y su posicion es 3
```

- Si se ingresa un tamaño del arreglo fuera del rango.
```yaml
Fuera del rango (1 - 100)
Ingrese nuevamente: 
```
- Si se ingresa un valor distinto a un número entero.
```yaml
Entrada invalida. Intenta de nuevo:
```


## 🎓 Conclusión
En esta clase reforzamos habilidades fundamentales de programación en C++, como: 

- Control de entradas, uso de referencias, modularización y validación de datos.
- Logramos implementar una solución limpia y eficiente en ``O(n)`` para encontrar el valor mínimo y su índice en un arreglo.
- Estas bases son esenciales para trabajar con estructuras de datos y optimizar algoritmos, habilidades clave para entrevistas técnicas y desarrollo de software de alto nivel.

## 🧠 Conocimientos aplicados



## ✅ Lista de verificación técnica

| Requisito                                               | Estado     |
|----------------------------------------------------------|------------|
| Función ``leerEntradaUsuario`` para validar entradas numéricas	| ✅
| Función ``leerDatoEntradaLongitudArray`` que valida rango (1 a 100)	| ✅
| Función ``llenarDatosArray`` que llena el arreglo con entradas del usuario	| ✅
| Función ``encontrarValorMinimoPosicion`` para buscar valor mínimo e índice	| ✅
| Paso de variables por referencia en funciones	| ✅
| Uso correcto de ``cin.clear()`` y ``cin.ignore()`` para evitar bucles infinitos	| ✅
| Modularización adecuada (funciones separadas por tarea)	| ✅
| Código limpio, claro, bien indentado y sin redundancias	| ✅
| Complejidad lineal ``O(n)`` para la búsqueda del mínimo	| ✅
| Código compila y corre correctamente sin advertencias	| ✅