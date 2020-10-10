Problema a solucionar:

Se desea contar los muertos que hay en cada país  por COVID-19, estos datos están en un archivo .csv y se desea usar paralelismo para que arroje un resultado rápido.

Referencias de programación:

http://progra.usm.cl/apunte/c/contar-palabras.html
https://es.stackoverflow.com/questions/47579/c%C3%B3mo-leer-datos-individuales-de-archivo-csv-en-c
Diseño PCAM

  Particionado:
    T1: Cargar archivo.
    T2: Hacer una lista con los países que hay en el archivo.
    T3: Crear una matriz con cada país y asignarles el valor de 0.
    T4: Del archivo cargado, contar los muertos por país.
    T5: Asignarle a cada país el número de muertos que hay en ese país.
    t6: Ordena ascendentemente los países con más casos de muertos.
    T7: Generar salida del programa.



  Comunicación:
 
  ![](https://i.imgur.com/WsmpPnV.png)

 ![](https://i.imgur.com/blOxhUl.png)

 

  Aglomeración:
  
    Replicación de procesos: [T1], [T2], [T3], [T4], [T5], [T6]
    
    Clúster de tareas:       [T1-T2] [T5-T6] [T3] [T4]
    
    Cargado de datos: [T1]
    
    Guardado de datos: [T6]
    
    Disposición de datos: [T5]
    
    Procesado de datos: [T4]
