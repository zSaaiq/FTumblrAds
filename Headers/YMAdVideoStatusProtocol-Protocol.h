//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController, YMAdVideoConfig;

@protocol YMAdVideoStatusProtocol <NSObject>
- (UIViewController *)presentingViewControllerForFullscreenVideo;
- (_Bool)shouldAutoplay:(YMAdVideoConfig *)arg1;
- (NSString *)site;
- (void)videoStatusChangedTo:(int)arg1;
@end

