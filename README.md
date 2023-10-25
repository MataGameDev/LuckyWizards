# LuckyWizards
a 3er Person Shooter but with Wizards 

NOTAS PARA LOS DEVELOPERS 

1.-CADA UNO TIENE SU PROPIA CARPETA DE TRABAJO , ESTO QUIERE DECIR QUE TODO LO QUE USTEDES DESARROLLEN TIENE QUE SER TRABAJADO EN ESA CARPETA , TIENEN ESTRICTAMENTE PROHIBIDO TRABAJAR DENTRO DE LA CARPETA DEL PROYECTO PRINCIPAL
A MENOS QUE LO QUE SE ENCUENTREN DESARROLLANDO ESTE COMPLETADO , POR NINGUN MOTIVO PUEDEN HACER UN COMMIT HACIA EL GITHUB SIN ANTES AVISAR EN EL GRUPO DE WHATSAPP Y NO RECIBIR 2 CONFIRMACIONES POR PARTE DEL EQUIPO.

2.-LAS CARPETAS DEL PROYECTO PRINCIPAL SOLO RECIBIRAN TRABAJOS YA CONCLUIDOS , ESTO PARA EVITAR PROBLEMAS DE COMPATIBILIDAD ENTRE TODOS LOS PROYECTOS.

3.-TODOS LOS CONTENIDOS DESCARGABLES QUE QUIERAN AÑADIR AL PROYECTO SE AÑADEN AL RAWCONTENT Y POSTERIORMENTE AL PROYECTO A SU CARPETA , QUEDA PROHIBIDO AÑADIR ALGO DEL RAWCONTENT DIRECTAMENTE A LA CARPETA DEL PROYECTO FINAL.

4.-TODOS SUS TRABAJOS TIENEN QUE QUEDAR DOCUMENTADOS DENTRO DE ESTE README , CUALQUIER CAMBIO HECHO AL PROYECTO SI NO ES DOCUMENTADO SERA CONTADO COMO NO TRABAJADO.

5.-LA FECHA PARA LA FINALIZACION DEL PROYECTO ES EL 23 DE OCTUBRE DEL 2023 , CUALQUIER NECESIDAD DE CAMBIO DESPUES DE ESA FECHA CONTARA COMO NO TRABAJADO. LA BUILD DEL PROYECTO TIENE QUE ESTAR LISTA EL 24 DE OCTUBRE DEL 2023.
6.-RECUERDA QUE TRABAJAR EN EQUIPO EN UN PROYECTO DE DESAROLLO DE VIDEOJUEGOS PUEDE SER COMPLEJO, Y ES IMPORTANTE MANTENER UNA COMUNICACIÓN EFECTIVA Y UN ENFOQUE DISCIPLINADO EN CUANTO AL CONTROL DE VERSIONES.

## Problemas conocidos de la versión actual:
- El botón de crear sesión si generá la sesion por el OnlineSubsystem, pero se mantiene en el nivel cargado (Menús), no se traspasa al nivel de gameplay.
- Sistema de vida no está implementado a pesar de que existen sus variables.
- Funcionamiento incorrecto del 'WBP_HUD' en sistema en linea. Parece ser un fallo de Replicación, el cliente usa el widget del servidor y viceversa.
## Alexander 0.0.1: 
- se añadio la estamina a el personaje principal este estamina baja cuando el jugador se mueve de la manera que sea y se regenera cuando el jugador esta quieto.
## Alexander 0.0.2: 
- se agrego la mecanica que baja la velocidad de movimineto del jugador con respecto a la estamina y sube cuando esta misma incrementa (cuando esta quieto maximo de estamina
  100, maximo de velocidad de movimiento 500).
## Vladimir 0.0.3 (Cosas funkys que hizo Vladi pero no sabe ni que pedo con el numero de version UwU):
- Configuracion de multijugador subsystem de Steam.
- Implementacion de assets y skeletal mesh del player.
- Animaciones basicas del player.
- Watershoot rework.
- Implementacion de vida al personaje.
## Miguel 0.0.4:
- Se añadieron 3 efectos de particulas mediante el uso de Niagara System para la habilidad del dash
## Alexander 0.0.5:
- Se añadio la mecanica de poner un muro que crece con el paso del tiempo. 
## Miguel 0.0.6:
- Se añadio el Level Design para el combate multiplayer.
- Efecto  para la Bola de fuego.
- Blueprint Disparo de Agua
## EduardoCamarena 0.0.7: 
- Se añadieron 4 'Widget Blueprints'
 - 'MainMenu' : Widget principal para el inicio del juego, puede mostrar los otros 3 WBP, cerrar el juego y cargar el nivel principal.
 - 'Options' : Maneja las opciones de resolucion y tipo de pantalla del juego, actualmente no funcional el cambio de resolución en modo ventana.
 - 'HowToPlay' : Muestra imagenes que serán modificadas en un futuro para mostrar controles y mecanicas del juego.
 - 'Credits' : Muestra nombres y trabajos de los desarrolladores en el proyecto.
- Se modificó el nivel predeterminado de la build del proyecto para mostrar el nivel de menús al inicio.
- Se creó un archivo de configuración 'DefaultGameUserSettings' para la modificación de resoluciones y tipos de pantalla.
- Se añadió un icono de proyecto para mostrar en editor.
## EduardoCamarena 0.0.8:
- Se añadio dos nuevos WidgetBlueprint correspondiente al HUD del jugador y el submenú de botones para jugar.
- Se añadieron 3 assets de texturas para iconos del HUD y la pantalla del tutorial.
### Cambios fuera de carpeta
- Se modificó el 'LuckyWizardsCharacter.cpp' para establecer el nivel a cargar en el sistema online. (NO TESTEADO)
- Se modificó la 'BP_ThirdPersonCharacter'
 - Al iniciar el juego instancia un 'WBP_HUD' asignado al jugador. (Se desconoce su comportamiento en linea)
 - Se creó una nueva función 'ModifyStaminaValues', llamada para cambiar el valor de la stamina del jugador y actualizar el HUD widget al mismo tiempo, aprovechando para limitar el valor (0-100) y funcionar universalmente con reducciones o aumentos. TODO, borrar las implementaciones previas de reducciones/aumentos.
