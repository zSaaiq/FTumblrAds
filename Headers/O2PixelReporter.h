//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface O2PixelReporter : NSObject
{
    _Bool _isAutoplayEnabled;
    double _sdkCreationDate;
    NSString *_playerId;
    NSString *_buyingCompanyId;
    NSString *_videoId;
    NSString *_sessionId;
    NSString *_videoViewId;
    NSString *_playerType;
    NSString *_playerVersion;
    NSString *_platformSupport;
    NSURL *_trkBaseUrl;
    NSURL *_adsBaseUrl;
    NSNumber *_hardTimeout;
    NSString *_uuid;
    NSString *_bundleIdentifier;
    NSString *_experience;
    NSString *_bucket;
    CDUnknownBlockType _send;
    NSString *_spaceId;
    CDUnknownBlockType _cachebuster;
    CDUnknownBlockType _currentDateProvider;
}

+ (id)getTimestampBetweenStartTimeInterval:(double)arg1 andEnd:(double)arg2;
+ (id)executionStageFromStage:(unsigned long long)arg1;
+ (id)responseStatusFromStatus:(unsigned long long)arg1;
+ (id)fillTypeFromTimeout:(unsigned long long)arg1;
+ (id)cachebuster;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType cachebuster; // @synthesize cachebuster=_cachebuster;
@property(readonly, copy, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
@property(readonly, copy, nonatomic) CDUnknownBlockType send; // @synthesize send=_send;
@property(readonly, copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(readonly, copy, nonatomic) NSString *experience; // @synthesize experience=_experience;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) _Bool isAutoplayEnabled; // @synthesize isAutoplayEnabled=_isAutoplayEnabled;
@property(readonly, copy, nonatomic) NSNumber *hardTimeout; // @synthesize hardTimeout=_hardTimeout;
@property(readonly, copy, nonatomic) NSURL *adsBaseUrl; // @synthesize adsBaseUrl=_adsBaseUrl;
@property(readonly, copy, nonatomic) NSURL *trkBaseUrl; // @synthesize trkBaseUrl=_trkBaseUrl;
@property(readonly, copy, nonatomic) NSString *platformSupport; // @synthesize platformSupport=_platformSupport;
@property(readonly, copy, nonatomic) NSString *playerVersion; // @synthesize playerVersion=_playerVersion;
@property(readonly, copy, nonatomic) NSString *playerType; // @synthesize playerType=_playerType;
@property(readonly, copy, nonatomic) NSString *videoViewId; // @synthesize videoViewId=_videoViewId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(readonly, copy, nonatomic) NSString *buyingCompanyId; // @synthesize buyingCompanyId=_buyingCompanyId;
@property(readonly, copy, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(readonly, nonatomic) double sdkCreationDate; // @synthesize sdkCreationDate=_sdkCreationDate;
- (void)contentVideoFinished;
- (void)adRequestWithSequenceNumber:(unsigned long long)arg1;
- (void)videoPlayWithViewport:(struct CGSize)arg1;
- (void)contextStarted;
- (void)adStartWithMetaInfo:(id)arg1;
- (void)adEngineIssueWithVrmInfo:(id)arg1 description:(id)arg2 transactionId:(id)arg3 playType:(id)arg4 poid:(id)arg5 adseq:(id)arg6;
- (void)adViewabilityWithVendor:(id)arg1 playType:(id)arg2 poid:(id)arg3 adseq:(id)arg4 pblobID:(id)arg5;
- (void)adServerRequestWithMetaInfo:(id)arg1;
- (void)adViewTime:(id)arg1 adLength:(id)arg2 ruleId:(id)arg3 adId:(id)arg4 transactionId:(id)arg5 poid:(id)arg6 adseq:(id)arg7 pblobID:(id)arg8;
- (void)slotOpportunityWithPlayerWidth:(id)arg1 slot:(id)arg2 transactionId:(id)arg3 playType:(id)arg4 poid:(id)arg5 adseq:(id)arg6 pblobID:(id)arg7;
- (void)adEngineFlowWithMetaInfo:(id)arg1 stage:(unsigned long long)arg2 width:(id)arg3 height:(id)arg4 adId:(id)arg5 transactionId:(id)arg6 playType:(id)arg7 poid:(id)arg8 adseq:(id)arg9;
- (void)adEngineResponseWithInfo:(id)arg1 responseTime:(unsigned long long)arg2 fillType:(unsigned long long)arg3 status:(unsigned long long)arg4 transactionId:(id)arg5 playType:(id)arg6 poid:(id)arg7 adseq:(id)arg8;
- (void)adEngineRequestWithMetaInfo:(id)arg1 transactionId:(id)arg2 playType:(id)arg3 poid:(id)arg4 adseq:(id)arg5;
- (id)initWithPlayerId:(id)arg1 buyingCompanyId:(id)arg2 videoId:(id)arg3 playerVersion:(id)arg4 trkBaseUrl:(id)arg5 adsBaseUrl:(id)arg6 hardTimeout:(id)arg7 isAutoplayEnabled:(_Bool)arg8 sdkCreationDate:(id)arg9 experience:(id)arg10 bucket:(id)arg11 sendTrackingPixel:(CDUnknownBlockType)arg12 spaceId:(id)arg13 sessionId:(id)arg14 videoViewId:(id)arg15 uuid:(id)arg16 bundleIdentifier:(id)arg17 cachebuster:(CDUnknownBlockType)arg18 currentDateProvider:(CDUnknownBlockType)arg19;

@end

