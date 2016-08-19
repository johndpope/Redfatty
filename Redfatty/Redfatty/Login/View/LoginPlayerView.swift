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
    
    var avPlayer: AVPlayer?
    
    deinit {
        
        NSNotificationCenter.defaultCenter().removeObserver(self, name: kAppDidBecomeActiveNotification, object: nil)
        avPlayer?.currentItem?.removeObserver(self, forKeyPath: "status", context: &myContext)
    }

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
    
    private var myContext = 0
    
    func initPlayer() {
        
        NSNotificationCenter.defaultCenter().addObserver(self, selector: #selector(LoginPlayerView.startPlay), name: kAppDidBecomeActiveNotification, object: nil)
        
        avPlayer = AVPlayer.init(playerItem: createAVPlayerItem())
        (layer as! AVPlayerLayer).player = avPlayer
        (layer as! AVPlayerLayer).videoGravity = AVLayerVideoGravityResizeAspectFill

        avPlayer!.play()
    }
    
    func createAVPlayerItem() -> AVPlayerItem {
        
        let url = NSBundle.mainBundle().URLForResource("LoginTestVideo", withExtension: "mp4")
        let item = AVPlayerItem.init(URL: url!)
        item.addObserver(self, forKeyPath: "status", options: .New , context: &myContext)
        
        return item
    }
    
    func startPlay() {
        
        avPlayer?.seekToTime(CMTime(value: 0, timescale: 1))
        avPlayer?.play()
    }
    
    override func observeValueForKeyPath(keyPath: String?, ofObject object: AnyObject?, change: [String : AnyObject]?, context: UnsafeMutablePointer<Void>) {
        
        if avPlayer?.currentItem?.status != .ReadyToPlay {
            return
        }
    
        let totalSeconds = CMTimeGetSeconds((avPlayer?.currentItem?.duration)!)
        weak var weakSelf = self
        
        avPlayer?.addPeriodicTimeObserverForInterval(CMTime(value: 1, timescale: 1), queue: nil, usingBlock: { time in
            
            let currentSeconds = CMTimeGetSeconds(time)
            
            if currentSeconds == totalSeconds {
                weakSelf?.avPlayer?.seekToTime(CMTime(value: 0, timescale: 1))
            }
        })
        
        
    }

}
