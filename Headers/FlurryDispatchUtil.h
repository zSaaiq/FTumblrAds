//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryDispatchUtil : NSObject
{
}

+ (void)assertRunningOnQueue:(id)arg1;
+ (void)dispatchOnQ:(id)arg1 sync:(CDUnknownBlockType)arg2;
+ (void)dispatchOnQ:(id)arg1 async:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
- (void)dispatchOnQ:(id)arg1 sync:(CDUnknownBlockType)arg2;
- (void)dispatchOnQ:(id)arg1 async:(CDUnknownBlockType)arg2;

@end

