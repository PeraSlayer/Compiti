#include "iostream"
#define log(x) std::cout << x << std::endl; // macro print
#define input(x) std::cin >> x;             // macro input

int n;

int *array_return()
{
  log("inserisci la lunghezza dell' array");
  input(n);
  int *array = new int[n]; // creo l' array nel heap invece che nello stack e vado ad assegnare il suo indirizzo di memoria;
  int *ptr2 = array;
  int scelta;
  log("Vuoi riempire l' array manualmente o in modo automatico?");
  log("1 = manuale \n 2 = automatico");

  do
  {
    input(scelta);
    /*if (scelta == 1)
    {
      log("Inserisci i numeri:");
      for (int i = 0; i < n; ++i)
      {
        input(*(array + i));
      }
    }
    else if (scelta == 2)
    {
      for (int i = 0; i < n; ++i)
      {
        *(array + i) = i; // Carico l'array
      }
    }
    else
    {
      log("Scelta non valida. Riprova:");
    }
  } while (scelta != 1 && scelta != 2);*/
  }while (scelta != 1 && scelta != 2);
  return array; // ritorna l' indirizzo di memoria
}

void print_array(int *ptr) // stampa l' array sfruttando i puntatori
{
  for (int i = 0; i < n; ++i)
  {
    log(*(ptr + i));
  }
}

void add(int *&ptr)
{
  int x;
  log("inserisci il valore d' aggiungere");
  input(x);
  std::cout << "indirizzo ptr: " << ptr << "\n";
  int *array2 = new int[n + 1];
  int *ptr2 = array2;

  std::cout << "indirizzo ptr2: " << ptr2 << "\n";
  for (size_t i = 0; i < n; i++)
  {
    ptr2[i] = ptr[i];
  }
  ptr2[n] = x;
  n++;

  delete[] ptr;

  ptr = ptr2;

  log("array1:")
      print_array(ptr);
}

void remove(int *ptr)
{
  int x;

  log("Inserisci l' elemento da eliminare");
  input(x);

  for (size_t i = 0; i < n; i++)
  {
    if (*(ptr + i) == x) // è come se ci fosse scritto array[i]==x
    {
      for (size_t j = i; j < n; j++)
      {
        int temp = *(ptr + j); // swap
        *(ptr + j) = *(ptr + j + 1);
        *(ptr + j + 1) = temp;
      }
      n--; // accorcio la dimensione dell' array
      break;
    }
  }
  log("nuovo array");
  print_array(ptr);
}

int main()
{
  // al puntatore ptr viene assegnato il valore di ritorno di Array return
  int *ptr = array_return(); // che è l' indirizzo di array
  print_array(ptr); //stampo l' array
  add(ptr);    // aggiungo un elemento
  remove(ptr); // rimuovo un elemento

  return 0;
}