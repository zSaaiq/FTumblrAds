//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FlurryAdGlobalPersistentManager : NSObject
{
    NSObject<OS_dispatch_queue> *_persistentGlobalsMapQueue;
    NSObject<OS_dispatch_queue> *_persistentCookiesMapQueue;
    NSObject<OS_dispatch_queue> *_persistentUrlsMapQueue;
    NSObject<OS_dispatch_queue> *_persistentPulseUrlsMapQueue;
    NSObject<OS_dispatch_queue> *_persistentPulsePrepUrlsMapQueue;
    NSMutableDictionary *_persistentGlobalsMap;
    NSMutableDictionary *_persistentCookiesMap;
    NSMutableDictionary *_persistentUrlsMap;
    NSMutableDictionary *_persistentPulseUrlsMap;
    NSMutableDictionary *_persistentPulsePrepUrlsMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *persistentPulsePrepUrlsMap; // @synthesize persistentPulsePrepUrlsMap=_persistentPulsePrepUrlsMap;
@property(retain, nonatomic) NSMutableDictionary *persistentPulseUrlsMap; // @synthesize persistentPulseUrlsMap=_persistentPulseUrlsMap;
@property(retain, nonatomic) NSMutableDictionary *persistentUrlsMap; // @synthesize persistentUrlsMap=_persistentUrlsMap;
@property(retain, nonatomic) NSMutableDictionary *persistentCookiesMap; // @synthesize persistentCookiesMap=_persistentCookiesMap;
@property(retain, nonatomic) NSMutableDictionary *persistentGlobalsMap; // @synthesize persistentGlobalsMap=_persistentGlobalsMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentPulsePrepUrlsMapQueue; // @synthesize persistentPulsePrepUrlsMapQueue=_persistentPulsePrepUrlsMapQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentPulseUrlsMapQueue; // @synthesize persistentPulseUrlsMapQueue=_persistentPulseUrlsMapQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentUrlsMapQueue; // @synthesize persistentUrlsMapQueue=_persistentUrlsMapQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentCookiesMapQueue; // @synthesize persistentCookiesMapQueue=_persistentCookiesMapQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentGlobalsMapQueue; // @synthesize persistentGlobalsMapQueue=_persistentGlobalsMapQueue;
- (void).cxx_destruct;
- (void)processWriteOperationForPersistentPulsePrepUrlMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processReadOperationForPersistentPulsePrepUrlMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processWriteOperationForPersistentPulseUrlMapSyncWithBlock:(CDUnknownBlockType)arg1;
- (void)processWriteOperationForPersistentPulseUrlMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processReadOperationForPersistentPulseUrlMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processWriteOperationForPersistentUrlMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processReadOperationForPersistentUrlMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processWriteOperationForPersistentCookiesMapSyncWithBlock:(CDUnknownBlockType)arg1;
- (void)processWriteOperationForPersistentCookiesMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processReadOperationForPersistentCookiesMapSyncWithBlock:(CDUnknownBlockType)arg1;
- (void)processReadOperationForPersistentCookiesMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processWriteOperationForPersistentGlobalsMapWithBlock:(CDUnknownBlockType)arg1;
- (void)processReadOperationForPersistentGlobalsMapSyncWithBlock:(CDUnknownBlockType)arg1;
- (void)processReadOperationForPersistentGlobalsMapWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

