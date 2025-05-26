# Planificator de activitati, bazat pe preferintele in timp real ale utilizatorului

## Acesasta aplicatie poate fi utilizata in doua situatii:
- **1**: Utilizatorul poate introduce activitati si preferintele sale in timp real, iar aplicatia va genera un plan de activitati optimizat.
- **2**: Utilizatorul poate folosi aplicatia ca un mini-joc: se poate trasnpune in rolul unui turist care viziteaza un nou oras si participa la diverse activitati, insa are diferite constrangeri: energie, bani, timp. Astfel, jucatorul trebuie sa aleaga activitatile care ii sunt oportune la momentul respectiv pentru a primi la final achievement-ul de "Itinerariu echilibrat".


## Functionalitati
-[ ] Activitate
  - are 3 subclase:
    - [ ] Activitate gastronomica
      - stocheaza in plus tipul restaurantului si meniul sau;
      - are functionaliati precum alegerea mancarii in functie de buget si energie, bonusuri/penalizari in functie de starea preparatului respectiv;
    - [ ] Activitate culturala
      - stocheaza in plus unul dintre cele 4 tipuri de activitati culturale, alaturi de cate un fun fact unic legat de respectivul obiectiv si un suvenir ce poate fi obtinut;
      - aceste activitati pot fi parcurse in mai multe moduri, in functie de buget si energie, iar la final utilizatorul primeste si un suvenir specific;
    - [ ] Activitate de divertisment
      - stocheaza in plus tipul de activitate de divertisment;
      - aceste activitati pot fi parcurse in mai multe moduri, in functie de buget si energie, aceste activitati consumand cea mai multa energie, de aceea utilizatorul poate alege sa-si diminueze cantitatea de energie scazuta cu cate o bautura ce il relaxeaza:) ;
- [ ] Oras
  - fiecare instanta tine evidenta activitatilor din acel oras in functie de ore;
- [ ] Itinerariu
  - aici punem activitile alese de utilizator.


Programul ne tine la curent cu numarul de activitati de fiecare tip parcurse, sub forma unor hunger-bars, a bugetului ramas si a energiei curente. 
In plus, la final, primim lista de suveniruri acumulate, se afiseaza si o harta a orasului si se calculeaza distanta parcursa intre obiective si suntem anuntati daca itinerariul nostru este sau nu unul echilibrat.
