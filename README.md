# OOD

How to setup SFML for 1st lw (visual studio):
1.
Проект - свойства -
Все платформы
Свойства - С++ - Общие - Дополнительные каталоги включаемых: ..\OOD\SFML\include (Путь до include)

2.
Release (64/86):
Свойства - Компановщик - Ввод - Дополнительные зависимости (добавить):
sfml-graphics.lib;sfml-window.lib;sfml-system.lib;sfml-audio.lib;

Debug (64/86):
sfml-graphics-d.lib;sfml-window-d.lib;sfml-system-d.lib;sfml-audio-d.lib;

3.
Запустить releas и debug, закинуть в появившиеся папки release и 64x\release bin 64 и bin 32 из .\OOD\sfml соответсвенно

4.
Все конфигурации - win 32
Компоновщик - общие - дополнительные каталоги библиотек [путь до lib x86]