//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface FBSDKAccessTokenExpirer : NSObject
{
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)_timerDidFire;
- (void)_checkAccessTokenExpirationDate;
- (void)dealloc;
- (id)init;

@end

