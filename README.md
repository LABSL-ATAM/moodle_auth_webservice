# Form Moodle

Este es un ejemplo de formulario de autenticación para Moodle.

La idea es un cliente de autenticación externo, en php, para embeber desde otras
páginas/proyectos.

Usando el nombre de usuario y el password, se autentifica, obtiene un token y
muestra las últimas cinco entradas del foro general, la información del sitio y
del usuario.

# Configuración

Cambiar la dirección del sitio y el nombre del servicio web en el archivo
__verif.inc__.


## Funciones de Moodle

* core_webservice_get_site_info
* mod_forum_get_forum_discussions_paginated
* core_user_view_user_profile


# Info sobre webservices

## How it works

This simple example will give you an idea of how our web services infrastructure works.

  *  The client sends a username and password to the web service login script.
  *  The script returns a token for that user account.
  *  The client calls a particular web service function on a protocol server including the token .
  *  The protocol server uses the token to check that the user can call the function.
  *  The protocol server call the matching external function, located in a externallib.php file inside the relevant module.
  *  The external function checks that the current user has_capability to do this operation.
  *  The external function calls the matching Moodle core function (in lib.php usually).
  *  The core function can return a result to the external function.
  *  The external function will return a result to the protocol server.
  *  The protocol server returns the result to the client.

## Licencia

Ver "copying".
WTFPL (MarxBro @ LABORATORIO DE SOFTWARE LIBRE DEL ATAM).
