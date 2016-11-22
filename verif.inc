<?php

/*
    Cambiar debajo la variable sitio por la URL completa del moodle.
    Cambiar debajo la variable servicio_web por el nombre corto del servicio web.
 */ 

$sitio = 'http://www.interneturl.com.ar';
$servicio_web = 'WEB_SERVICE_SHORT_NAME';

$header_bit=<<<EOF
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8">
<link rel="stylesheet" type="text/css" href="site.css">
<title>Autentificación Moodle</title>
</head>
EOF;

// Generar un token
session_start();
session_set_cookie_params(1800,'tmp', $sitio);

// ID de la cookie...
$length = 25;
$randomString = substr(str_shuffle(md5(time())),0,$length);

// Exportar los valores globales, usados en index, submit (validacion), gracias y error.
$_SESSION['secreto'] = $randomString;

global $_SESSION;
global $header_bit;

?>
