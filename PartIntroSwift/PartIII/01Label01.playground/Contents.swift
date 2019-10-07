
/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
import UIKit
let inputDate = "09/30/2019"
let formatter = DateFormatter()
formatter.dateFormat = "MM/dd/yyyy"
if let date = formatter.date(from: inputDate) {
    print(date)
}
