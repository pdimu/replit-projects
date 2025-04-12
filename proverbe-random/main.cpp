#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

int main() {
    vector<string> proverbs = {
        "Cască ochii la tocmeală, iar nu după ce te-nșeală.",
        "Cand pisica nu-i acasă, șoarecii joacă pe masă",
        "Cine împarte, parte își face.",
        "Cine nu-ncearcă, nici nu câștigă.",
        "Cine știe carte, are patru ochi.",
        "La plăcinte înainte, la război înapoi.",
        "Lauda de sine nu miroase a bine.",
        "Laudă-mă gură, că ți-oi da friptură.",
        "Lăcomia pierde omenia.",
        "Ai carte, ai parte.",
        "Așchia nu sare departe de trunchi.",
        "Avocatul nepoftit este bun de pălmuit.",
        "Surdul n-aude, dar le potrivește.",
        "Bine faci, bine găsești.",
        "Buturuga mică răstoarnă carul mare.",
        "Ce ție nu-ți place, altuia nu-i face.",
        "Cine râde la urmă râde mai bine.",
        "Cine se frige cu ciorba, suflă și în iaurt.",
        "Copilul și bețivul spun adevărul.",
        "Cum îți așterni așa dormi.",
        "Cu răbdarea treci și marea.",
        "Dacă tăceai, filosof rămâneai.",
        "Dar din dar se face rai.",
        "E bun numai când doarme.",
        "Foamea e cel mai bun bucătar.",
        "Fuga e rușinoasă, dar sănătoasă.",
        "Graba strică treaba.",
        "Haina nu îl face pe om.",
        "În țara orbilor, chiorul este împărat",
        "Mai bine mai târziu decât niciodată.",
        "Mamă soacră, poamă acră.",
        "Minciuna are picioare scurte.",
        "Mâța blândă zgârie rău.",
        "Mi-e milă de tine, dar de mine mi se rupe inima.",
        "Nemulțumitului i se ia darul.",
        "Nu-ți băga nasul unde nu-ți fierbe oala.",
        "Nu tot ce zboară se mănâncă.",
        "Nu toate muștele fac miere.",
        "Nu lăsa pe mâine ce poți face azi.",
        "Ochii care nu se văd se uită.",
        "Paza bună trece primejdia rea",
        "Prietenul la nevoie se cunoaște",
        "Peștele de la cap se-mpute",
        "Prea puțin ca să trăiești, prea mult ca să mori",
        "Rușinosul roade osul.",
        "S-a dus bou și a venit vacă.",
        "Tăcerea e de aur, vorba de argint.",
        "Unde-s mulți, puterea crește.",
        "Un nebun întreabă mai mult decât pot spune zece înțelepți.",
        "Vorba dulce mult aduce."
    };

    int num_proverbs;
    cout << "Introdu numărul de proverbe: ";
    cin >> num_proverbs;

    random_device rd;
    mt19937 gen(rd());
    shuffle(proverbs.begin(), proverbs.end(), gen);

    for (int i = 0; i < num_proverbs && i < proverbs.size(); ++i) {
        cout << proverbs[i] << endl;
    }

    return 0;
}