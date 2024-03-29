//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryActor.h"

@class CTTelephonyNetworkInfo, NSObject, NSOperationQueue;
@protocol OS_dispatch_source;

@interface FlurryCrashContext : FlurryActor
{
    _Bool _isCaptureContextStarted;
    NSObject<OS_dispatch_source> *_timer_10sec;
    NSObject<OS_dispatch_source> *_timer_30sec;
    NSOperationQueue *_notificationQueue;
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
}

+ (id)stringWithNetworkStatus:(int)arg1;
+ (id)stringWithOrientation:(long long)arg1;
+ (id)stringWithUIApplicationState:(long long)arg1;
+ (int)openContextFile;
+ (id)contextPath;
+ (id)sharedInstance;
+ (void)setupContext;
@property(nonatomic) _Bool isCaptureContextStarted; // @synthesize isCaptureContextStarted=_isCaptureContextStarted;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo; // @synthesize telephonyNetworkInfo=_telephonyNetworkInfo;
@property(retain, nonatomic) NSOperationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer_30sec; // @synthesize timer_30sec=_timer_30sec;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer_10sec; // @synthesize timer_10sec=_timer_10sec;
- (void).cxx_destruct;
- (id)contextWithData:(id)arg1;
- (void)onqueue_captureDiskUsage;
- (void)onqueue_captureMemoryUsage;
- (void)onqueue_captureNetworkStatusAndSubscribeForUpdates;
- (void)onqueue_editContextSetInterfaceOrientation:(long long)arg1;
- (void)onqueue_captureInterfaceOrientationAndSubscribeForUpdates;
- (void)onqueue_editContextApplicationState:(long long)arg1;
- (void)onqueue_addObserverForName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)onqueue_captureApplicationStateAndSubscribeForUpdates;
- (id)currentContext;
- (id)savedContext;
- (void)onqueue_startCapturingContext;
- (void)save;
- (void)startCapturingContext;
- (id)initSharedInstance;

@end

