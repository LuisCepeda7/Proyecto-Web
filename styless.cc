/* Estilos Generales */
body {
  font-family: "Helvetica Neue", Arial, sans-serif;
  margin: 0;
  padding: 0;
  background-color: #000; /* Fondo negro */
  color: #f5f5f5; /* Texto claro */
}

/* Encabezado con logo a la derecha */
header {
  display: flex;
  justify-content: space-between;
  align-items: center;
  background: #1c1c1c; /* Gris oscuro elegante */
  padding: 20px;
}

.header-left {
  max-width: 60%;
}

.header-right {
  max-width: 20%;
  text-align: right;
}

.logo {
  max-height: 60px; /* Ajusta el tamaño del logo a tu gusto */
}

header h1 {
  font-size: 2.2rem;
  font-weight: bold;
  color: #f0c75e; /* Dorado elegante */
  margin: 0;
  animation: glow 1.5s infinite alternate;
}

header p {
  margin: 10px 0 20px;
  color: #ddd;
}

header button {
  background: #f0c75e; /* Botón dorado */
  color: #000;
  border: none;
  padding: 10px 20px;
  cursor: pointer;
  font-weight: bold;
  border-radius: 5px;
}

header button:hover {
  background: #dab450;
}

/* Navegación */
nav ul {
  display: flex;
  justify-content: center;
  background: #2e2e2e;
  margin: 0;
  padding: 10px 0;
  list-style: none;
}

nav ul li a {
  color: #f0c75e;
  text-decoration: none;
  margin: 0 15px;
  font-weight: bold;
  transition: color 0.3s;
}

nav ul li a:hover {
  color: #fff;
}

/* Contenido Principal */
main {
  padding: 20px;
}

section {
  margin-bottom: 40px;
}

section h2 {
  color: #f0c75e;
  border-bottom: 1px solid #444;
  padding-bottom: 10px;
}

button {
  background: #f0c75e;
  color: #000;
  border: none;
  padding: 10px 15px;
  cursor: pointer;
  margin: 10px 0;
  font-weight: bold;
  border-radius: 5px;
  transition: background 0.3s;
}

button:hover {
  background: #dab450;
}

/* Video */
.video-container {
  text-align: center;
  margin-top: 20px;
}

video {
  max-width: 100%;
  height: auto;
  border: 2px solid #f0c75e;
  border-radius: 10px;
  background: #000;
}

/* Definiciones ocultas al inicio */
.hidden {
  display: none;
}

/* Animación del texto del encabezado */
@keyframes glow {
  from {
    text-shadow: 0 0 10px #f0c75e;
  }
  to {
    text-shadow: 0 0 20px #f0c75e;
  }
}

/* Footer */
footer {
  text-align: center;
  padding: 10px;
  background: #1c1c1c;
  color: #f5f5f5;
}

/* Formularios */
form {
  display: flex;
  flex-direction: column;
  max-width: 300px;
}

form input, form textarea {
  background: #2e2e2e;
  color: #f5f5f5;
  border: 1px solid #444;
  padding: 10px;
  margin-bottom: 10px;
  border-radius: 3px;
}

/* Listas adicionales */
ul {
  margin-top: 15px;
  line-height: 1.6;
}
