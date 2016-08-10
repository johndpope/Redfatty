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

    class func handleResponse(response: Response<NSData, NSError>, responseSuccess: PMessage? -> Void, networkError: NSError? -> Void ) {
        
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
    
    class func handleResponse(response: Response<NSData, NSError>) -> (successPMsg: PMessage?, networkError: NSError?) {
        
        //1.网络失败
        if let error = response.result.error {
            return (nil, error)
        }
        
        //2.网络成功,无数据返回
        if response.data == nil {
            return (nil, nil)
        }
        
        //3.网络成功,有数据返回
        do {
            //3.1解析成功
            let pMsg = try PMessage.parseFromData(response.data!)
            return (pMsg, nil)
            
        } catch {
            //3.2解析失败
            return (nil, nil)
        }
    }
}
