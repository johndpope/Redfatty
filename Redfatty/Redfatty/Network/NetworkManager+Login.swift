//
//  NetworkManager+Login.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/10.
//  Copyright © 2016年 miwu. All rights reserved.
//

import Foundation
import Protobuf
import Alamofire

// MARK: - 登录注册
extension NetworkManager {
    
    // MARK: 获取验证码
    class func getSmsCode(phoneNum: String, type: Int, success: PResult? -> Void, failure: NSError? -> Void) {
        
        let params = ["phonecode":phoneNum,"type":"\(type)"]
        
        Alamofire.request(.GET, URL_Login_SmsCode, parameters: params).responseData { response in
            
            self.handlerResponse(response, responseSuccess: { pMsg in
                
                let presult = PResult.mwParseData(pMsg?.data_p)
                success(presult)
                
                }, networkError: { error in
                    
                    failure(error)
            })
        }
    }
    
    // MARK: 登录
    
}
