# Prüfung SoSe 2023 Aufgabe 10
in diesem Repo befindet sich die Teilaufgabe der Aufgabe 10 in der ein Programm geschrieben werden soll das ein beim ausführen ein Fenster öffnet. Das Programm wurde in der Programmiersprach C geschrieben.

## Kompilation 
Das Programm kann mit einem beliebigen Compiler einfach kompiliert werden. Ich habe gcc verwendet.

Beispiel: 
```
gcc -Wall -g main.c -o main.elf `pkg.config --cflags --libs gtk+-3.0`
```

## Ausführung 
Das Programm kann einfach mit Befehl zum ausführen von Programmen gestartet werden. Wichtig hierbei ist das der X-Server gestartet sein muss, damit sich das Programm mit dem Server verbinden kann. Bei mir ist war dieser Schritt allerdings nicht zusätzlich notwendig.

Beispiel für Ubuntu/WSL:
```
./main.elf
```
