//
//  NetworkConst.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/9.
//  Copyright © 2016年 miwu. All rights reserved.
//

import Foundation

let URL_BASE = "http://192.168.1.245:8001";

// MARK: - 登录注册系统
let URL_Login_Login                 = URL_BASE + "/v1/login/login"               //登录
let URL_Login_SmsCode               = URL_BASE + "/v1/login/authcode"            //获取验证码
let URL_Login_Check_SmsCode         = URL_BASE + "/v1/login/authcode/checkout"   //检测验证码
let URL_Login_ThirdPlatform         = URL_BASE + "/v1/login/thirdparty/support"  //可用的第三方登录平台
let URL_Login_Register              = URL_BASE + "/v1/login/register"            //注册
let URL_Login_WeixinLogin           = URL_BASE + "/v1/login/thirdparty/wechat"   //微信登录
let URL_Login_WeiboLogin            = URL_BASE + "/v1/login/thirdparty/weibo"    //微博登录
let URL_Login_FacebookLogin         = URL_BASE + "/v1/login/thirdparty/facebook" //facebook登录
let URL_Login_GoogleLogin           = URL_BASE + "/v1/login/thirdparty/google"   //google登录
let URL_Login_Logout                = URL_BASE + "/v1/login/logout"              //登出
let URL_CheckToken                  = URL_BASE + "/v1/login/token/verification"  //校验令牌（自动登录）
let URL_Login_CheckUsername         = URL_BASE + "/v1/login/username"            //检测用户名
let URL_Login_UsableThirdPlatform   = URL_BASE + "/v1/login/logintype"           //可用的第三方登录平台
let URL_Login_ResetPwd              = URL_BASE + "/v1/login/resetpwd"            //重置密码
