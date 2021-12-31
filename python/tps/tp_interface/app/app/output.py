
from PyQt5 import QtCore, QtWidgets


class Ui_Dialog(object):
    def __init__(self):
        self.label = None
        self.lineEdit = None
        self.pushButton = None
        self.res = ""

    def on_clic(self):
        self.lineEdit.setText(self.lineEdit.text())


    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.resize(400, 300)
        
        #label
        self.label = QtWidgets.QLabel(Dialog)
        self.label.setGeometry(QtCore.QRect(5, 30, 290, 17))
        self.label.setText("")
        self.label.setObjectName("label")
        
        #lineEdit 
        self.lineEdit = QtWidgets.QLineEdit(Dialog)
        self.lineEdit.setGeometry(QtCore.QRect(10, 270, 113, 25))
        self.lineEdit.setText("")
        self.lineEdit.setObjectName("lineEdit")
        
        #button qui applique action
        self.pushButton = QtWidgets.QPushButton(Dialog)
        self.pushButton.setGeometry(QtCore.QRect(280, 270, 89, 25))
        self.pushButton.setObjectName("pushButton")
        self.pushButton.clicked.connect(self.action)

        self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)
    
    
    #renvoie son precedent resultat plus le contenu de lineEdit dans label puis nettoie lineEdit
    def action(self):
        self.res += " " + self.lineEdit.text()
        self.label.setText(self.res)
        self.lineEdit.clear()

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Dialog"))
        self.pushButton.setText(_translate("Dialog", "publier"))




if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    Dialog = QtWidgets.QDialog()
    ui = Ui_Dialog()
    ui.setupUi(Dialog)
    Dialog.show()
    sys.exit(app.exec_())
