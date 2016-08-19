//
//  MainTabBarController.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/19.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit

class MainTabBarController: UITabBarController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        initViewControllers()
    }
    
    func initViewControllers() {
        
        let weiboCtrl = WeiboMainViewController.init()
        let weiboNav = UINavigationController.init(rootViewController: weiboCtrl)
        addChildViewController(weiboNav)
    }

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
