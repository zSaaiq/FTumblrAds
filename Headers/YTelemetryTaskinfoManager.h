//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface YTelemetryTaskinfoManager : NSObject
{
    NSMutableDictionary *_map;
    NSMutableDictionary *_Sessionmap;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)taskinfoFor:(id)arg1;
- (void)removeTaskinfoForSession:(id)arg1;
- (void)removeTaskinfoFor:(id)arg1;
- (void)setTaskinfoFor:(id)arg1 withInfo:(id)arg2;
- (id)init;

@end

