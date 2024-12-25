from PyQt5.QtWidgets import (QApplication, QWidget, QPushButton, QLabel, QVBoxLayout, QHBoxLayout, QGridLayout)
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QColor
import sys

class ExpenseTrackerUI(QWidget):
    def __init__(self):
        super().__init__()

        # Настройка главного окна
        self.setWindowTitle("Expense Tracker")
        self.setGeometry(100, 100, 360, 640)

        # Создание макета
        self.initUI()

    def initUI(self):
        # Главный вертикальный макет
        main_layout = QVBoxLayout()

        # Блок 1: Зеленый (верхний блок)
        block1 = QLabel()
        block1.setStyleSheet("background-color: green;")
        block1.setFixedHeight(50)
        block1.setAlignment(Qt.AlignCenter)
        block1.setText("1")  # Для визуальной идентификации
        main_layout.addWidget(block1)

        # Блок 2, 3 и 4: Красный и синие блоки
        horizontal_layout = QHBoxLayout()

        block2 = QLabel()
        block2.setStyleSheet("background-color: brown;")
        block2.setFixedSize(120, 120)
        block2.setAlignment(Qt.AlignCenter)
        block2.setText("2")
        
        block3 = QLabel()
        block3.setStyleSheet("background-color: blue;")
        block3.setFixedSize(120, 55)
        block3.setAlignment(Qt.AlignCenter)
        block3.setText("3")

        block4 = QLabel()
        block4.setStyleSheet("background-color: blue;")
        block4.setFixedSize(120, 55)
        block4.setAlignment(Qt.AlignCenter)
        block4.setText("4")

        # Выравниваем блоки
        vertical_right = QVBoxLayout()
        vertical_right.addWidget(block3)
        vertical_right.addWidget(block4)

        horizontal_layout.addWidget(block2)
        horizontal_layout.addLayout(vertical_right)

        main_layout.addLayout(horizontal_layout)

        # Блок 5: Желтый (центральный большой блок)
        block5 = QLabel()
        block5.setStyleSheet("background-color: yellow;")
        block5.setFixedHeight(300)
        block5.setAlignment(Qt.AlignCenter)
        block5.setText("5")
        main_layout.addWidget(block5)

        # Блоки 6, 7 и 8: Нижняя панель кнопок
        footer_layout = QHBoxLayout()

        block6 = QPushButton("6")
        block6.setStyleSheet("background-color: blue;")
        block6.setFixedHeight(50)

        block7 = QPushButton("7")
        block7.setStyleSheet("background-color: blue;")
        block7.setFixedHeight(50)

        block8 = QPushButton("8")
        block8.setStyleSheet("background-color: blue;")
        block8.setFixedHeight(50)

        footer_layout.addWidget(block6)
        footer_layout.addWidget(block7)
        footer_layout.addWidget(block8)

        main_layout.addLayout(footer_layout)

        # Устанавливаем главный макет для окна
        self.setLayout(main_layout)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = ExpenseTrackerUI()
    window.show()
    sys.exit(app.exec_())
