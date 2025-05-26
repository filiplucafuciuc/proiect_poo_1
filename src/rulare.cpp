#include "rulare.h"

std::vector<std::string> Rulare::oraseDisponibile = {"Bucuresti", "Iasi", "Cluj"};

void Rulare::incarcaActivitati() {
    std::map<std::string, std::vector<std::pair<std::string, std::string>>> meniuri = {
        {"italiana", {
            {"Paste Carbonara", "satisfactie_bonus"},
            {"Pizza Capriciosa", ""},
            {"Risotto cu fructe de mare", "prost_gatit"}
        }},
        {"asiatica", {
            {"Noodles", ""},
            {"Sushi", "satisfactie_bonus"},
            {"Mochi", ""}
        }},
        {"romaneasca", {
            {"Ciorba de burta", "satisfactie_bonus"},
            {"Sarmale cu mamaliga", ""},
            {"Pomana porcului", "prost_gatit"}
        }},
        {"mexicana", {
            {"Tacos", ""},
            {"Burrito", "satisfactie_bonus"},
            {"Chili con carne", "prost_gatit"}
        }},
        {"frantuzeasca", {
            {"Croissant cu dulceturi rafinate", ""},
            {"Porumbel la cuptor", "satisfactie_bonus"},
            {"Foie gras", "prost_gatit"}
        }}
    };

    oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "gastronomic", "Mic dejun italian", "08:00", "Mamma Mia", 12, 45, "italiana", meniuri["italiana"]));
    oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun asiatic", "08:00", "SushiVO", 3, 88, "asiatica", meniuri["asiatica"]));

    oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Palatul Culturii", "08:00", "Palatul Culturii", 55, 20, "muzeu",
    {}, "Palatul Culturii are 298 de camere si a fost construit pe ruinele vechiului Palat Domnesc al Moldovei."));
    oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "cultural", "Plimbare prin Copou", "08:00", "Parcul Copou", 77, 31, "istoric",
        {}, "Parcul Copou gazduieste Teiul lui Eminescu, vechi de peste 500 de ani."));

oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jogging de dimineata", "08:00", "Stadionul Emil Alexandrescu", 64, 7, "sport"));
oraseActivitati["Iasi"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Joaca in Escape Room", "08:00", "LockedIn Iasi", 28, 60, "aventura"));


    oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun romanesc", "09:00", "Casa Boiereasca", 0, 0, "romaneasca", meniuri["romaneasca"]));
    oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun mexican", "09:00", "Taco Loco", 10, 10, "mexicana", meniuri["mexicana"]));

    oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Mitropolia Moldovei", "09:00", "Mitropolia Moldovei si Bucovinei", 89, 4, "religios",
    {}, "Mitropolia adaposteste moastele Sfintei Parascheva, unul dintre cele mai importante pelerinaje ortodoxe."));
    oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura la Libraria Junimea", "09:00", "Libraria Junimea", 29, 59, "literatura",
        {}, "Libraria Junimea este un punct cultural activ inca din perioada interbelica."));

oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Cinematograf matinal", "09:00", "Cinema Victoria", 50, 50, "film"));
oraseActivitati["Iasi"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Trambulina si distractie", "09:00", "Salto Parc", 22, 38, "activitate fizica"));


    oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Brunch frantuzesc", "11:00", "La Folie", 19, 82, "frantuzeasca", meniuri["frantuzeasca"]));
    oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Brunch italian", "11:00", "Ristretto", 92, 2, "italiana", meniuri["italiana"]));

    oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Unirii", "11:00", "Muzeul Unirii", 48, 36, "muzeu",
    {}, "Muzeul Unirii a fost resedinta lui Alexandru Ioan Cuza cand era domnitor al Moldovei."));
    oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur ghidat la Cetatuia", "11:00", "Manastirea Cetatuia", 22, 69, "istoric",
        {}, "Cetatuia este singura manastire fortificata din Iasi care si-a pastrat zidurile intacte."));

oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Bowling cu prietenii", "11:00", "Club Hunter", 15, 97, "bowling"));
oraseActivitati["Iasi"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Laser tag", "11:00", "LaserMaxx", 67, 14, "aventura"));


    oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz asiatic", "13:00", "Zen Sushi", 70, 24, "asiatica", meniuri["asiatica"]));
    oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz romanesc", "13:00", "Hanul Dacilor", 31, 65, "romaneasca", meniuri["romaneasca"]));

    oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Turnul Goliei", "13:00", "Manastirea Golia", 97, 39, "istoric",
    {}, "Turnul Golia are 120 de trepte si ofera o panorama spectaculoasa asupra orasului."));
    oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Casa Pogor", "13:00", "Casa Pogor", 41, 6, "literatura",
        {}, "Casa Pogor a fost sediul societatii Junimea si gazduieste Muzeul Literaturii Romane."));

oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Relaxare la piscina", "13:00", "Aqua Park", 35, 91, "relaxare"));
oraseActivitati["Iasi"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Spectacol de magie", "13:00", "Magic Land", 5, 55, "show"));


    oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz mexican", "15:00", "Little Texas", 13, 37, "mexicana", meniuri["mexicana"]));
    oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz frantuzesc", "15:00", "Charlotte Dessert House", 96, 11, "frantuzeasca", meniuri["frantuzeasca"]));

    oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur ghidat la Sinagoga Mare", "15:00", "Strada Sinagogii", 8, 63, "religios",
    {}, "Este cea mai veche sinagoga din Romania, construita in secolul XVII."));
    oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur la Muzeul Mihail Kogalniceanu", "15:00", "Casa Kogalniceanu", 63, 18, "muzeu",
        {}, "Mihail Kogalniceanu a fost unul dintre cei mai importanti oameni politici ai secolului XIX."));

oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "Mini-golf indoor", "15:00", "Play Again", 61, 88, "recreativ"));
oraseActivitati["Iasi"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "VR Experience", "15:00", "VR Arena", 46, 73, "tehnologie"));


    oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare italiana", "16:00", "Piazzetta", 26, 93, "italiana", meniuri["italiana"]));
    oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare asiatica", "16:00", "KungFu King", 73, 58, "asiatica", meniuri["asiatica"]));

    oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Hanul Trei Sarmale", "16:00", "Bucium", 70, 28, "istoric",
    {}, "Hanul este mentionat in scrierile lui Ion Creanga si Mihai Eminescu."));
    oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur la Bojdeuca lui Creanga", "16:00", "Bojdeuca lui Creanga", 24, 75, "literatura",
        {}, "Este prima casa memoriala din Romania, inaugurata in 1918."));

oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "divertisment", "Karaoke", "16:00", "Voice Club", 58, 26, "muzica"));
oraseActivitati["Iasi"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "divertisment", "Escape Room tematic", "16:00", "Xcape Room", 91, 49, "aventura"));


    oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare romaneasca", "17:00", "Bolta Rece", 30, 80, "romaneasca", meniuri["romaneasca"]));
    oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare mexicana", "17:00", "Cucina Mexicana", 84, 83, "mexicana", meniuri["mexicana"]));

    oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur la Biblioteca Centrala", "17:00", "BCU Iasi", 9, 48, "literatura",
    {}, "Biblioteca are o sala de lectura in stil neoclasic si peste un milion de volume."));
    oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Biserica Trei Ierarhi", "17:00", "Str. Golia", 46, 50, "religios",
        {}, "Biserica este decorata cu peste 30 de registre de motive sculpturale unice in lume."));

oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jocuri de societate", "17:00", "Board Games Hub", 93, 18, "boardgames"));
oraseActivitati["Iasi"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "divertisment", "Parc de trambuline", "17:00", "Jump House", 17, 68, "sportiv"));


    oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina frantuzeasca", "19:00", "Cuib", 87, 93, "frantuzeasca", meniuri["frantuzeasca"]));
    oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina italiana", "19:00", "Blue Acqua", 39, 77, "italiana", meniuri["italiana"]));

    oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Poni-Cernatescu", "19:00", "Strada Mihail Kogalniceanu", 77, 12, "muzeu",
    {}, "Muzeul este dedicat savantilor Petru Poni si Radu Cernatescu, pionieri ai chimiei romanesti."));
    oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura de seara la Libraria Humanitas", "19:00", "Libraria Humanitas", 62, 69, "literatura",
        {}, "Humanitas Iasi organizeaza frecvent seri literare si lansari de carte."));

oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "divertisment", "Stand-up comedy", "19:00", "Times Pub", 81, 54, "comedie"));
oraseActivitati["Iasi"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "divertisment", "Pub quiz", "19:00", "Oxford Pub", 14, 27, "social"));


    oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina asiatica", "21:00", "Rice & Noodles", 36, 5, "asiatica", meniuri["asiatica"]));
    oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina romaneasca", "21:00", "Oscar", 56, 100, "romaneasca", meniuri["romaneasca"]));

    oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur de noapte in Piata Unirii", "21:00", "Piata Unirii", 60, 22, "istoric",
    {}, "In Piata Unirii a avut loc sarbatorirea Unirii Principatelor din 1859."));
    oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "cultural", "Rugaciune de noapte la Manastirea Galata", "21:00", "Dealul Galata", 18, 59, "religios",
        {}, "Manastirea Galata a fost ridicata de Petru Schiopul in 1582 si are o panorama deosebita asupra Iasului."));

oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "divertisment", "Party tematic", "21:00", "Skin Club", 78, 96, "distractie"));
oraseActivitati["Iasi"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "divertisment", "Seara dansanta", "21:00", "The Trumpets", 94, 42, "dans"));


    oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Late-night mexican", "23:00", "Taco Bell Palas", 45, 79, "mexicana", meniuri["mexicana"]));
    oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Late-night frantuzesc", "23:00", "Teo's Cafe", 65, 3, "frantuzeasca", meniuri["frantuzeasca"]));
    oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "cultural", "Noaptea Muzeelor la Muzeul Stiintei si Tehnicii", "23:00", "Palatul Copiilor", 31, 44, "muzeu",
    {}, "Muzeul are un pendul Foucault functional care demonstreaza rotatia Pamantului."));
    oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Catedrala Catolica", "23:00", "Bulevardul Stefan cel Mare", 32, 17, "religios",
        {}, "Catedrala a fost construita in stil neoclasic in 1782 si este un punct de convergenta ecumenica."));

oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "divertisment", "Afterparty", "23:00", "Club XS", 11, 16, "club"));
oraseActivitati["Iasi"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jocuri video in retea", "23:00", "Cyber Arena", 2, 76, "gaming"));






    oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun la Trattoria Il Calcio", "08:00", "Trattoria Il Calcio", 10, 20, "italiana", meniuri["italiana"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun la El Torito", "08:00", "El Torito", 15, 25, "mexicana", meniuri["mexicana"]));

oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul National de Arta", "08:00", "Calea Victoriei 49-53", 55, 28, "muzeu",
    {}, "Muzeul National de Arta din Bucuresti adaposteste colectii valoroase de arta romaneasca si europeana."));
oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur ghidat in Centrul Vechi", "08:00", "Centrul Istoric", 42, 14, "istoric",
    {}, "Un ghid specializat le prezinta turistilor cladirile vechi si povestile Bucurestiului de odinioara."));

oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jogging in Parcul Herastrau", "08:00", "Parcul Herastrau", 30, 40, "sport"));
oraseActivitati["Bucuresti"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Yoga in Parcul Tineretului", "08:00", "Parcul Tineretului", 35, 45, "wellness"));

    oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun la Sushi Terra", "09:00", "Sushi Terra", 14, 38, "asiatica", meniuri["asiatica"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun la Pain Plaisir", "09:00", "Pain Plaisir", 64, 82, "frantuzeasca", meniuri["frantuzeasca"]));

oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Patriarhia Romana", "09:00", "Dealul Mitropoliei", 64, 33, "religios",
    {}, "Pelerinii urca Dealul Mitropoliei pentru a vizita sediul Bisericii Ortodoxe Romane."));
oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectura la Libraria Carturesti", "09:00", "Str. Verona", 25, 45, "literatura",
    {}, "Libraria Carturesti gazduieste sesiuni matinale de lectura pentru pasionatii de literatura."));

oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Escape Room – Trapped", "09:00", "Trapped Escape Room", 21, 49, "aventura"));
oraseActivitati["Bucuresti"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Bowling la Mega Mall", "09:00", "Mega Mall", 23, 50, "recreatie"));

    oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz la Caru' cu Bere", "11:00", "Caru' cu Bere", 26, 51, "romaneasca", meniuri["romaneasca"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pizza la Pizzamania", "11:00", "Pizzamania", 28, 53, "italiana", meniuri["italiana"]));

oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Satului", "11:00", "Sos. Kiseleff 28-30", 70, 19, "muzeu",
    {}, "Vizitatorii descopera arhitectura traditionala romaneasca intr-un cadru natural autentic."));
oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "cultural", "Plimbare prin Curtea Veche", "11:00", "Str. Franceza", 36, 39, "istoric",
    {}, "Curtea Veche le ofera turistilor o incursiune in istoria voievodala a orasului."));

oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Teren de tenis la Dinamo", "11:00", "Club Dinamo", 34, 59, "sport"));
oraseActivitati["Bucuresti"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Film la Cinema City AFI", "11:00", "AFI Palace Cotroceni", 36, 60, "cinema"));

    oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz la ZenSushi", "13:00", "ZenSushi", 38, 61, "asiatica", meniuri["asiatica"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz la French Revolution", "13:00", "French Revolution", 52, 71, "frantuzeasca", meniuri["frantuzeasca"]));

oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectura in Parcul Cismigiu", "13:00", "Parcul Cismigiu", 18, 27, "literatura",
    {}, "Bucurestenii se aduna in Parcul Cismigiu pentru a participa la o sesiune colectiva de lectura."));
oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Biserica Stavropoleos", "13:00", "Str. Stavropoleos", 44, 15, "religios",
    {}, "Biserica Stavropoleos impresioneaza vizitatorii prin arhitectura sa brancoveneasca si atmosfera pasnica."));

oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Laser Tag la Laser Maxx", "13:00", "Laser Maxx", 46, 67, "adrenalina"));
oraseActivitati["Bucuresti"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Karaoke in Old City", "13:00", "Old City", 48, 68, "muzica"));

    oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Paste la Sardin", "15:00", "Sardin", 40, 62, "italiana", meniuri["italiana"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz la Little Havana", "15:00", "Little Havana", 44, 60, "mexicana", meniuri["mexicana"]));

oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul George Enescu", "15:00", "Calea Victoriei 141", 58, 21, "muzeu",
    {}, "Muzeul il comemoreaza pe compozitorul George Enescu prin exponate si inregistrari rare."));
oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur istoric la Palatul Regal", "15:00", "Calea Victoriei", 27, 36, "istoric",
    {}, "Un ghid prezinta istoria Palatului Regal si rolul sau in viata politica a tarii."));

oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "Patinaj la Cismigiu", "15:00", "Parcul Cismigiu", 58, 77, "outdoor"));
oraseActivitati["Bucuresti"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jocuri la Vortex VR Arena", "15:00", "Vortex VR", 60, 78, "virtual reality"));

    oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare la Zexe", "16:00", "Zexe", 86, 98, "romaneasca", meniuri["romaneasca"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare la Kanpai", "16:00", "Kanpai", 74, 90, "asiatica", meniuri["asiatica"]));

oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "cultural", "Rugaciune de dupa-amiaza la Biserica Sf. Spiridon", "16:00", "Calea Serban Voda", 47, 12, "religios",
    {}, "Credinciosii se aduna la Biserica Sf. Spiridon pentru rugaciunea de dupa-amiaza."));
oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura de dupa-amiaza la Biblioteca Nationala", "16:00", "Bd. Unirii", 33, 46, "literatura",
        {}, "Biblioteca Nationala organizeaza o lectura publica cu autori contemporani."));

oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "divertisment", "Mini golf la Funland", "16:00", "Funland Bucuresti", 70, 87, "relaxare"));
oraseActivitati["Bucuresti"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "divertisment", "Boardgames la The Guild Hall", "16:00", "The Guild Hall", 72, 88, "socializare"));

    oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare la Le Bistrot Francais", "17:00", "Le Bistrot Francais", 62, 80, "frantuzeasca", meniuri["frantuzeasca"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare la Hanu' lui Manuc", "17:00", "Hanu' lui Manuc", 88, 99, "romaneasca", meniuri["romaneasca"]));

oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Colectiilor de Arta", "17:00", "Calea Victoriei 111", 68, 43, "muzeu",
    {}, "Vizitatorii pot admira colectii private valoroase donate statului roman de-a lungul timpului."));
oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur pietonal prin Cartierul Armenesc", "17:00", "Str. Armenesca", 49, 17, "istoric",
        {}, "Un ghid local le povesteste participantilor istoria comunitatii armene din Bucuresti."));

oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "divertisment", "Concert in Control Club", "17:00", "Control Club", 82, 96, "muzica live"));
oraseActivitati["Bucuresti"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "divertisment", "Spectacol de teatru la TNB", "17:00", "Teatrul National Bucuresti", 84, 97, "teatru"));

    oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Il Locale", "19:00", "Il Locale", 56, 100, "italiana", meniuri["italiana"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Blue Margarita", "19:00", "Blue Margarita", 60, 78, "mexicana", meniuri["mexicana"]));

oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectura de seara la Libraria Humanitas", "19:00", "Piata Romana", 76, 29, "literatura",
    {}, "Scriitori invitati citesc fragmente din cele mai recente volume in fata publicului."));
oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Manastirea Radu Voda", "19:00", "Splaiul Independentei", 52, 35, "religios",
        {}, "Manastirea Radu Voda ii primeste pe vizitatori cu liniste, istorie si o panorama deosebita asupra orasului."));

oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "divertisment", "Quiz Night la Energiea", "19:00", "Energiea", 94, 84, "interactiv"));
oraseActivitati["Bucuresti"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "divertisment", "Petrecere la Expirat", "19:00", "Expirat", 96, 82, "nocturn"));

    oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Oscar", "21:00", "Oscar", 56, 100, "romaneasca", meniuri["romaneasca"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Rue du Pain", "21:00", "Rue du Pain", 99, 78, "frantuzeasca", meniuri["frantuzeasca"]));

oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur nocturn la Palatul Parlamentului", "21:00", "Bd. Natiunile Unite", 59, 50, "istoric",
    {}, "Participantii viziteaza Palatul Parlamentului si afla detalii despre cea mai mare cladire administrativa din Europa."));
oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "cultural", "Rugaciune de seara la Catedrala Mantuirii Neamului", "21:00", "Dealul Arsenalului", 72, 31, "religios",
        {}, "Catedrala Mantuirii Neamului ofera un spatiu imens de liniste si reculegere pentru rugaciunea de seara."));

oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "divertisment", "Escape Room – Locked In", "21:00", "Locked In", 93, 72, "aventura"));
oraseActivitati["Bucuresti"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "divertisment", "Clubbing la Kristal", "21:00", "Kristal Glam Club", 91, 70, "noapte"));

    oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Late night la Noodle Pack", "23:00", "Noodle Pack", 87, 66, "asiatica", meniuri["asiatica"]));
    oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Late night la Taco Bell", "23:00", "Taco Bell", 79, 58, "mexicana", meniuri["mexicana"]));

oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "cultural", "Noaptea Muzeelor la Muzeul Antipa", "23:00", "Sos. Kiseleff 1", 88, 19, "muzeu",
    {}, "Muzeul Antipa isi deschide portile pentru vizitatori nocturni care exploreaza exponatele stiintifice intr-o atmosfera speciala."));
oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura nocturna la Biblioteca Metropolitana", "23:00", "Str. Tache Ionescu", 29, 22, "literatura",
        {}, "Biblioteca Metropolitana gazduieste o sesiune speciala de lectura nocturna pentru iubitorii de carte."));
oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "divertisment", "Seara de stand-up la Comics Club", "23:00", "Comics Club", 81, 60, "umor"));
oraseActivitati["Bucuresti"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "divertisment", "Afterparty la Control", "23:00", "Control Club", 79, 58, "muzica electronica"));







    oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun la Via", "08:00", "Via", 12, 34, "italiana", meniuri["italiana"]));
    oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun la Tortilla", "08:00", "Tortilla", 22, 41, "mexicana", meniuri["mexicana"]));

oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul de Arta Cluj", "08:00", "Piata Unirii nr. 30", 74, 18, "muzeu",
    {}, "Palatul Banffy gazduieste Muzeul de Arta din Cluj, care expune lucrari valoroase de arta romaneasca si europeana."));
oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Bastionul Croitorilor", "08:00", "Str. Baba Novac", 52, 36, "istoric",
    {}, "Bastionul Croitorilor face parte din fosta cetate medievala a Clujului si a fost restaurat pentru vizitatori."));

oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Jogging in Parcul Central", "08:00", "Parcul Central", 14, 18, "outdoor"));
oraseActivitati["Cluj"].adaugaActivitate(8, ActivitateFactory::creeazaActivitate(
    "divertisment", "Joaca la Board Games Hub", "08:00", "Leon's Board Games", 15, 20, "board games"));

    oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun la Tokyo", "09:00", "Tokyo Japanese Restaurant", 18, 29, "asiatica", meniuri["asiatica"]));
    oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Mic dejun la Bistro Paris", "09:00", "Bistro Paris", 31, 56, "frantuzeasca", meniuri["frantuzeasca"]));

oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectura matinala la Book Corner", "09:00", "Bd. Eroilor", 43, 20, "literatura",
    {}, "Libraria Book Corner organizeaza sesiuni de lectura si lansari de carte in fiecare dimineata."));
oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Catedrala Mitropolitana", "09:00", "Piata Avram Iancu", 61, 17, "religios",
    {}, "Catedrala Mitropolitana din Cluj a fost construita in anii '30 si impresioneaza prin arhitectura sa monumentala."));

oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Escape Room – The Dungeon", "09:00", "The Dungeon", 20, 30, "aventura"));
oraseActivitati["Cluj"].adaugaActivitate(9, ActivitateFactory::creeazaActivitate(
    "divertisment", "Cinema Victoria", "09:00", "Cinema Victoria", 21, 32, "film"));

    oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Brunch la Casa Boema", "11:00", "Casa Boema", 44, 67, "romaneasca", meniuri["romaneasca"]));
    oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pizza la Da Pino", "11:00", "Da Pino", 53, 22, "italiana", meniuri["italiana"]));

oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Etnografic al Transilvaniei", "11:00", "Str. Memorandumului", 66, 28, "muzeu",
    {}, "Muzeul Etnografic prezinta traditiile si viata rurala din Transilvania prin exponate autentice."));
oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "cultural", "Plimbare istorica prin centrul vechi", "11:00", "Piata Muzeului", 55, 34, "istoric",
    {}, "Centrul vechi al Clujului pastreaza cladiri istorice care ofera o privire asupra epocii medievale."));

oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Mini Golf la Fun Park", "11:00", "Fun Park Cluj", 26, 42, "activ"));
oraseActivitati["Cluj"].adaugaActivitate(11, ActivitateFactory::creeazaActivitate(
    "divertisment", "Plimbare cu trotineta electrica", "11:00", "Zona centrala Cluj", 27, 44, "urban"));

    oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz la Wasabi", "13:00", "Wasabi Running Sushi", 61, 38, "asiatica", meniuri["asiatica"]));
    oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz la Le Petit Paris", "13:00", "Le Petit Paris", 72, 44, "frantuzeasca", meniuri["frantuzeasca"]));

    oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Biserica Franciscana", "13:00", "Piata Muzeului", 28, 44, "religios",
    {}, "Biserica Franciscana a fost construita in secolul al XIV-lea si adaposteste fresce valoroase."));
    oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura in Parcul Central", "13:00", "Parcul Central Simion Barnutiu", 47, 19, "literatura",
        {}, "Participantii citesc in aer liber intr-un parc istoric din centrul Clujului."));

oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Realitatea Virtuala la VR Center", "13:00", "VR Center Cluj", 32, 54, "tehnologie"));
oraseActivitati["Cluj"].adaugaActivitate(13, ActivitateFactory::creeazaActivitate(
    "divertisment", "Bowling la Polus Center", "13:00", "Polus Bowling", 33, 56, "sportiv"));

    oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Paste la Livada", "15:00", "Livada", 27, 59, "italiana", meniuri["italiana"]));
    oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Pranz la El Toro", "15:00", "El Toro", 36, 73, "mexicana", meniuri["mexicana"]));

    oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Farmaciei", "15:00", "Piata Unirii", 36, 11, "muzeu",
    {},  "Muzeul Farmaciei functioneaza in prima farmacie a Clujului si prezinta instrumente medicale vechi."));
    oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
        "cultural", "Tur ghidat la Turnul Croitorilor", "15:00", "Str. Baba Novac", 22, 48, "istoric",
        {}, "Un ghid povesteste istoria turnului, parte a fortificatiei medievale a orasului."));

oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "Teatru la Teatrul National", "15:00", "Teatrul National Cluj", 38, 66, "spectacol"));
oraseActivitati["Cluj"].adaugaActivitate(15, ActivitateFactory::creeazaActivitate(
    "divertisment", "Laser Tag", "15:00", "Laser Tag Cluj", 39, 68, "actiune"));

    oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare la Roata", "16:00", "Roata", 48, 81, "romaneasca", meniuri["romaneasca"]));
    oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare la Nobori", "16:00", "Nobori", 59, 24, "asiatica", meniuri["asiatica"]));

    oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "cultural", "Rugaciune de dupa-amiaza la Biserica Unitariana", "16:00", "Str. 21 Decembrie 1989", 68, 25, "religios",
    {}, "Credinciosii se aduna la Biserica Unitariana pentru rugaciunea de dupa-amiaza."));
    oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura de dupa-amiaza la Libraria Humanitas", "16:00", "Str. Universitatii", 41, 38, "literatura",
        {}, "Libraria Humanitas organizeaza o lectura cu autori contemporani locali."));

oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "divertisment", "Biliard la BarFly", "16:00", "BarFly", 44, 78, "biliard"));
oraseActivitati["Cluj"].adaugaActivitate(16, ActivitateFactory::creeazaActivitate(
    "divertisment", "Vizionare stand-up la LOL Club", "16:00", "LOL Comedy Club", 45, 80, "umor"));

    oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare la Bistro Sorriso", "17:00", "Bistro Sorriso", 63, 77, "italiana", meniuri["italiana"]));
    oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Gustare la Casa Ardeleana", "17:00", "Casa Ardeleana", 74, 53, "romaneasca", meniuri["romaneasca"]));

    oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "cultural", "Vizita la Muzeul Zoologic", "17:00", "Str. Clinicilor", 33, 59, "muzeu",
    {}, "Muzeul Zoologic expune o varietate impresionanta de specii si exemplare rare."));
    oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Bastionul Tesatorilor", "17:00", "Str. Fortaretei", 62, 14, "istoric",
        {}, "Bastionul Tesatorilor a fost renovat si include expozitii despre istoria breslelor clujene."));

oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "divertisment", "Concurs de trivia", "17:00", "Off the Wall", 50, 90, "quiz"));
oraseActivitati["Cluj"].adaugaActivitate(17, ActivitateFactory::creeazaActivitate(
    "divertisment", "Paintball in aer liber", "17:00", "Cluj Outdoor Paintball", 51, 92, "adrenalina"));

    oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Indigo", "19:00", "Indigo", 81, 66, "asiatica", meniuri["asiatica"]));
    oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Casa Vega", "19:00", "Casa Vega", 92, 88, "mexicana", meniuri["mexicana"]));

    oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "cultural", "Lectura la Casa de Cultura a Studentilor", "19:00", "Piata Lucian Blaga", 26, 43, "literatura",
    {}, "Casa de Cultura a Studentilor gazduieste un eveniment de lectura cu tineri scriitori."));
    oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
        "cultural", "Vizita la Manastirea Nicula (prezentare video)", "19:00", "Spatiu expozitional", 19, 37, "religios",
        {}, "Vizitatorii pot urmari un film documentar despre istoria si icoana facatoare de minuni de la Nicula."));

oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "divertisment", "Stand-up comedy", "19:00", "Club 99 Cluj", 56, 97, "comedy"));
oraseActivitati["Cluj"].adaugaActivitate(19, ActivitateFactory::creeazaActivitate(
    "divertisment", "Concurs karaoke", "19:00", "After Eight", 57, 95, "muzica"));

    oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Baracca", "21:00", "Baracca", 77, 99, "frantuzeasca", meniuri["frantuzeasca"]));
    oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Cina la Zama", "21:00", "Zama", 84, 91, "romaneasca", meniuri["romaneasca"]));

    oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "cultural", "Tur nocturn la Cetatuia", "21:00", "Dealul Cetatuia", 45, 50, "istoric",
    {}, "Un ghid prezintă istoria Cetatuii in timp ce participantii admira panorama orasului."));
    oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
        "cultural", "Rugaciune de seara la Catedrala Greco-Catolica", "21:00", "Str. Motilor", 77, 32, "religios",
        {}, "Catedrala Greco-Catolica ofera o atmosfera linistita pentru rugaciunea de seara."));

oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "divertisment", "Cinema in aer liber", "21:00", "Iulius Park", 62, 85, "film"));
oraseActivitati["Cluj"].adaugaActivitate(21, ActivitateFactory::creeazaActivitate(
    "divertisment", "Board games la The Guild Hall", "21:00", "The Guild Hall", 63, 83, "strategie"));

    oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Late night la Marty", "23:00", "Marty Society", 95, 61, "italiana", meniuri["italiana"]));
    oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "gastronomic", "Late night la Toulouse", "23:00", "Toulouse Cafe Brasserie", 68, 57, "frantuzeasca", meniuri["frantuzeasca"]));

    oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "cultural", "Noaptea Muzeelor la Muzeul de Istorie", "23:00", "Str. Daicoviciu", 54, 12, "muzeu",
    {}, "Muzeul de Istorie isi deschide portile noaptea, oferind vizite ghidate si reconstituiri istorice."));
    oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
        "cultural", "Lectura nocturna la Biblioteca Centrala UBB", "23:00", "Str. Clinicilor", 31, 26, "literatura",
        {}, "Biblioteca Centrala Universitara organizeaza o sesiune speciala de lectura la miezul noptii."));
oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "divertisment", "Clubbing la Euphoria", "23:00", "Euphoria Music Hall", 68, 73, "muzica electronica"));
oraseActivitati["Cluj"].adaugaActivitate(23, ActivitateFactory::creeazaActivitate(
    "divertisment", "Party la NOA", "23:00", "NOA Club", 69, 71, "dans"));


}

void Rulare::ruleaza() {
    incarcaActivitati();

    std::cout << "Poti alege dintre: " << Activitate::getNrActivitati() << " activitati!\n";

    std::string orasAles;


    while (true) {
        std::cout << "Alege un oras:\n";

        for (size_t i = 0; i < oraseDisponibile.size(); ++i) {
            std::cout << i + 1 << ". " << oraseDisponibile[i] << "\n";
        }

        std::cout << "Introdu numarul orasului: ";

        int optiune;
        if (!(std::cin >> optiune)) {
            std::cin.clear();
            std::string dummy;
            std::getline(std::cin, dummy);

            std::cout << "Input invalid! Trebuie sa introduci un numar.\n\n";
            continue;
        }


        if (optiune >= 1 && optiune <= (int)oraseDisponibile.size()) {
            orasAles = oraseDisponibile[optiune - 1];
            break;
        }

        else {
            std::cout << "Optiune invalida! Trebuie sa alegi un numar valid.\n\n";
        }
    }



    double buget;
    int energie = 100;

    std::cout << "Introdu bugetul tau initial (se recomanda minim 150): ";
    std::cin >> buget;

    for (int ora : ore) {
        itinerar.alegeActivitatePentruOra(ora, orasAles, oraseActivitati, tipuriActivitati, buget, energie);
    }

    itinerar.ordoneazaDupaOra();

    itinerar.afiseaza();


    if (!itinerar.validFinal()) {
        std::cout << "\nItinerarul nu este complet echilibrat.\n\n";
    } else {
        std::cout << "\nItinerarul este echilibrat si complet!\n\n";
    }

    itinerar.afiseazaSuveniruri();


    std::cout << "\n--- HARTA ACTIVITATILOR ---\n";
    itinerar.afiseazaHarta();

    std::cout << "\nDistanta totala parcursa: "
              << itinerar.calculeazaDistantaTotala()
              << " metri\n";
}

