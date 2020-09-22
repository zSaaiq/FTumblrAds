//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlurryCachedAsset, NSArray, NSString;
@protocol IFLurryViewabilityRuleTracker;

@protocol IFlurryNativeAd <NSObject>
@property(readonly, nonatomic) NSString *space;

@optional
@property(readonly, nonatomic) _Bool isInView100HalfTime;
@property(readonly, nonatomic) float timeInView50MaxContinuous;
@property(readonly, nonatomic) float timeInView50;
- (id <IFLurryViewabilityRuleTracker>)videoViewTracker;
- (NSArray *)videoViewabilityRules;
- (float)adPercentVisible;
- (float)videoLastPositionInSecs;
- (int)audioOnAndFullViewInMilliSecs;
- (int)videoTimeMillisForViewBeacon;
- (_Bool)isFullScreen;
- (_Bool)isAudioOn;
- (FlurryCachedAsset *)cachedAssetForPath:(NSString *)arg1;
- (NSArray *)nativeAssets;
- (void)spaceOutOfView:(NSString *)arg1;
- (void)spacePartiallyOutOfView:(NSString *)arg1;
- (void)spaceInView:(NSString *)arg1;
- (_Bool)isVideoAd;
- (void)adjustOrientation;
@end
