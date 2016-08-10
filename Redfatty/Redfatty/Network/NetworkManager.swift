//
//  NetworkManager.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/10.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit
import Protobuf
import Alamofire

class NetworkManager: NSObject {

    class func handlerResponse(response: Response<NSData, NSError>, responseSuccess: PMessage? -> Void, networkError: NSError? -> Void ) {
        
        //1.网络错误
        if let error = response.result.error {
            networkError(error)
            
            return
        }
        
        //2.网络成功, 有返回数据
        if  let tempData = response.data {
            do {
                //2.1解析成功
                let pMsg = try PMessage.parseFromData(tempData)
                responseSuccess(pMsg)
            } catch {
                //2.2解析失败
                responseSuccess(nil)
            }
            
            return
        }
        
        //3.网络成功, 无返回数据
        responseSuccess(nil)
    }
}
