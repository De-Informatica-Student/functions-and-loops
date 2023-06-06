// De main functie is het begin van het programma
int main() {
    // Maak een plek voor de return waarde
    int returnValue = 0;

    // Het begin van het programma
    main:
        // Maak een getal aan
        int x = 5;
        goto doubler;

    // Locatie in het programma
    doubled:
        // Save the result
        int y = returnValue;

        // Het programma is succesvol afgerond
        return 0;

    // Locatie in het programma
    doubler:
        // Functie om een getal te verdubbelen
        returnValue = x * 2;
        goto doubled;
}