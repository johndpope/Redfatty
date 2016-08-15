//
//  FuncUIKit.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/12.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit

/***********     UIScreen           ************/
func mw_screenBounds() -> CGRect {
    return UIScreen.mainScreen().bounds
}

func mw_screenSize() -> CGSize {
    return mw_screenBounds().size
}

func mw_screenWidth() -> CGFloat {
    return mw_screenSize().width
}

func mw_screenHeight() -> CGFloat {
    return mw_screenSize().height
}


/***********     UIColor           ************/
func mw_color(r: CGFloat, _ g: CGFloat, _ b: CGFloat) -> UIColor {
    return UIColor.init(red: r / 255.0, green: g / 255.0, blue: b / 255.0, alpha: 1.0)
}

func mw_color(r: CGFloat, _ g: CGFloat, _ b: CGFloat, _ a: CGFloat) -> UIColor {
    return UIColor.init(red: r / 255.0, green: g / 255.0, blue: b / 255.0, alpha: a)
}


/***********     UIFont           ************/
func mw_font(size: CGFloat) -> UIFont {
    return UIFont.systemFontOfSize(size)
}

func mw_fontBold(size: CGFloat) -> UIFont {
    return UIFont.boldSystemFontOfSize(size)
}

func mw_font(size size: CGFloat, weight: CGFloat) -> UIFont {
    return UIFont.systemFontOfSize(size, weight: weight)
}