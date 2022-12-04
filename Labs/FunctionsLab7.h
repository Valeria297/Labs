#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

void DataCreating(); //пункт меню о создании файла
void PrintData();    //пункт меню о просмотре данных
void AddDataInNewFile();      //пункт меню о добавлении данных
void SolveTheTask(); //пункт меню о выполнении индивидуального задания
void Edit();         //пункт меню о редакции существующего файла
void DeleteData();   //пункт меню об удалении данных
void Sort();         //пункт меню о сортировке
bool DataCleaning(); //для очистки данных после завершения программы
void Copy();         //для копирования данных файла
void Menu();         //меню второго уровня