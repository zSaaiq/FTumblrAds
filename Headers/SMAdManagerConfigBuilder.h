//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SMAdManagerConfigBuilder : NSObject
{
    _Bool _isSMAdsEnabled;
    _Bool _isPanoramaEnabled;
    _Bool _isDynamicMomentsEnabled;
    _Bool _isPlayableMomentsEnabled;
    _Bool _isSafariBrowserExperimentEnabled;
    _Bool _isParallaxEnabled;
    NSString *_adManagerAPIKey;
    NSString *_adUnitString;
    unsigned long long _cachingLimit;
    double _throttlingTimeLimit;
    double _parallaxScrollPercentage;
    NSArray *_queueConfiguration;
    unsigned long long _adExpiryTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long adExpiryTimeStamp; // @synthesize adExpiryTimeStamp=_adExpiryTimeStamp;
@property(retain, nonatomic) NSArray *queueConfiguration; // @synthesize queueConfiguration=_queueConfiguration;
@property(nonatomic) double parallaxScrollPercentage; // @synthesize parallaxScrollPercentage=_parallaxScrollPercentage;
@property(nonatomic) _Bool isParallaxEnabled; // @synthesize isParallaxEnabled=_isParallaxEnabled;
@property(nonatomic) _Bool isSafariBrowserExperimentEnabled; // @synthesize isSafariBrowserExperimentEnabled=_isSafariBrowserExperimentEnabled;
@property(nonatomic) _Bool isPlayableMomentsEnabled; // @synthesize isPlayableMomentsEnabled=_isPlayableMomentsEnabled;
@property(nonatomic) _Bool isDynamicMomentsEnabled; // @synthesize isDynamicMomentsEnabled=_isDynamicMomentsEnabled;
@property(nonatomic) _Bool isPanoramaEnabled; // @synthesize isPanoramaEnabled=_isPanoramaEnabled;
@property(nonatomic) _Bool isSMAdsEnabled; // @synthesize isSMAdsEnabled=_isSMAdsEnabled;
@property(nonatomic) double throttlingTimeLimit; // @synthesize throttlingTimeLimit=_throttlingTimeLimit;
@property(nonatomic) unsigned long long cachingLimit; // @synthesize cachingLimit=_cachingLimit;
@property(retain, nonatomic) NSString *adUnitString; // @synthesize adUnitString=_adUnitString;
@property(retain, nonatomic) NSString *adManagerAPIKey; // @synthesize adManagerAPIKey=_adManagerAPIKey;
- (id)init;

@end

