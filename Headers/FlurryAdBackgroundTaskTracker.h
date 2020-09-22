//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryAdBackgroundTaskTracker : NSObject
{
    _Bool _isBackgroundSupported;
    unsigned long long _backgroundTask;
}

+ (id)defaultTracker;
@property(nonatomic) _Bool isBackgroundSupported; // @synthesize isBackgroundSupported=_isBackgroundSupported;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
- (void)stopBackgroundTasksTracking;
- (void)startBackgroundTaskTrackingIfNeeded;
- (id)init;

@end
