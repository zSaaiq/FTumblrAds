//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, O2VRMSkip;

@interface O2VRMAd : NSObject
{
    NSArray *_adMediaInfos;
    NSURL *_clickthroughUrl;
    long long _maxAdDuration;
    O2VRMSkip *_skip;
    NSArray *_icons;
    NSArray *_verification;
    CDUnknownBlockType _dispatch;
}

+ (id)adWithMediaInfos:(id)arg1 andClickUrl:(id)arg2 maxAdDuration:(long long)arg3 adSkip:(id)arg4 icons:(id)arg5 verification:(id)arg6 dispatch:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType dispatch; // @synthesize dispatch=_dispatch;
@property(readonly, copy, nonatomic) NSArray *verification; // @synthesize verification=_verification;
@property(readonly, copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(readonly, nonatomic) O2VRMSkip *skip; // @synthesize skip=_skip;
@property(readonly, nonatomic) long long maxAdDuration; // @synthesize maxAdDuration=_maxAdDuration;
@property(readonly, copy, nonatomic) NSURL *clickthroughUrl; // @synthesize clickthroughUrl=_clickthroughUrl;
@property(readonly, copy, nonatomic) NSArray *adMediaInfos; // @synthesize adMediaInfos=_adMediaInfos;
- (id)description;
- (void)updateIconClickthroughHidden;
- (void)updateClickthroughShownWithIconId:(id)arg1;
- (void)onIconViewDisplayedWithId:(id)arg1;
- (void)onSkipAd;
- (void)updateUnmute;
- (void)updateMute;
- (void)updatePlaybackStatusError;
- (void)updateEndPlayback;
- (void)updateClickthroughUrlHidden;
- (void)updateClickthroughUrlShown;
- (void)updateStreamPaused;
- (void)updateStreamResumed;
- (void)updateCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)updateDuration:(CDStruct_1b6d18a9)arg1;
- (id)initWithMediaInfos:(id)arg1 andClickUrl:(id)arg2 maxAdDuration:(long long)arg3 adSkip:(id)arg4 icons:(id)arg5 verification:(id)arg6 dispatch:(CDUnknownBlockType)arg7;
- (void)updatePlaybackStatusError:(id)arg1;

@end

