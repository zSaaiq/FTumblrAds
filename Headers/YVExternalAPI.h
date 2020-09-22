//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "YVExternalAPIProtocol-Protocol.h"

@class NSDictionary, NSString;
@protocol YVExternalLoggerProtocol;

@interface YVExternalAPI : NSObject <YVExternalAPIProtocol>
{
    NSDictionary *_adPluginHandlers;
}

+ (id)createExternalAPI;
+ (Class)oathExternalApiHandlerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *adPluginHandlers; // @synthesize adPluginHandlers=_adPluginHandlers;
- (void)startConfigEnvironment;
@property(readonly, nonatomic) id <YVExternalLoggerProtocol> logger;
- (id)authQueryParamsValueForVideoUUID:(id)arg1 geoHeader:(id)arg2;
- (id)authHeaderValueForVideoUUID:(id)arg1 geoHeader:(id)arg2;
- (id)configUpdatedNotificationName;
- (id)configDictionary;
- (void)removeConsentObserver;
- (void)addConsentObserverWithUpdateBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasUserConsentedForNielsen;
- (_Bool)hasUserOptedOutOfAdTracking;
- (id)userConsentRecord;
- (id)sapiBCookie;
- (void)registerExternalAdPluginClass:(Class)arg1 forMimeType:(id)arg2;
- (Class)adPluginClassForMimeType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
