//
//  ViewController.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/9.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit
import Alamofire
import Protobuf

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        //获取验证码
        NetworkManager.getSmsCode("+8613302431090", type: 1) { result in
            
            print(result.errorMsg)
            print(result.errorCode)
            print(result.extraInfo)
        }
        
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

