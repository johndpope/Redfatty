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
        lable.textColor = mw_color(110, 110, 100)
        lable.font = mw_font(14)
        return lable
    }()
    
    lazy var locationBtn: UIButton  = {
        var btn = UIButton.init(type: .Custom)
        btn.backgroundColor = mw_color(111, 111, 111)
        return btn
    }()

}
