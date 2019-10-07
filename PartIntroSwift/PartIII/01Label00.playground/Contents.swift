
/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

import UIKit

let currentDateTime = Date()

let formatter = DateFormatter()
formatter.dateFormat = "yyyy/MM/dd HH:mm"
let someDateTime = formatter.date(from: "2019/09/30 22:31")

print(someDateTime!)
