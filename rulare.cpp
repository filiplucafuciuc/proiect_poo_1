#include "rulare.h"

void Rulare::incarcaActivitati() {
    oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Mic dejun traditional", "8:00", "Restaurant Oscar", 12, 45, "romaneasca"));
oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cafea de dimineata", "8:00", "Fika", 3, 88, "scandinava"));

    oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Palatul Culturii", "08:00", "Palatul Culturii", 55, 20, "muzeu",
    "Palatul Culturii are 298 de camere si a fost construit pe ruinele vechiului Palat Domnesc al Moldovei."));
    oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "cultural", "Plimbare prin Copou", "08:00", "Parcul Copou", 77, 31, "istoric",
        "Parcul Copou gazduieste Teiul lui Eminescu, vechi de peste 500 de ani."));

oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jogging de dimineata", "8:00", "Stadionul Emil Alexandrescu", 64, 7, "sport"));
oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Joaca in Escape Room", "8:00", "LockedIn Iasi", 28, 60, "aventura"));


oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Briose si ceai", "9:00", "Montmartre", 0, 0, "britanica"));
oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Croissante si espresso", "9:00", "Cuib", 10, 10, "franceza"));

    oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Mitropolia Moldovei", "09:00", "Mitropolia Moldovei si Bucovinei", 89, 4, "religios",
    "Mitropolia adaposteste moastele Sfintei Parascheva, unul dintre cele mai importante pelerinaje ortodoxe."));
    oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura la Libraria Junimea", "09:00", "Libraria Junimea", 29, 59, "literatura",
        "Libraria Junimea este un punct cultural activ inca din perioada interbelica."));

oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Cinematograf matinal", "9:00", "Cinema Victoria", 50, 50, "film"));
oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Trambulina si distractie", "9:00", "Salto Parc", 22, 38, "activitate fizica"));


oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Gustare urbana", "11:00", "Bistro La Castel", 19, 82, "europeana"));
oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Tarta cu fructe", "11:00", "Ristretto", 92, 2, "italiana"));

    oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Unirii", "11:00", "Muzeul Unirii", 48, 36, "muzeu",
    "Muzeul Unirii a fost resedinta lui Alexandru Ioan Cuza cand era domnitor al Moldovei."));
    oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur ghidat la Cetatuia", "11:00", "Manastirea Cetatuia", 22, 69, "istoric",
        "Cetatuia este singura manastire fortificata din Iasi care si-a pastrat zidurile intacte."));

oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Bowling cu prietenii", "11:00", "Club Hunter", 15, 97, "bowling"));
oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Laser tag", "11:00", "LaserMaxx", 67, 14, "aventura"));


oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Pranz la terasa verde", "13:00", "Cafeneaua Piata Unirii", 70, 24, "mediteraneana"));
oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Burger gourmet", "13:00", "The Trumpets", 31, 65, "americana"));

    oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Turnul Goliei", "13:00", "Manastirea Golia", 97, 39, "istoric",
    "Turnul Golia are 120 de trepte si ofera o panorama spectaculoasa asupra orasului."));
    oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Casa Pogor", "13:00", "Casa Pogor", 41, 6, "literatura",
        "Casa Pogor a fost sediul societatii Junimea si gazduieste Muzeul Literaturii Romane."));

oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Relaxare la piscina", "13:00", "Aqua Park", 35, 91, "relaxare"));
oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Spectacol de magie", "13:00", "Magic Land", 5, 55, "show"));


oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Prajitura de casa", "15:00", "Charlotte Dessert House", 13, 37, "frantuzeasca"));
oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Ceai si macarons", "15:00", "Teo's Cafe", 96, 11, "frantuzeasca"));

    oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur ghidat la Sinagoga Mare", "15:00", "Strada Sinagogii", 8, 63, "religios",
    "Este cea mai veche sinagoga din Romania, construita in secolul XVII."));
    oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur la Muzeul Mihail Kogalniceanu", "15:00", "Casa Kogalniceanu", 63, 18, "muzeu",
        "Mihail Kogalniceanu a fost unul dintre cei mai importanti oameni politici ai secolului XIX."));

oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "Mini-golf indoor", "15:00", "Play Again", 61, 88, "recreativ"));
oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "VR Experience", "15:00", "VR Arena", 46, 73, "tehnologie"));


oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Degustare vinuri", "16:00", "Vinoteca Gramma", 26, 93, "romaneasca"));
oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Salate gourmet", "16:00", "Green House", 73, 58, "vegana"));

    oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Hanul Trei Sarmale", "16:00", "Bucium", 70, 28, "istoric",
    "Hanul este mentionat in scrierile lui Ion Creanga si Mihai Eminescu."));
    oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur la Bojdeuca lui Creanga", "16:00", "Bojdeuca lui Creanga", 24, 75, "literatura",
        "Este prima casa memoriala din Romania, inaugurata in 1918."));

oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "divertisment", "Karaoke", "16:00", "Voice Club", 58, 26, "muzica"));
oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "divertisment", "Escape Room tematic", "16:00", "Xcape Room", 91, 49, "aventura"));


oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cofetarie artizanala", "17:00", "Zori", 30, 80, "italiana"));
oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Pizza napolitana", "17:00", "Mamma Mia", 84, 83, "italiana"));

    oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur la Biblioteca Centrala", "17:00", "BCU Iasi", 9, 48, "literatura",
    "Biblioteca are o sala de lectura in stil neoclasic si peste un milion de volume."));
    oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Biserica Trei Ierarhi", "17:00", "Str. Golia", 46, 50, "religios",
        "Biserica este decorata cu peste 30 de registre de motive sculpturale unice in lume."));

oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jocuri de societate", "17:00", "Board Games Hub", 93, 18, "boardgames"));
oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "divertisment", "Parc de trambuline", "17:00", "Jump House", 17, 68, "sportiv"));


oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cina la lumina de lumanari", "19:00", "Little Texas", 87, 93, "americana"));
oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Specialitati asiatice", "19:00", "Zen Sushi", 39, 77, "japoneza"));

    oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Poni-Cernatescu", "19:00", "Strada Mihail Kogalniceanu", 77, 12, "muzeu",
    "Muzeul este dedicat savantilor Petru Poni si Radu Cernatescu, pionieri ai chimiei romanesti."));
    oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura de seara la Libraria Humanitas", "19:00", "Libraria Humanitas", 62, 69, "literatura",
        "Humanitas Iasi organizeaza frecvent seri literare si lansari de carte."));

oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "divertisment", "Stand-up comedy", "19:00", "Times Pub", 81, 54, "comedie"));
oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "divertisment", "Pub quiz", "19:00", "Oxford Pub", 14, 27, "social"));


oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Desert de noapte", "21:00", "La Folie", 36, 5, "frantuzeasca"));
oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cocktailuri rafinate", "21:00", "SkyBar", 56, 100, "internationala"));

    oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur de noapte in Piata Unirii", "21:00", "Piata Unirii", 60, 22, "istoric",
    "In Piata Unirii a avut loc sarbatorirea Unirii Principatelor din 1859."));
    oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "cultural", "Rugaciune de noapte la Manastirea Galata", "21:00", "Dealul Galata", 18, 59, "religios",
        "Manastirea Galata a fost ridicata de Petru Schiopul in 1582 si are o panorama deosebita asupra Iasului."));

oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "divertisment", "Party tematic", "21:00", "Skin Club", 78, 96, "distractie"));
oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "divertisment", "Seara dansanta", "21:00", "The Trumpets", 94, 42, "dans"));


oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Late-night snack", "23:00", "Shaormeria Bacania", 45, 79, "orientala"));
oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Pasta de noapte", "23:00", "Piazzetta", 65, 3, "italiana"));

    oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "cultural", "Noaptea Muzeelor la Muzeul Stiintei si Tehnicii", "23:00", "Palatul Copiilor", 31, 44, "muzeu",
    "Muzeul are un pendul Foucault functional care demonstreaza rotatia Pamantului."));
    oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Catedrala Catolica", "23:00", "Bulevardul Stefan cel Mare", 32, 17, "religios",
        "Catedrala a fost construita in stil neoclasic in 1782 si este un punct de convergenta ecumenica."));

oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "divertisment", "Afterparty", "23:00", "Club XS", 11, 16, "club"));
oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jocuri video in retea", "23:00", "Cyber Arena", 2, 76, "gaming"));






    oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Mic dejun la French Bakery", "8:00", "French Bakery", 10, 20, "frantuzeasca"));
oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cafea la Origo", "8:00", "Origo", 15, 25, "specialty coffee"));

    oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizită la Muzeul Național de Artă", "08:00", "Calea Victoriei 49-53", 55, 28, "muzeu",
    "Muzeul Național de Artă din București adăpostește colecții valoroase de artă românească și europeană."));
    oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur ghidat în Centrul Vechi", "08:00", "Centrul Istoric", 42, 14, "istoric",
        "Un ghid specializat le prezintă turiștilor clădirile vechi și poveștile Bucureștiului de odinioară."));

oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jogging in Parcul Herastrau", "8:00", "Parcul Herastrau", 30, 40, "sport"));
oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Yoga in Parcul Tineretului", "8:00", "Parcul Tineretului", 35, 45, "wellness"));

oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Brunch la Simbio", "9:00", "Simbio", 12, 42, "moderna"));
oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Mic dejun traditional la Lacrimi si Sfinti", "9:00", "Lacrimi si Sfinti", 14, 38, "romaneasca"));

    oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizită la Patriarhia Română", "09:00", "Dealul Mitropoliei", 64, 33, "religios",
    "Pelerinii urcă Dealul Mitropoliei pentru a vizita sediul Bisericii Ortodoxe Române."));
    oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectură la Librăria Cărturești", "09:00", "Str. Verona", 25, 45, "literatura",
        "Librăria Cărturești găzduiește sesiuni matinale de lectură pentru pasionații de literatură."));

oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Escape Room – Trapped", "9:00", "Trapped Escape Room", 21, 49, "aventura"));
oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Bowling la Mega Mall", "9:00", "Mega Mall", 23, 50, "recreatie"));

    oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz la Caru' cu Bere", "11:00", "Caru' cu Bere", 26, 51, "romaneasca"));
oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pizza la Pizzamania", "11:00", "Pizzamania", 28, 53, "italiana"));

    oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizită la Muzeul Satului", "11:00", "Șos. Kiseleff 28-30", 70, 19, "muzeu",
    "Vizitatorii descoperă arhitectura tradițională românească într-un cadru natural autentic."));
    oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "cultural", "Plimbare prin Curtea Veche", "11:00", "Str. Franceză", 36, 39, "istoric",
        "Curtea Veche le oferă turiștilor o incursiune în istoria voievodală a orașului."));

oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "divertisment", "Teren de tenis la Dinamo", "11:00", "Club Dinamo", 34, 59, "sport"));
oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "divertisment", "Film la Cinema City AFI", "11:00", "AFI Palace Cotroceni", 36, 60, "cinema"));

oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Burgeri la Vivo", "13:00", "Vivo Fusion Food Bar", 38, 61, "americana"));
oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Paste la Trattoria Il Calcio", "13:00", "Il Calcio", 40, 62, "italiana"));

    oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectură în Parcul Cișmigiu", "13:00", "Parcul Cișmigiu", 18, 27, "literatura",
    "Bucureștenii se adună în Parcul Cișmigiu pentru a participa la o sesiune colectivă de lectură."));
    oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizită la Biserica Stavropoleos", "13:00", "Str. Stavropoleos", 44, 15, "religios",
        "Biserica Stavropoleos impresionează vizitatorii prin arhitectura sa brâncovenească și atmosfera pașnică."));

oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "divertisment", "Laser Tag la Laser Maxx", "13:00", "Laser Maxx", 46, 67, "adrenalina"));
oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "divertisment", "Karaoke in Old City", "13:00", "Old City", 48, 68, "muzica"));

oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gogosi la Donuterie", "15:00", "Donuterie Bucuresti", 50, 70, "deserturi"));
oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cafea la Origo", "15:00", "Origo", 52, 71, "cafenea"));

    oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizită la Muzeul George Enescu", "15:00", "Calea Victoriei 141", 58, 21, "muzeu",
    "Muzeul îl comemorează pe compozitorul George Enescu prin exponate și înregistrări rare."));
    oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur istoric la Palatul Regal", "15:00", "Calea Victoriei", 27, 36, "istoric",
        "Un ghid prezintă istoria Palatului Regal și rolul său în viața politică a țării."));

oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "divertisment", "Patinaj la Cismigiu", "15:00", "Parcul Cismigiu", 58, 77, "outdoor"));
oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "divertisment", "Jocuri la Vortex VR Arena", "15:00", "Vortex VR", 60, 78, "virtual reality"));

oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Ceai la Bernschutz", "16:00", "Bernschutz & Co.", 62, 80, "ceainarie"));
oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Prajituri la French Revolution", "16:00", "French Revolution", 64, 82, "frantuzeasca"));

    oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "cultural", "Rugăciune de după-amiază la Biserica Sf. Spiridon", "16:00", "Calea Șerban Vodă", 47, 12, "religios",
    "Credincioșii se adună la Biserica Sf. Spiridon pentru rugăciunea de după-amiază."));
    oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectură de după-amiază la Biblioteca Națională", "16:00", "Bd. Unirii", 33, 46, "literatura",
        "Biblioteca Națională organizează o lectură publică cu autori contemporani."));

oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "divertisment", "Mini golf la Funland", "16:00", "Funland Bucuresti", 70, 87, "relaxare"));
oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "divertisment", "Boardgames la The Guild Hall", "16:00", "The Guild Hall", 72, 88, "socializare"));

oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Sushi la ZenSushi", "17:00", "ZenSushi", 74, 90, "japoneza"));
oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Shaorma la Dristor Kebap", "17:00", "Dristor Kebap", 76, 91, "orientala"));

    oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizită la Muzeul Colecțiilor de Artă", "17:00", "Calea Victoriei 111", 68, 43, "muzeu",
    "Vizitatorii pot admira colecții private valoroase donate statului român de-a lungul timpului."));
    oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur pietonal prin Cartierul Armenesc", "17:00", "Str. Armenească", 49, 17, "istoric",
        "Un ghid local le povestește participanților istoria comunității armene din București."));

oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "divertisment", "Concert in Control Club", "17:00", "Control Club", 82, 96, "muzica live"));
oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "divertisment", "Spectacol de teatru la TNB", "17:00", "Teatrul National Bucuresti", 84, 97, "teatru"));

oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Zexe Zahana", "19:00", "Zexe Zahana", 86, 98, "romaneasca rafinata"));
oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Tapas la Pata Negra", "19:00", "Pata Negra", 88, 99, "spaniola"));

    oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectură de seară la Librăria Humanitas", "19:00", "Piața Romană", 76, 29, "literatura",
    "Scriitori invitați citesc fragmente din cele mai recente volume în fața publicului."));
    oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizită la Mănăstirea Radu Vodă", "19:00", "Splaiul Independenței", 52, 35, "religios",
        "Mănăstirea Radu Vodă îi primește pe vizitatori cu liniște, istorie și o panoramă deosebită asupra orașului."));

oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "divertisment", "Quiz Night la Energiea", "19:00", "Energiea", 94, 84, "interactiv"));
oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "divertisment", "Petrecere la Expirat", "19:00", "Expirat", 96, 82, "nocturn"));

oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Vinuri la Corks", "21:00", "Corks Cozy Bar", 98, 80, "bar de vinuri"));
oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Desert la Chocolat", "21:00", "Chocolat", 99, 78, "patiserie"));

    oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur nocturn la Palatul Parlamentului", "21:00", "Bd. Națiunile Unite", 59, 50, "istoric",
    "Participanții vizitează Palatul Parlamentului și află detalii despre cea mai mare clădire administrativă din Europa."));
    oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "cultural", "Rugăciune de seară la Catedrala Mântuirii Neamului", "21:00", "Dealul Arsenalului", 72, 31, "religios",
        "Catedrala Mântuirii Neamului oferă un spațiu imens de liniște și reculegere pentru rugăciunea de seară."));

oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "divertisment", "Escape Room – Locked In", "21:00", "Locked In", 93, 72, "aventura"));
oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "divertisment", "Clubbing la Kristal", "21:00", "Kristal Glam Club", 91, 70, "noapte"));

oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Late night burger la Switch.eat", "23:00", "Switch.eat", 89, 68, "street food"));
oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Sandvisuri la M60", "23:00", "M60", 87, 66, "modern"));

    oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "cultural", "Noaptea Muzeelor la Muzeul Antipa", "23:00", "Șos. Kiseleff 1", 88, 19, "muzeu",
    "Muzeul Antipa își deschide porțile pentru vizitatori nocturni care explorează exponatele științifice într-o atmosferă specială."));
    oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectură nocturnă la Biblioteca Metropolitană", "23:00", "Str. Tache Ionescu", 29, 22, "literatura",
        "Biblioteca Metropolitană găzduiește o sesiune specială de lectură nocturnă pentru iubitorii de carte."));
oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "divertisment", "Seara de stand-up la Comics Club", "23:00", "Comics Club", 81, 60, "umor"));
oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "divertisment", "Afterparty la Control", "23:00", "Control Club", 79, 58, "muzica electronica"));







oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Mic dejun la Eggcetera", "8:00", "Eggcetera", 10, 10, "brunch"));
oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cafea la Olivo", "8:00", "Olivo Caffe", 11, 12, "cafenea"));

    oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul de Arta Cluj", "08:00", "Piata Unirii nr. 30", 74, 18, "muzeu",
    "Palatul Banffy găzduiește Muzeul de Artă din Cluj, care expune lucrări valoroase de artă românească și europeană."));
    oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Bastionul Croitorilor", "08:00", "Str. Baba Novac", 52, 36, "istoric",
        "Bastionul Croitorilor face parte din fosta cetate medievală a Clujului și a fost restaurat pentru vizitatori."));

oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jogging in Parcul Central", "8:00", "Parcul Central", 14, 18, "outdoor"));
oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Joaca la Board Games Hub", "8:00", "Leon's Board Games", 15, 20, "board games"));

oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Briose la Meron", "9:00", "Meron Central", 16, 22, "patiserie"));
oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Mic dejun la Nuka Bistro", "9:00", "Nuka Bistro", 17, 24, "fusion"));

    oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectura matinala la Book Corner", "09:00", "Bd. Eroilor", 43, 20, "literatura",
    "Librăria Book Corner organizează sesiuni de lectură și lansări de carte în fiecare dimineață."));
    oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Catedrala Mitropolitana", "09:00", "Piata Avram Iancu", 61, 17, "religios",
        "Catedrala Mitropolitană din Cluj a fost construită în anii '30 și impresionează prin arhitectura sa monumentală."));

oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Escape Room – The Dungeon", "9:00", "The Dungeon", 20, 30, "aventura"));
oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Cinema Victoria", "9:00", "Cinema Victoria", 21, 32, "film"));

oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Smoothie la Sisters", "11:00", "Sisters Cafe", 22, 34, "sanatos"));
oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Brunch la DOT", "11:00", "DOT Cluj", 23, 36, "brunch"));

    oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Etnografic al Transilvaniei", "11:00", "Str. Memorandumului", 66, 28, "muzeu",
    "Muzeul Etnografic prezintă tradițiile și viața rurală din Transilvania prin exponate autentice."));
    oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "cultural", "Plimbare istorica prin centrul vechi", "11:00", "Piata Muzeului", 55, 34, "istoric",
        "Centrul vechi al Clujului păstrează clădiri istorice care oferă o privire asupra epocii medievale."));

oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Mini Golf la Fun Park", "11:00", "Fun Park Cluj", 26, 42, "activ"));
oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Plimbare cu trotineta electrica", "11:00", "Zona centrala Cluj", 27, 44, "urban"));

oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Pizza la Da Pino", "13:00", "Da Pino", 28, 46, "italiana"));
oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Burgeri la Marty", "13:00", "Marty Society", 29, 48, "americana"));

    oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Biserica Franciscana", "13:00", "Piata Muzeului", 28, 44, "religios",
    "Biserica Franciscană a fost construită în secolul al XIV-lea și adăpostește fresce valoroase."));
    oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura in Parcul Central", "13:00", "Parcul Central Simion Barnutiu", 47, 19, "literatura",
        "Participanții citesc în aer liber într-un parc istoric din centrul Clujului."));

oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Realitatea Virtuala la VR Center", "13:00", "VR Center Cluj", 32, 54, "tehnologie"));
oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Bowling la Polus Center", "13:00", "Polus Bowling", 33, 56, "sportiv"));

oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cafea la Narcoffee", "15:00", "Narcoffee Roasters", 34, 58, "specialty"));
oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Clatite la Panemar", "15:00", "Panemar Central", 35, 60, "desert"));

    oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Farmaciei", "15:00", "Piata Unirii", 36, 11, "muzeu",
    "Muzeul Farmaciei funcționează în prima farmacie a Clujului și prezintă instrumente medicale vechi."));
    oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur ghidat la Turnul Croitorilor", "15:00", "Str. Baba Novac", 22, 48, "istoric",
        "Un ghid povestește istoria turnului, parte a fortificației medievale a orașului."));

oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "Teatru la Teatrul National", "15:00", "Teatrul National Cluj", 38, 66, "spectacol"));
oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "Laser Tag", "15:00", "Laser Tag Cluj", 39, 68, "actiune"));

oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Tort la Emese Cake", "16:00", "Emese Cake Studio", 40, 70, "cofetarie"));
oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Inghetata la Delicii", "16:00", "Delicii Cluj", 41, 72, "gelaterie"));

    oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "cultural", "Rugaciune de dupa-amiaza la Biserica Unitariana", "16:00", "Str. 21 Decembrie 1989", 68, 25, "religios",
    "Credincioșii se adună la Biserica Unitariană pentru rugăciunea de după-amiază."));
    oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura de dupa-amiaza la Libraria Humanitas", "16:00", "Str. Universitatii", 41, 38, "literatura",
        "Librăria Humanitas organizează o lectură cu autori contemporani locali."));

oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "divertisment", "Biliard la BarFly", "16:00", "BarFly", 44, 78, "biliard"));
oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "divertisment", "Vizionare stand-up la LOL Club", "16:00", "LOL Comedy Club", 45, 80, "umor"));

oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cina la Casa Boema", "17:00", "Casa Boema", 46, 82, "romaneasca"));
oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Mancare vegana la Samsara", "17:00", "Samsara Foodhouse", 47, 84, "vegan"));

    oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Zoologic", "17:00", "Str. Clinicilor", 33, 59, "muzeu",
    "Muzeul Zoologic expune o varietate impresionantă de specii și exemplare rare."));
    oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Bastionul Tesatorilor", "17:00", "Str. Fortaretei", 62, 14, "istoric",
        "Bastionul Țesătorilor a fost renovat și include expoziții despre istoria breslelor clujene."));

oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "divertisment", "Concurs de trivia", "17:00", "Off the Wall", 50, 90, "quiz"));
oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "divertisment", "Paintball in aer liber", "17:00", "Cluj Outdoor Paintball", 51, 92, "adrenalina"));

oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Cina la Livada", "19:00", "Livada", 52, 94, "contemporan"));
oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Specialitati la Baracca", "19:00", "Baracca Cluj", 53, 96, "european"));

    oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectura la Casa de Cultura a Studentilor", "19:00", "Piata Lucian Blaga", 26, 43, "literatura",
    "Casa de Cultură a Studenților găzduiește un eveniment de lectură cu tineri scriitori."));
    oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Manastirea Nicula (prezentare video)", "19:00", "Spatiu expozitional", 19, 37, "religios",
        "Vizitatorii pot urmări un film documentar despre istoria și icoana făcătoare de minuni de la Nicula."));

oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "divertisment", "Stand-up comedy", "19:00", "Club 99 Cluj", 56, 97, "comedy"));
oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "divertisment", "Concurs karaoke", "19:00", "After Eight", 57, 95, "muzica"));

oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Deserturi la Zama", "21:00", "Zama Bistro", 58, 93, "dulciuri"));
oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Bauturi la Charlie", "21:00", "Charlie Pub", 59, 91, "bar"));

    oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur nocturn la Cetatuia", "21:00", "Dealul Cetatuia", 45, 50, "istoric",
    "Un ghid prezintă istoria Cetățuii în timp ce participanții admiră panorama orașului."));
    oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "cultural", "Rugaciune de seara la Catedrala Greco-Catolica", "21:00", "Str. Motilor", 77, 32, "religios",
        "Catedrala Greco-Catolică oferă o atmosferă liniștită pentru rugăciunea de seară."));

oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "divertisment", "Cinema in aer liber", "21:00", "Iulius Park", 62, 85, "film"));
oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "divertisment", "Board games la The Guild Hall", "21:00", "The Guild Hall", 63, 83, "strategie"));

oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Late night snacks la DOT", "23:00", "DOT Cluj", 64, 81, "nocturn"));
oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Coktailuri la Joben", "23:00", "Joben Bistro", 65, 79, "cocktail"));

    oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "cultural", "Noaptea Muzeelor la Muzeul de Istorie", "23:00", "Str. Daicoviciu", 54, 12, "muzeu",
    "Muzeul de Istorie își deschide porțile noaptea, oferind vizite ghidate și reconstituiri istorice."));
    oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura nocturna la Biblioteca Centrala UBB", "23:00", "Str. Clinicilor", 31, 26, "literatura",
        "Biblioteca Centrală Universitară organizează o sesiune specială de lectură la miezul nopții."));
oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "divertisment", "Clubbing la Euphoria", "23:00", "Euphoria Music Hall", 68, 73, "muzica electronica"));
oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "divertisment", "Party la NOA", "23:00", "NOA Club", 69, 71, "dans"));


}

void Rulare::ruleaza() {
    incarcaActivitati();

    std::cout << "Poti alege dintre: " << Activitate::getNrActivitati() << " activitati!\n";

    int optiune;
    std::string orasAles;

    while (true) {
        std::cout << "Alege un oras:\n";
        for (const auto& [index, nume] : orase) {
            std::cout << index << ". " << nume << "\n";
        }

        try {
            std::cout << "Introdu numarul orasului: ";
            std::cin >> optiune;

            if (orase.count(optiune)) {
                orasAles = orase[optiune];
                break;
            } else {
                throw std::runtime_error("Optiune invalida! Trebuie sa alegi un numar valid.");
            }
        } catch (const std::exception& e) {
            std::cout << "Eroare: " << e.what() << "\n";
        }
    }

    double buget;
    int energie = 100;

    std::cout << "Introdu bugetul tau initial (se recomanda minim 150): ";
    std::cin >> buget;

    for (int ora : ore) {
        // itinerar.alegeActivitatePentruOra(ora, orasAles, oraseActivitati, tipuriActivitati);
        itinerar.alegeActivitatePentruOra(ora, orasAles, oraseActivitati, tipuriActivitati, buget, energie);

    }

    itinerar.afiseaza();


    if (!itinerar.validFinal()) {
        std::cout << "\nItinerarul nu este complet echilibrat.\n";
    } else {
        std::cout << "\nItinerarul este echilibrat si complet!\n";
    }

    std::cout << "\n--- HARTA ACTIVITATILOR ---\n";
    itinerar.afiseazaHarta();

    std::cout << "\nDistanta totala parcursa: "
              << itinerar.calculeazaDistantaTotala()
              << " metri\n";
}
