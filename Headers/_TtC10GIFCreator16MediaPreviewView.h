//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;

@interface _TtC10GIFCreator16MediaPreviewView : UIView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *muteVideo;
    MISSING_TYPE *imageLayer;
    MISSING_TYPE *animation;
    MISSING_TYPE *animationKey;
    MISSING_TYPE *videoObserverToken;
    MISSING_TYPE *videoAsset;
    MISSING_TYPE *videoPlayer;
    MISSING_TYPE *videoPlayerLayer;
    MISSING_TYPE *manualBurstAnimationTimer;
    MISSING_TYPE *burstURLs;
    MISSING_TYPE *delayBetweenBurstFrames;
    MISSING_TYPE *manualBurstCurrentFrameIndex;
    MISSING_TYPE *manualBurstLoopForever;
    MISSING_TYPE *imageURL;
    MISSING_TYPE *audioPlayer;
    MISSING_TYPE *gifPlayer;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)manualBurstFrameTimerTick;
- (struct CGImage *)currentFrame;
- (void)stopAnimating;
- (_Bool)startVideo:(double)arg1 duration:(double)arg2 shouldRepeat:(_Bool)arg3;
- (_Bool)startImageAnimationWithFrameIndex:(long long)arg1;
- (_Bool)loadImageFrames:(id)arg1 delayBetweenFrames:(double)arg2 loopForever:(_Bool)arg3;
- (void)loadImageFromURL:(id)arg1 loopForever:(_Bool)arg2 cpuBasedPlayback:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadImageFromURL:(id)arg1 loopForever:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 audioPlayer:(id)arg2;
- (id)initWithAudioPlayer:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSString *imageContentsGravity;

@end

