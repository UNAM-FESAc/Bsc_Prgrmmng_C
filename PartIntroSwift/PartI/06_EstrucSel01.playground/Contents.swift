/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
let dayOfWeek = 3
switch dayOfWeek {
case 1:
    print("Sunday")
case 2:
    print("Monday")
    fallthrough
case 3:
    print("Tuesday")
case 4:
    print("Wednesday")
    break
case 5:
    print("Thursday")
case 6:
    print("Friday")
case 7:
    print("Saturday")
default:
    print("Invalid day")
}
