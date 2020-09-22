//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Ad, AdSpec, CommunicatorSpec, NSMutableArray, NSString, Profile;

@interface AdResponse : NSObject
{
    _Bool _isCached;
    _Bool _liveClickDisabled;
    _Bool _vodClickDisabled;
    AdSpec *_adSpec;
    Ad *_adObj;
    NSMutableArray *_adSources;
    unsigned long long _adCallSequence;
    double _httpTimeout;
    CommunicatorSpec *_communicatorSpec;
    NSString *_cacheState;
    NSString *_errorState;
    NSMutableArray *_redirectList;
    NSString *_firstCall;
    NSString *_adPosition;
    unsigned long long _midrollAdBreakDuration;
    unsigned long long _midrollAdBreakNumber;
    unsigned long long _midrollAdSequence;
    unsigned long long _midrollNumberOfAds;
    NSString *_midrollAdLabel;
    NSString *_midrollAdBreakId;
    unsigned long long _adDuration;
    Profile *_adCallProfile;
    double _timestamp;
}

- (void).cxx_destruct;
@property _Bool vodClickDisabled; // @synthesize vodClickDisabled=_vodClickDisabled;
@property _Bool liveClickDisabled; // @synthesize liveClickDisabled=_liveClickDisabled;
@property double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) Profile *adCallProfile; // @synthesize adCallProfile=_adCallProfile;
@property unsigned long long adDuration; // @synthesize adDuration=_adDuration;
@property(retain) NSString *midrollAdBreakId; // @synthesize midrollAdBreakId=_midrollAdBreakId;
@property(retain) NSString *midrollAdLabel; // @synthesize midrollAdLabel=_midrollAdLabel;
@property unsigned long long midrollNumberOfAds; // @synthesize midrollNumberOfAds=_midrollNumberOfAds;
@property unsigned long long midrollAdSequence; // @synthesize midrollAdSequence=_midrollAdSequence;
@property unsigned long long midrollAdBreakNumber; // @synthesize midrollAdBreakNumber=_midrollAdBreakNumber;
@property unsigned long long midrollAdBreakDuration; // @synthesize midrollAdBreakDuration=_midrollAdBreakDuration;
@property(retain) NSString *adPosition; // @synthesize adPosition=_adPosition;
@property(retain) NSString *firstCall; // @synthesize firstCall=_firstCall;
@property(retain) NSMutableArray *redirectList; // @synthesize redirectList=_redirectList;
@property(retain) NSString *errorState; // @synthesize errorState=_errorState;
@property(retain) NSString *cacheState; // @synthesize cacheState=_cacheState;
@property(retain) CommunicatorSpec *communicatorSpec; // @synthesize communicatorSpec=_communicatorSpec;
@property _Bool isCached; // @synthesize isCached=_isCached;
@property double httpTimeout; // @synthesize httpTimeout=_httpTimeout;
@property unsigned long long adCallSequence; // @synthesize adCallSequence=_adCallSequence;
@property(retain) NSMutableArray *adSources; // @synthesize adSources=_adSources;
@property(retain) Ad *adObj; // @synthesize adObj=_adObj;
@property(retain) AdSpec *adSpec; // @synthesize adSpec=_adSpec;
- (void)setNewRedirectUrl:(id)arg1;
- (void)clone:(id)arg1;

@end

