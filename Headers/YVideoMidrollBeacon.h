//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface YVideoMidrollBeacon : NSObject
{
    _Bool _beaconFired;
    NSTimer *_fireBeaconTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *fireBeaconTimer; // @synthesize fireBeaconTimer=_fireBeaconTimer;
@property(nonatomic) _Bool beaconFired; // @synthesize beaconFired=_beaconFired;
- (void)fireAfterDelay:(double)arg1 withAnalytics:(id)arg2;
- (void)fireWithAnalytics:(id)arg1;

@end

