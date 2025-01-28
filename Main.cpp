#include <iostream>
#include "tabulate/table.hpp"
using namespace tabulate;
using namespace std;
#include <iomanip>
#include <cmath>
void Peso_Bytes(){ //LA PRIMERA FUNCIONALIDAD
    system("cls");
tabulate::Table title; // Agregar el título
    title.add_row({" -- Consumo en Bytes de las variables --"}); // Decoración del título
    title.format()
        .font_style({tabulate::FontStyle::bold})
        .font_align(tabulate::FontAlign::center)
        .border_top("=")
        .border_bottom("=")
        .border_left("|")
        .border_right("|");
    std::cout << title << "\n"<< std::endl;
    tabulate::Table table; // Encabezados y datos
    table.add_row({"Tipo", "Bytes", "Valor inicial", "Valor final"});
    table.add_row({"int8", "1", "-128", "127"});
    table.add_row({"int16", "2", "-32,768", "32,767"});
    table.add_row({"float32", "4", "+-1.2 * 10^-38", "+-3.4 * 10^38"});
    table.add_row({"float64", "8", "+-2.2 * 10^308", "+-1.8 * 10^308"});
    table.add_row({"char", "1", "/0", "..."});
    table.add_row({"short", "2", "-32,768 ", "32,767"});
    table.add_row({"long", "4", "0", "Depende del lenguaje"});
    table.add_row({"double", "8", "4,9e-324", "1,7e+308"}); // Decoración por columna
    table.column(3).format().font_color(tabulate::Color::cyan); 
    table.column(1).format().font_color(tabulate::Color::yellow); 
    table.column(2).format().font_color(tabulate::Color::green);  
    table.format()
        .font_style({tabulate::FontStyle::bold})
        .border_top("-")
        .border_bottom("-")
        .border_left("|")
        .border_right("|");
    std::cout << table << std::endl;
system("pause");
}
void FasesDeLaLuna(){ //LA SEGUNDA FUNCIONALIDAD
    system("cls");
    string text;
cout << "Ingrese un procentaje:\n";
cin >> text;
int porcentaje = stoi(text);
tabulate::Table title;// Agregar el título
    title.add_row({" || Las Fases de la Luna :) ||"});// Decoración del título
    title.format()
        .font_style({tabulate::FontStyle::bold})
        .font_align(tabulate::FontAlign::center)
        .border_top("=")
        .border_bottom("=")
        .border_left("|")
        .border_right("|");
    std::cout << title << "\n"<< std::endl;
if (porcentaje >= 0 && porcentaje <= 9)
  {
Table table;
  table.format().corner("♥")
    .font_style({FontStyle::bold})
    .corner_color(Color::magenta)
    .border_color(Color::magenta);
  table.add_row({"FASE DE LA LUNA:", "Luna nueva",text + "%"}); // Column 1 is using mult-byte characters
  table.column(1).format()
    .multi_byte_characters(true);
  std::cout << table << std::endl;
  }
  if (porcentaje >= 10 && porcentaje <= 23)
  {
Table table;
  table.format().corner("♥")
    .font_style({FontStyle::bold})
    .corner_color(Color::magenta)
    .border_color(Color::magenta);
  table.add_row({"FASE DE LA LUNA:", " luna creciente",text + "%"});
  // Column 1 is using mult-byte characters
  table.column(1).format()
    .multi_byte_characters(true);
  std::cout << table << std::endl;
  }
  if (porcentaje >= 35 && porcentaje <=65)
  {
Table table;

  table.format().corner("♥")
    .font_style({FontStyle::bold})
    .corner_color(Color::magenta)
    .border_color(Color::magenta);

  table.add_row({"FASES DE LA LUNA", "Cuarto creciente", text + "%" });
  // Column 1 is using mult-byte characters
  table.column(1).format()
    .multi_byte_characters(true);
  std::cout << table << std::endl;
  }
if (porcentaje >= 97 && porcentaje <= 100 )
  {  
Table table;
  table.format().corner("♥")
    .font_style({FontStyle::bold})
    .corner_color(Color::magenta)
    .border_color(Color::magenta);
  table.add_row({"Fase de la luna", "Luna llena",text + "%"});
  // Column 1 is using mult-byte characters
  table.column(1).format()
    .multi_byte_characters(true);
  std::cout << table << std::endl;
  }
  if (porcentaje >= 66  && porcentaje <= 96 )
  {
Table table;
  table.format().corner("♥")
    .font_style({FontStyle::bold})
    .corner_color(Color::magenta)
    .border_color(Color::magenta);
  table.add_row({"Fase de la luna", "Luna menguante convexa",text + "%"});
  // Column 1 is using mult-byte characters
  table.column(1).format()
    .multi_byte_characters(true);
  std::cout << table << std::endl;
  }
  if (porcentaje == 50)
  {
Table table;
  table.format().corner("♥")
    .font_style({FontStyle::bold})
    .corner_color(Color::magenta)
    .border_color(Color::magenta);
  table.add_row({"Fase de la luna", "Cuarto menguante",text + "%"});// Column 1 is using mult-byte characters
  table.column(1).format()
    .multi_byte_characters(true);
  std::cout << table << std::endl;

  }
if (porcentaje >= 3  && porcentaje <= 34)
  {
Table table;
  table.format().corner("♥")
    .font_style({FontStyle::bold})
    .corner_color(Color::magenta)
    .border_color(Color::magenta);
  table.add_row({"Fase de la luna", "Luna menguante",text + "%"});// Column 1 is using mult-byte characters
  table.column(1).format()
    .multi_byte_characters(true);
  std::cout << table << std::endl;
  }
    system("pause"); 
}
void CualculadoraIMC(){ //LA tercera FUNCIONALIDAD
system("cls");
float estatura;
int peso;
cout << "Ingrese una estatura\n";
cin >> estatura;
cout << "Ingrese un peso\n";
cin >> peso;
float enMetros = estatura * estatura;
Table movies;
  movies.add_row({"Estatura", "Peso", "Indice de masa corpotal"});
  movies.add_row({to_string(estatura), to_string(peso), to_string(peso/ enMetros)});
  for (size_t i = 0; i < 3; ++i) {
    movies[0][i].format()
      .font_color(Color::yellow)
      .font_align(FontAlign::center)
      .font_style({FontStyle::bold});
  }
  std::cout << movies << std::endl;
system("pause");

}

int main() {
tabulate::Table title;// Agregar el título
    title.add_row({"** Programa Dinamico :) **"});// Bordes redondeados y estilo
    title.format()
        .font_style({tabulate::FontStyle::bold})
        .font_align(tabulate::FontAlign::center)
        .corner("o")
        .border_top("-")
        .border_bottom("-")
        .border_left("|")
        .border_right("|");
    std::cout << title << std::endl;
    cout << "\n1) Consultar el peso de las variables\n2) Calcular las fases de la luna\n3) Calculadora IMC\n";
    string select;
    while (true)
    {
        cin >> select;
    if (select == "1")
    {
        Peso_Bytes();
        break;
    }else if (select == "2")
    {
       FasesDeLaLuna();
        break;
    }else if (select == "3")
    {
        CualculadoraIMC();
        break;
    }
    }
    return 0;
}