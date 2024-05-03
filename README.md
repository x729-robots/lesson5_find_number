# lesson5_find_number
This is game. You should find random number from the range.

#NOTE
	This project fully made in VIM with this commands (it was difficult...):
	        настройка VIM в качестве IDE
	        
	            insert/i - режим вставки
	            v - визуальный режим
	            :source % - поставить номера строк в файле
	            d+d - удалить строку
	            d (delete) - удалить выделенный текст
	            Плагины для vim
	                загружаем в другом терминале https://github.com/junegunn/vim-plug + curl -fL.... по инстукции + :PlugInstall
	            Ctrl+e - открыть дерево файлов
	            автодополнение исходников С++ - C+n
	            Ctrl-w+w - сменить активное окно
	            :terminal - открыть терминал в vim
	            NERDtree commands:
	                shift+? - help
	                :o - open in current window
	                
	                
	            :E - показать браузер фалов вместо текущего окна
	            :tab ter - открыть терминал в новой вкладке
	            :sh - переключить исходную сессию терминал поверх vim + $exit переключить vim назад поверх терминала
	            :qa - выйти из всех окон vim
	            работа с сессиями
	                :mksession ~/mysession.vim
	                vim -S ~/mysession.vim
	            установка языкового сервера для автоподстановок
	                https://clangd.llvm.org/installation (ставим на debian версию 11, а не 12)
	            !!! ДОСМОТРЕТЬ ВИДЕО "VIM для C++" clangd не получилось - старая версия VIM
	            
	            Ctrl + w + r -> Swap the two splits(either horizontal or vertical)
	
	            Ctrl + w + H -> Move the split to the left ( Ctrl + w + Shift + h).
	            
	            Ctrl + w + J -> Move the split down ( Ctrl + w + Shift + j).
	            
	            Ctrl + w + K -> Move the split up ( Ctrl + w + Shift + k). .
	            
	            Ctrl + w + L -> Move the split to the right ( Ctrl + w + Shift + l).
	            
	            Ctrl +w + + -> Increase the height of the current split.
	
	            Ctrl +w + - -> Decrease the height of the current split.
	            
	            Ctrl +w + > -> Increase the width of the current split.
	            
	            Ctrl +w + < -> Decrease the width of the current split.
	            
	            Ctrl +w + = -> Make the splits equal in width and height.
				
				swith tab - gt/gT
	            
	            1..n + gt - go to tab number
	
				find pattern - "/.pattern"
	            !!!переключение со вкладки терминала: C+W >> :tabnext (tabpast ...)
	            
	            очистить горячие клавиши по умолчанию :mapclear
	
				вставка в блочном режиме:
					press ctrl+v
					select columns
					press shift+i
					write your text
					press esc
					press "jj"				
	
