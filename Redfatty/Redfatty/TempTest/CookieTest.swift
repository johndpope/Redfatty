//
//  CookieTest.swift
//  WeiBo
//
//  Created by huangJiong on 16/8/11.
//  Copyright © 2016年 Mac－mini－1. All rights reserved.
//

import UIKit

class CookieTest: NSObject {
    

    func getCookieValueWithName(cookieName: String) -> String? {
        
        let cookieStorage = NSHTTPCookieStorage.sharedHTTPCookieStorage()
        let cookieArr = cookieStorage.cookies

        if cookieArr == nil {
            return nil
        }
        
        for cookie in cookieArr! {
            if cookie.name == cookieName {
                return cookie.value
            }
        }
        
        return nil
    }
    
    func createCookieTest() {
        
        //创建一个 cookie 必须设置:
        //1.NSHTTPCookiePath
        //2.NSHTTPCookieName
        //3.NSHTTPCookieValue
        
        let properties = [
            NSHTTPCookieName : "",
            NSHTTPCookieValue : "",
            NSHTTPCookiePath : ""]
        let cookie = NSHTTPCookie(properties: properties)
    
        let cookieStorage = NSHTTPCookieStorage.sharedHTTPCookieStorage()
        cookieStorage .setCookie(cookie!)
        
        
    }
}
