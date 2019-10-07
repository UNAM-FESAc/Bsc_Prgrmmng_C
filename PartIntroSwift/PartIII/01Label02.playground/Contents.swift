
/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
import UIKit

let date = Date()
let calendar = Calendar.current
calendar.component(.year, from: date)
calendar.component(.month, from: date)
calendar.component(.day, from: date)

var lastMonthDate = Calendar.current.date(byAdding: .month, value: -1, to: date)
print(lastMonthDate!)
