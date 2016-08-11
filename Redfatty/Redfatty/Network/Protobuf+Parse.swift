//
//  Protobuf+Parse.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/9.
//  Copyright © 2016年 miwu. All rights reserved.
//

import Foundation
import Protobuf

extension GPBMessage {
    
    class func mwParseData(sourceData: NSData?) -> Self? {
        
        //1.有数据
        if let tempData = sourceData {
            
            do {
                //1.1解析成功
                let pbObj = try self.parseFromData(tempData)
                return pbObj
            } catch {
                //1.2解析失败
                return nil
            }
        }
        
        //2.无数据
        return nil
    }
}