//
//  Protobuf+Parse.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/9.
//  Copyright © 2016年 miwu. All rights reserved.
//

import Foundation
import Protobuf

extension PMessage {
//    class func mwParseData(soureceData: NSData, pbClass: AnyClass) ->
}

extension GPBMessage {
    
    class func mwParseData(sourceData: NSData) -> Self? {

        do {
            let pbObj = try self.parseFromData(sourceData)
            return pbObj
        } catch {
            return nil
        }
    }
}