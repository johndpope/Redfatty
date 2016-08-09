//
//  NetworkLogin.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/9.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit
import Alamofire
import Protobuf

class NetworkLogin: NSObject {
    
    class func getSmsCode(phoneNum: String, type: Int, completion: PResult -> Void) {
        
        let params = ["phonecode":phoneNum,"type":"\(type)"]
        Alamofire.request(.GET, URL_Login_SmsCode, parameters: params).responseData { response in
            let pMsg = PMessage.mwParseData(response.data)
            let result = PResult.mwParseData(pMsg.data_p)
            completion(result)
        }
        
    }

}
