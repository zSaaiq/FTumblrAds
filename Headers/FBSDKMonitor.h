//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKMonitor : NSObject
{
}

+ (void)clearEntries;
+ (void)flush;
+ (void)disable;
+ (void)stopFlushTimer;
+ (void)startFlushTimer;
+ (void)applicationMovingFromActiveStateOrTerminating;
+ (void)applicationDidBecomeActive;
+ (void)unregisterNotifications;
+ (void)registerNotifications;
+ (void)setStore:(id)arg1;
+ (id)store;
+ (void)setEntries:(id)arg1;
+ (id)entries;
+ (void)record:(id)arg1;
+ (void)enable;

@end

