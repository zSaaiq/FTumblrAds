//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdFullscreenVideoController, UIButton;

@protocol FBAdFullscreenVideoControllerDelegate <NSObject>
- (void)videoControllerDidTapCallToAction:(FBAdFullscreenVideoController *)arg1 withButton:(UIButton *)arg2 withEvent:(id)arg3;
- (void)videoControllerDidDismiss:(FBAdFullscreenVideoController *)arg1;
- (void)videoControllerWillDismiss:(FBAdFullscreenVideoController *)arg1;
@end

