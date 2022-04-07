#include <iostream>
#include <fstream> // библиотека, реализующая работу с файловой системой
#include <string>
using namespace std;

int statistic(string &str) {
	ofstream out;
	out.open("statistics.txt", ios::app);
	if (out.is_open()) {
		out << str << " " << str.length() << "\n";
		out.close();
		return 0;
	}
	out.close();
	return -1;
}




int main() {
	setlocale(LC_ALL, "ru");

	// Задача 1
	cout << "Введите слово: ";
	string word;
	cin >> word;
	cout << statistic(word) << endl;
	
	cout << "Введите слово: ";
	cin >> word;
	cout << statistic(word) << endl;
	
	
	//cin.ignore(); !!!!!!

	/*string path = "file.txt"; // строковая перемнная, содержащая путь к файлу
	ofstream out; // объект класса ofstream, отвечающий за запись данных в файл
	out.open(path, ios::app); // инициализация полей объекта out или открытие файла path в режиме 

	if (out.is_open()) { // проверка на то, открылся ли файл
		cout << "Файл открыт для записи\n";
		//out << "Hello world\n";
		for (int i = 0; i < 1; i++) {
			string str;
			cout << "Введите строку: ";
			getline(cin, str);
			out << str << "\n"; // добавление записи в файл
		}
	}
	else
		cout << "Ошибка открытия файла\n";

	out.close(); // закрытие файла

	ifstream in;
	in.open(path);

	if (in.is_open()) {
		cout << "Файл открыт для чтения\n";
		string str; // строка, в которую будет записываться текст файла
		//char sym;
		while (!in.eof()) {
			getline(in, str);
			cout << str << endl;
			//str = "";
			//in >> str;           // get берёт первый символ из файла, сохраняет его и отправляет в sym, у get тип bool
			//str += sym;
			//cout << str << endl;
		}
	}
	else
		cout << "Ошибка открытия файла\n";
	in.close();

	if (remove("file.txt") == 0)
		cout << "Файл удалён";
	else
		cout << "Ошибка удаления файла";
	//cout << ""; // out << "";
	//cout >> str; // in >> str;*/

	return 0;
}