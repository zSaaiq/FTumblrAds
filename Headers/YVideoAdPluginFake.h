//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YahooVideoAdPlugin.h"

@class NSArray, NSNumber;
@protocol YVAPAnalyticsDelegate;

@interface YVideoAdPluginFake : YahooVideoAdPlugin
{
    _Bool _test_doNotMockBeginAdExperience;
    _Bool _test_returnNoAds;
    _Bool _test_delayAdUpdates;
    _Bool _test_midrollRequestActive;
    _Bool _test_nflLiveMidrolls;
    id <YVAPAnalyticsDelegate> _test_logger;
    long long _test_numPrerollsToLoad;
    long long _test_numBumpersToLoad;
    long long _test_numPostrollsToLoad;
    long long _test_numMidrollsToReturn;
    NSArray *_test_midrollTimes;
    CDUnknownBlockType _test_adUpdateBlock;
    NSNumber *_test_currentMidrollRequestAdBreakNumber;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool test_nflLiveMidrolls; // @synthesize test_nflLiveMidrolls=_test_nflLiveMidrolls;
@property(retain, nonatomic) NSNumber *test_currentMidrollRequestAdBreakNumber; // @synthesize test_currentMidrollRequestAdBreakNumber=_test_currentMidrollRequestAdBreakNumber;
@property(nonatomic) _Bool test_midrollRequestActive; // @synthesize test_midrollRequestActive=_test_midrollRequestActive;
@property(copy, nonatomic) CDUnknownBlockType test_adUpdateBlock; // @synthesize test_adUpdateBlock=_test_adUpdateBlock;
@property(nonatomic) _Bool test_delayAdUpdates; // @synthesize test_delayAdUpdates=_test_delayAdUpdates;
@property(nonatomic) _Bool test_returnNoAds; // @synthesize test_returnNoAds=_test_returnNoAds;
@property(nonatomic) _Bool test_doNotMockBeginAdExperience; // @synthesize test_doNotMockBeginAdExperience=_test_doNotMockBeginAdExperience;
@property(retain, nonatomic) NSArray *test_midrollTimes; // @synthesize test_midrollTimes=_test_midrollTimes;
@property(nonatomic) long long test_numMidrollsToReturn; // @synthesize test_numMidrollsToReturn=_test_numMidrollsToReturn;
@property(nonatomic) long long test_numPostrollsToLoad; // @synthesize test_numPostrollsToLoad=_test_numPostrollsToLoad;
@property(nonatomic) long long test_numBumpersToLoad; // @synthesize test_numBumpersToLoad=_test_numBumpersToLoad;
@property(nonatomic) long long test_numPrerollsToLoad; // @synthesize test_numPrerollsToLoad=_test_numPrerollsToLoad;
@property(retain, nonatomic) id <YVAPAnalyticsDelegate> test_logger; // @synthesize test_logger=_test_logger;
- (id)prepareAdStreamsWithAdResponses:(id)arg1 maxDuration:(double)arg2 startingAdNumber:(long long)arg3 adBreakNumber:(long long)arg4;
- (_Bool)completeCurrentMidrollsRequest;
- (void)startRequestNFLLiveMidrolls:(id)arg1 adBreakNumber:(long long)arg2 timeout:(id)arg3 label:(id)arg4 adBreakId:(id)arg5;
- (void)startRequestMidrollsForDuration:(id)arg1 adBreakNumber:(long long)arg2 timeout:(id)arg3;
- (void)onAdBreakEnd:(id)arg1;
- (void)onAdBreakStart:(id)arg1;
- (void)onAdPlaybackError:(id)arg1 error:(id)arg2;
- (void)onAdNotPlayable:(id)arg1 error:(id)arg2;
- (void)onNoAd:(id)arg1;
- (void)onAdClick:(id)arg1 progess:(double)arg2 withDuration:(double)arg3;
- (void)onAdEnd:(id)arg1;
- (void)onAdProgress:(id)arg1 progess:(double)arg2 withDuration:(double)arg3;
- (void)onContentVideoProgess:(double)arg1 withDuration:(double)arg2;
- (void)onAdStart:(id)arg1 bitrate:(long long)arg2 startLatency:(double)arg3;
- (void)onContentVideoStart;
- (void)sendAdStreamUpdate:(id)arg1;
- (void)test_sendBumperUpdates;
- (void)test_sendPrerollUpdates;
- (_Bool)isWaitingForPrevideoAds;
- (void)beginAdExperience:(id)arg1;
- (id)initWithAccountId:(id)arg1 timeout:(double)arg2 analytics:(id)arg3;

@end
