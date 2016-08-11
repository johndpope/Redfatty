//
//  Functions.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/11.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit

func RGB(red: CGFloat, _ green: CGFloat, _ blue: CGFloat) -> UIColor {
    
    return UIColor.init(red: red / 255.0, green: green / 255.0, blue: blue / 255.0, alpha: 1)
}

func RGBA(red: CGFloat, green: CGFloat, blue: CGFloat, alpha: CGFloat) -> UIColor {
    
    return UIColor.init(red: red / 255.0, green: green / 255.0, blue: blue / 255.0, alpha: alpha)
}

func Font(size: CGFloat) -> UIFont {
    return UIFont.systemFontOfSize(size)
}

func FontBold(size: CGFloat) -> UIFont {
    return UIFont.boldSystemFontOfSize(size)
}

func Font(size: CGFloat, _ weight: CGFloat) -> UIFont {
    return UIFont.systemFontOfSize(size, weight: weight)
}

func Image(imgName: String) -> UIImage {
    return UIImage.init(named: imgName)!
}
