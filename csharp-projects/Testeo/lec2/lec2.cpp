Manejo de procesos – Sistemas Operativos
Podemos decir que un sistema operativo es el programa fundamental que controla y coordina todos los
recursos de hardware y software de una computadora. Actúa como intermediario entre el hardware y las
aplicaciones de software, permitiendo que interactúen de manera eficiente y segura.
Uno de los aspectos principales para la implementación de los sistemas operativos es la administración de
procesos. Un proceso es una instancia en ejecución de un programa. Puede ser una aplicación de usuario, un
servicio del sistema o incluso una tarea en segundo plano (por ejemplo, un antivirus que monitorea amenazas
de forma continua). Los sistemas operativos se encargan de gestionar y coordinar estos procesos, asignándoles
recursos, programando su ejecución y garantizando que se ejecuten de manera ordenada y sin conflictos.
Para comprender mejor cómo se manejan los procesos, utilizaremos a las listas enlazadas como analogía. En
este laboratorio, implementaremos una lista enlazada utilizando nodos de procesos. Cada nodo representará
un proceso, con los siguientes atributos: un identificador único, un nombre, una prioridad (valor entre 0 y 9
donde 0 representa la máxima prioridad para el sistema) y un tiempo de CPU necesario para su ejecución. A
través de esta implementación, exploraremos diversas operaciones con listas que contienen nodos compuestos
por distintos datos.
PREGUNTA 1 (3 puntos)
a) Implemente la lista enlazada que se encargará de almacenar los procesos de sistema operativo. Recuerden
que los campos almacenados son los siguientes:
• Identificador.
• Descripción.
• Prioridad.
• Tiempo de CPU.
Debe crear una función que permita leer los datos desde el teclado.
b) Implemente una función que reciba una lista de procesos y una prioridad (valor numérico). Su función debe
mostrar los datos de todos los procesos que tengan la prioridad dada como dato.
PREGUNTA 2 (3 puntos)
a) Implemente una función que reciba una lista enlazada con el mismo formato de la pregunta anterior. Su
programa debe ordenar los elementos de la lista tomando en cuenta la prioridad. Deberá mostrar primero
los procesos con el menor valor de prioridad.
b) Implemente una función que reciba la lista enlazada (ordenada por prioridad) y los datos asociados a un
proceso. Su función debe agregar el nodo en la posición correcta, de forma que se mantenga el orden por
prioridad.