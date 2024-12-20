// Función para hacer scroll suave a una sección
function scrollToSection(id) {
  document.getElementById(id).scrollIntoView({ behavior: 'smooth' });
}

// Función para mostrar/ocultar las definiciones
function showDefinitions() {
  const definitions = document.getElementById('definitions');
  definitions.classList.toggle('hidden');
}
