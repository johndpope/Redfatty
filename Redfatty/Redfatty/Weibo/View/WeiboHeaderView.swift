//
//  WeiboHeaderView.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/11.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit

class WeiboHeaderView: UIView {
    
    
    lazy var userHeaderIcon: UIImageView = {
        return UIImageView()
    }()
    
    lazy var userNameLabel: UILabel = {
       var lable = UILabel()
        lable.textColor = RGB(0,0,225) //UIColor.blueColor()
        return lable
    }()

}
