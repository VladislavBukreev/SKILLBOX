/*Задание 3. Красный Марс
Что нужно сделать
В «Спейс Инжиниринг» были впечатлены тем, как вы справились с кофемашиной и решили отдать вам на аутсорс разработку программы для нового
робота-разведчика поверхности Марса. Это первый прототип, поэтому он тестируется в прямоугольном помещении размером 15 на 20 метров. 
Марсоход высаживается в центре комнаты, после чего управление им передаётся оператору — пользователю вашей программы. Программа спрашивает, 
в какую сторону оператор хочет направить робота: север (клавиша W), юг (клавиша S), запад (клавиша A) или восток (клавиша D). 
Оператор делает выбор, марсоход перемещается на 1 метр в эту сторону и программа сообщает новую позицию марсохода. 
Если марсоход упёрся в стену, то он не должен пытаться перемещаться в сторону стены, в этом случае его позиция не меняется.

Пример выполнения

[Программа]: Марсоход находится на позиции 6, 19, введите команду: 
[Оператор]: A 
[Программа]: Марсоход находится на позиции 5, 19, введите команду: 
[Оператор]: W 
[Программа]: Марсоход находится на позиции 5, 20, введите команду: 
[Оператор]: W 
[Программа]: Марсоход находится на позиции 5, 20, введите команду: 
[Оператор]: S 
[Программа]: Марсоход находится на позиции 5, 19, введите команду: 
[Оператор]: S 
[Программа]: Марсоход находится на позиции 5, 18, введите команду: 
…

Рекомендации по выполнению
Необходимо обеспечить контроль ввода пользователя и сообщать об ошибке в случае неправильного ввода.
Помните об ограничениях комнаты при перемещении робота.
Что оценивается
Использованы конструкции else и else if.
Координаты марсохода не выходят за границы помещения.
Программа не завершает работу если робот упёрся в стенку.*/