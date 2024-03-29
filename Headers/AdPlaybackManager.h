//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, YVAPGeminiViewabilityManager;

@interface AdPlaybackManager : NSObject
{
    _Bool _playback0Fired;
    _Bool _playback25Fired;
    _Bool _playback50Fired;
    _Bool _playback75Fired;
    _Bool _playback100Fired;
    YVAPGeminiViewabilityManager *_geminiViewabilityManager;
    NSDictionary *_cscErrorMap;
    NSDictionary *_vast3ErrorCodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *vast3ErrorCodes; // @synthesize vast3ErrorCodes=_vast3ErrorCodes;
@property(retain, nonatomic) NSDictionary *cscErrorMap; // @synthesize cscErrorMap=_cscErrorMap;
@property _Bool playback100Fired; // @synthesize playback100Fired=_playback100Fired;
@property _Bool playback75Fired; // @synthesize playback75Fired=_playback75Fired;
@property _Bool playback50Fired; // @synthesize playback50Fired=_playback50Fired;
@property _Bool playback25Fired; // @synthesize playback25Fired=_playback25Fired;
@property _Bool playback0Fired; // @synthesize playback0Fired=_playback0Fired;
@property(retain) YVAPGeminiViewabilityManager *geminiViewabilityManager; // @synthesize geminiViewabilityManager=_geminiViewabilityManager;
- (id)fireBeacons:(id)arg1 params:(id)arg2 isGemini:(_Bool)arg3;
- (void)fireBeacon:(id)arg1;
- (id)expandGemini:(id)arg1 with:(id)arg2;
- (id)expand:(id)arg1 with:(id)arg2;
- (id)getProgressBeaconFor:(int)arg1 with:(id)arg2;
- (id)fireClickBeaconsFor:(float)arg1 with:(id)arg2;
- (id)fireGeminiViewabilityBeaconsWith:(id)arg1;
- (id)fireProgressBeaconFor:(int)arg1 with:(id)arg2 duration:(float)arg3;
- (id)fireBitateBeaconFor:(long long)arg1 with:(id)arg2;
- (id)fireErrorImpressionBeaconFor:(id)arg1 with:(id)arg2;
- (id)fireNoAdImpressionBeaconFor:(id)arg1 with:(id)arg2 error:(id)arg3 redirectList:(id)arg4;
- (id)fireImpressionBeaconsFor:(id)arg1 with:(id)arg2;
- (id)onNoAd:(id)arg1 clipId:(id)arg2;
- (id)onAdClick:(id)arg1 timeUpdate:(float)arg2 duration:(float)arg3;
- (id)onAdProgress:(id)arg1 timeUpdate:(float)arg2 duration:(float)arg3;
- (id)onAdStart:(id)arg1 bitrate:(long long)arg2 clipId:(id)arg3;
- (id)init;

@end

