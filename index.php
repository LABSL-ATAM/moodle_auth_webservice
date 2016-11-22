<!DOCTYPE html>
<html>  

<?php
include("verif.inc");
echo $header_bit;
?>

<body>
<h1 style="color: grey;">Autentificación</h1>

<div>
    <p>Es necesario autentificarse.</p>
</div>

<div class="content">
<div align="right">
    <form id="formulario" method="post" action="submit.php">
        <fieldset>
            <legend>Login</legend>
            Nombre de Usuario: <input class="elemento" type="text" placeholder="Nombre de Usuario" name="nombreapellido" required>
            <br/>
            Contraseña: <input class="elemento" type="password" placeholder="Contraseña" name="pass" required>
        </fieldset>
        <button class="button" type="submit" value="<?php echo $_SESSION['secreto'];?>" name="formSubmit">INGRESAR</button>
    </form>
</div>
</div>


</body>
</html>
