# Code-cleanup

## **introduzione e spiegazioni**:

In questo programma non ci sono bug, l'obbietivo è un altro, imparare a rendere leggibile il prorpio programma, questa è una cosa banale ma esenziale soprattutto nel mondo del lavoro.
Ora immagina di produrre un programma complesso ma non rispetto per nulla una buona sintassi, dopo un mese torni a fixare dei bug nel programma e qqui ti rendi conto che non sai più dove metterci le mani, il programma per via della mancaza di una buona sintassi diventa illgibile e ci metterai il doppio del lavor, ora io ti consiglio, leggi le spiegazioni che ti di qui sotto e poi gurda il file `Code-cleanup.cpp` e infine correggi il file `fix_me.cpp`.

<details>
<summary>Clicka qui per le speigazioni</summary>

Bene iniziamo, ci sono tante piccole cose per imparare a programmare con una buona sitassi.

La prima cosa che ti consiglio e di usare il tasto **`invio`** più possibile, perchè penserai, il motivo è molto semplice, lasciare uno spazzio fra due linee di codice ti fa capire subito che le due cose non sono collegate, ti lascio un esempio qui sotto:
```cpp
    cout << "inserisci il primo numero: ";
    cin >> numero_1;

    cout << "inserisci il secondo numero: ";
    cin >> numero_2;
```
Come puoi notare questo spazieto ti fa capire meglio il programamma, e non solo è anche più bello da vedere, piccolo extra se noti bene in ogni `cout` c'è un piccolo spazio alla fine del testo, mettilo sempre se dopo c'è da inserire una varibile sia da mandare a schermo che da far inserire, perchè senno la variabbile rimmarenbe attacata al testo 

Un atro conisglio invece è quello di dare dei nomi decenti alle varianili, come puoi vedere nel file `Code-cleanup.cpp`, tutte le variabili hanno un nome facile da capire, se si chiamassereo var1, var2, a, b, ecc... non capiresti bene cosa servano le singole variabili, se la chiami somma è ovvio che li dentro ci stara la somma di altre variabili

il penultimo conisglio che poso darti è semplice, quando ci sono delle intere parti di codice che fanno una azzione in particolare tipo fuzioni o if a cascata, lascia un conmento in cima con una breve spiegazione del codice, cosi sai fin da subito cosa faceva quella parte.

infine qunado utilizi `if`, `for`, ecc... cerca in ongi modo di rendere più leggibile possibile le condizioni, soprattuto se ci sono if annodati o a cascata. in più negli `if` ci sono delle varianti possiamo dire  per esempio se c'è solo una codizione puoi scemplificare il codice seza gli `{}` pe resempio

```cpp 
if (num == 5)
    cout << "mumero prari a 5";
```

o sennò:

```cpp 
if (num == 5) { cout << "mumero prari a 5"; }
```

puo essere un buon modo se hai delle condizioni corte e particolari ma non abusare torppo di quasta cosa, meglio mandare a capo e mettere le graffe anche con una sola condizione.
</details>

## Soluzioni:

<details>
<summary>Clicka qui per le soluzioni</summary>

Questa volta le soluzioni sono molto corte perchè basta gurdare il file `Code-cleanup.cpp`, per vedere il risultato, quindi più sono simili meglio è in poche parole, una piccola dritta che ti posso fare è che se i nomi che hai dato alle variabili sono simili a quelle del file `Code-cleanup.cpp`  va bene comunque l'importante e che capisci limportaza di dare nomi alle variabili, stessa cose per i commenti, poi se vuoi aggiungere funzionalità al file `fix_me.cpp` fai pure ricordati di usare una buona sintassi
</details>
