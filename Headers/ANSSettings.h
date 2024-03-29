//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ANSSettings : NSObject
{
    NSDictionary *_settingsDictionary;
}

@property(readonly, nonatomic) NSDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) double lowPowerUploadTimeout;
@property(readonly, nonatomic) double defaultUploadTimeout;
@property(readonly, nonatomic) long long samplingRate;
@property(readonly, nonatomic) double flushInterval;
@property(readonly, nonatomic) long long maxPendingSendFiles;
@property(readonly, nonatomic) long long maximumPayloadSize;
@property(readonly, nonatomic) _Bool shouldIncludePurchaseEventsInForwardedFirebaseEvents;
@property(readonly, nonatomic) _Bool shouldForwardToFirebaseAnalytics;
@property(readonly, nonatomic) _Bool shouldCollectPredefinedEvents;
@property(readonly, nonatomic) _Bool shouldCollectCustomEvents;
@property(readonly, nonatomic) _Bool shouldCollectAnalytics;
@property(readonly, nonatomic) NSURL *answersURL;
@property(readonly, nonatomic) _Bool valid;
- (id)initWithDictionary:(id)arg1;

@end

