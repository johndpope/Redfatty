//
//  UIButton+MWAdd.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/12.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit

enum ButtonImgPosition: Int {
    case ButtonImgPositionLeft
    case ButtonImgPositionRight
    case ButtonImgPositionTop
    case ButtonImgPositionBottom
}

extension UIButton {
    func setImgPosition(position: ButtonImgPosition) {
        
        let imgWidth = imageView?.image?.size.width
        let imgHeight = imageView?.image?.size.height
        
        let title: NSString = currentTitle!
        let labelSize = title.sizeWithAttributes([NSFontAttributeName:(titleLabel?.font)!])
        let labelWidth = labelSize.width
        let labelHeight = labelSize.height
        
        
        
    }
}


