/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

import UIKit

import PlaygroundSupport

let liveviewFrame =
    CGRect(x : 50, y : 50, width : 100, height : 200)

let liveView = UIView(frame: liveviewFrame)

liveView.backgroundColor = .red

PlaygroundPage.current.liveView = liveView
