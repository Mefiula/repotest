/*
 * stos_tab.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>

using namespace std;

void push(int stos[], int &sp, int dane) {
    cout << dane << " "; //informacyjny wydruk wstawianej wartości
    stos[sp] = dane;
    sp++;
}

int pop(int stos[], int &sp) {
    sp--;
    return stos[sp];
}


int main(int argc, char **argv)
{
    int *stack; //wskaźnik
    int sr; //rozmiar stosu
    int sp = 0; //wskaźnik stosu
	
    cout << "Podaj rozmiar: "; cin >> sr;
    stack = new int[sr];
    
    srand(time(NULL));
    for (int i=0; i < sr; i++) {
        push(stack, sp, rand()%100 + 1);
    }
    
    cout << endl;
    
    for (int i=0; i < sr; i++) {
        cout << pop(stack, sp) << " ";
    }
    
    
	return 0;
}

