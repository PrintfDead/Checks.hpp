# Checks.hpp
## Informacion
- Checks.hpp es una libreria para ver si existe archivo, directorio y si en el sistema existe shell.

## Usage:
```cpp
#include "Checks.hpp"

int main() {
  //Verifica si el archivo se encuentra en el directorio actual, si quieres ver una ruta en especifico especifica la ruta completa
  if(checkFile(filename)) { // Si existe
    // code    
  } else { // Si no existe
    //code
  }
  // Verifica si la carpeta se encuentra en el directorio actual, si quieres ver una ruta en especifico especifica la ruta completa.
  if(checkFolder(foldername or path)) { // Si existe
    // code
  } else { // Si no existe
    //code
  }

  //Verifica si el sistema tiene shell (Si es true podras usar comandos de UNIX/Linux. Si es lo contrario, usa comando de Windows)
  if(checkShell()) { // Si existe
    // code
  } else { // Si no existe
    //code
  }
}
```
