//
//  ViewController.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/9.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit
import Alamofire

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        //获取验证码
        Alamofire.request(.GET, "http://192.168.1.245:8001/v1/login/authcode", parameters: ["phonecode":"+8613320946464","type":"1"]).responseData { response in

            do {
                let pmsg = try PMessage.parseFromData(response.data!)
                do {
                    
                    let result =  try PResult.parseFromData(pmsg.data_p)
                    print(result.errorCode)
                    print(result.errorMsg)
                    print(result.extraInfo)
                    
                } catch {
                    
                }
                
            } catch {
                
            }
        }
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

