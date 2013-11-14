a = 5;
b = 6;
//c = input("Wprowadz c: ");
//d = input("Wprowadz d: ");

Y = [1 53 6 15; 1 11 31 6; 79 3 3 1; 2 25 24 12];
randY = rand(100,100);
randX = rand(100,100);

tic();
mnozXY = randY * randX;
dzielXY = randX / randY;
t = toc();

save('pfdane.dat', 'randY', 'randX', 'mnozXY', 'dzielXY', 't');
    clear randY
    clear randX
    clear mnozXY
    clear dzielXY
    clear t
    load('pfdane.dat','randY', 'randX', 'mnozXY', 'dzielXY', 't')
