/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
var currentLevel:Int = 0, finalLevel:Int = 5
let gameCompleted = true
repeat{
if gameCompleted{
print("Has pasado al nivel \(currentLevel)")
        currentLevel += 1
    }
}while(currentLevel <= finalLevel)
print("Terminó")
