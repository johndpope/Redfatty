//
//  LoginPlayerView.swift
//  Redfatty
//
//  Created by huangJiong on 16/8/11.
//  Copyright © 2016年 miwu. All rights reserved.
//

import UIKit
import AVFoundation

class LoginPlayerView: UIView {

    override class func layerClass() -> AnyClass {
        return AVPlayerLayer.self
    }
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        initPlayer()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func initPlayer() {
        let url = NSBundle.mainBundle().URLForResource("LoginTestVideo", withExtension: "mp4")
        let item = AVPlayerItem.init(URL: url!)
        let avPlayer = AVPlayer.init(playerItem: item)
        (layer as! AVPlayerLayer).player = avPlayer
        
        avPlayer.play()
    }

}
