# Zahlenexport_Logfile

Es handelt sich um ein Programm in C++ zur Auswertung einer Logfile einer Zufallszahlenreihenfolge.
Die Logfile wird zeilenweise eingelesen und jeweils nach Schlüsselwörtern gesucht.

Das Schlüsselwort "Picture RxEx" initalisiert einen neuen Abschnitt.
Eine "Response" bedeutet eine Eingabe. Diese wird ausgelesen und im Abschnitt als eingegebene Zahl hinterlegt.

Die Ausgabe erfolgt sowohl als .csv in Zeilenform als auch als Matrix.

Die Logfile muss im selben Ordner wie die .exe liegen. Die Logfile muss als .txt gespeichert werden und den Namen "eingabe" tragen. 
Das Programm meldet sonst, dass die Eingabe-Datei nicht gefunden werden kann.

Im Ordner "Beispiel" findet sich eine mit QT kompilierte Release-Version für 64-Bit Windows.
Zur Nutzung des Programms ist es ausreichend, den Inhalt von "eingabe.txt" zu ersetzen und abzuspeichern.

Nach Ausführen der Zahlenexport.exe werden die Ausgabe-Dateien mit den neuen Daten überschrieben.

Die Software unterliegt keinen Lizenz-Beschränkungen und darf frei weiter genutzt und/oder verändert werden.
