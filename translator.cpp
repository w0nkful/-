#include <iostream> 
using namespace std;
int main() {
setlocale(0, "");

    short choose;
    cout << "                          Переводчик\n";
    cout << "[1] Русские слова\n";
    cout << "[2] Английские слова\n";
    cout << "Выберите действие: ";
    cin >> choose;
    cout << " \n";
    switch (choose)
    {
    case 1:
        cout << "Вы выбрали слова на русском языке\n";
        cout << "[1] Ноутбук\n[2] Планшет\n[3] Мышка\n[4] Монитор\n[5] Персональный компьютер\n[6] Клавиатура\n[7] Моноблок\n[8] Процессор\n[9] Видеокарта\n[10] Кулер\n[11] Водяное охлаждение\n[12] Блок питания\n[13] Материнская плата\n[14] Оперативная память\n[15] Твердотельный накопитель\n";
        cout << "Выберите слово: ";
        short ru;
        cin >> ru;
        switch (ru)
        {
        case 1:
            cout << "Ноутбук — Laptop";
            break;
        case 2:
            cout << "Планшет — Tablet";
            break;
        case 3:
            cout << "Мышка — Mouse";
            break;
        case 4:
            cout << "Монитор — Monitor";
            break;
        case 5:
            cout << "Персональный компьютер — Personal computer";
            break;
        case 6:
            cout << "Клавиатура — Keyboard";
            break;
        case 7:
            cout << "Моноблок — Monoblock";
            break;
        case 8:
            cout << "Процессор — CPU";
            break;
        case 9:
            cout << "Видеокарта — GPU";
            break;
        case 10:
            cout << "Кулер — Cooler";
            break;
        case 11:
            cout << "Водяное охлаждение — Water cooling";
            break;
        case 12:
            cout << "Блок питания — Power unit";
            break;
        case 13:
            cout << "Материнская плата — Motherboard";
            break;
        case 14:
            cout << "Оперативная плата — RAM";
            break;
        case 15:
            cout << "Твердотелый накопитель — Solid-state drive";
            break;
        }
    case 2:
        cout << "Вы выбрали перевод английских слов\n";
        cout << "[1] Kernel\n[2] Process\n[3] Thread\n[4] File system\n[5] Driver\n[6] Boot\n[7] Memory\n[8] Scheduler\n[9] Interface\n[10] Command\n[11] Permission\n[12] User\n[13] Task\n[14] Resource\n[15] Update\n";
        cout << "Выберите слово: ";
        short en;
        cin >> en;
        switch (en)
        {
        case 1:
            cout << "Kernel — Ядро";
            break;
        case 2:
            cout << "Process — Процесс";
            break;
        case 3:
            cout << "Thread — Поток";
            break;
        case 4:
            cout << "File system — Файловая система";
            break;
        case 5:
            cout << "Driver — Драйвер";
            break;
        case 6:
            cout << "Boot — Загрузка";
            break;
        case 7:
            cout << "Memory — Память";
            break;
        case 8:
            cout << "Scheduler — Планировщик";
            break;
        case 9:
            cout << "Interface — Интерфейс";
            break;
        case 10:
            cout << "Command — Команда";
            break;
        case 11:
            cout << "Permission — Разрешение";
            break;
        case 12:
            cout << "User — Пользователь";
            break;
        case 13:
            cout << "Task — Задача";
            break;
        case 14:
            cout << "Resource — Ресурс";
            break;
        case 15:
            cout << "Update — Обновление";
            break;
        }
        return 0;
    }
}