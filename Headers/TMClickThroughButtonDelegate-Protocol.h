//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, TMClickThroughButton;

@protocol TMClickThroughButtonDelegate <NSObject>
- (void)clickThroughButton:(TMClickThroughButton *)arg1 tappedLink:(NSURL *)arg2;

@optional
- (void)clickThroughButton:(TMClickThroughButton *)arg1 longPressedLink:(NSURL *)arg2;
@end

