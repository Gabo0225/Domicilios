# 🍗 PollosHermanos - Sistema de Pedidos en C

Este programa implementa un sistema de pedidos para un restaurante llamado **Pollos Hermanos**, desarrollado en **C**.  
Permite al usuario elegir diferentes productos del menú, agregar varios ítems a la orden y obtener al final un desglose con el total a pagar.  

---

## 📌 Características

- Menú con varias categorías:
  - Pollo asado
  - Pollo broster
  - Arroz Paisa
  - Pechuga a la plancha
  - Adicionales
  - Salchipapa
  - Gaseosa
  - Cerveza
- Submenús con diferentes presentaciones y precios.
- Opción de **volver atrás (0)** en caso de equivocarse.
- Posibilidad de **seguir agregando productos** a la orden hasta que el usuario decida finalizar.
- Desglose completo de:
  - Productos seleccionados.
  - Precio de cada uno.
  - Total de la compra.

---

## ⚙️ Funcionamiento

1. El programa muestra el **menú principal**.  
2. El usuario selecciona una categoría (ej: Pollo asado).  
3. Se muestran las **opciones disponibles** dentro de esa categoría.  
   - El usuario puede:
     - Elegir un producto.
     - Presionar `0` para volver atrás.  
4. El producto elegido se **guarda en el pedido** junto con su precio.  
5. Al finalizar cada elección, el sistema pregunta:  
    - Deseas agregar algo más? (si/no):
6. Si responde `si`, el ciclo se repite.  
Si responde `no`, el programa imprime el **detalle del pedido** y el **total**.
