//(c) Daniel Langer 2014

int main() {

 string ents, alter, aussage;

 cout << "Willst du Zigaretten kaufen (j/n)?" << endl;
 cin >> ents;
 cout << "Bist du schon 18 Jahre alt (j/n)?" << endl;
 cin >> alter;

 if ((ents == "j" || ents == "J") && (alter == "j" || alter == "J"));
 {
  aussage = "Du bekommst Zigaretten.";
 }

 if (ents == "n" || ents == "N");
 {
  aussage = "lappen";
 }

 if ((ents == "j" || ents == "J") && (alter == "n" || alter == "N"));
 {
  aussage = "Du bekommst keine Kippen.";
 }

 cout << aussage << endl;

 return 0;
}
