//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, YMAdAppPolicy, YMAdCustomPolicy, YMAdFeedbackPolicy, YMAdPlacementPolicy;
@protocol YMAdPolicyFactoryListener;

@interface YMAdPolicyFactory : NSObject
{
    long long loadOnceToken;
    _Bool _loaded;
    YMAdPlacementPolicy *_placementPolicy;
    NSString *_deviceSectionName;
    Class _dataLoader;
    NSMutableDictionary *_renderingPolicies;
    NSMutableDictionary *_unitPolicies;
    YMAdCustomPolicy *_customPolicy;
    YMAdFeedbackPolicy *_feedbackPolicy;
    YMAdAppPolicy *_appPolicy;
    id <YMAdPolicyFactoryListener> _listener;
    NSLock *_listenerAssignmentLock;
}

+ (id)deviceSectionNameFor:(id)arg1;
+ (id)factoryForType:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSLock *listenerAssignmentLock; // @synthesize listenerAssignmentLock=_listenerAssignmentLock;
@property(retain, nonatomic) id <YMAdPolicyFactoryListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) YMAdAppPolicy *appPolicy; // @synthesize appPolicy=_appPolicy;
@property(retain, nonatomic) YMAdFeedbackPolicy *feedbackPolicy; // @synthesize feedbackPolicy=_feedbackPolicy;
@property(retain, nonatomic) YMAdCustomPolicy *customPolicy; // @synthesize customPolicy=_customPolicy;
@property(retain, nonatomic) NSMutableDictionary *unitPolicies; // @synthesize unitPolicies=_unitPolicies;
@property(retain, nonatomic) NSMutableDictionary *renderingPolicies; // @synthesize renderingPolicies=_renderingPolicies;
@property(retain, nonatomic) Class dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSString *deviceSectionName; // @synthesize deviceSectionName=_deviceSectionName;
@property(retain, nonatomic) YMAdPlacementPolicy *placementPolicy; // @synthesize placementPolicy=_placementPolicy;
- (id)sectionNameForUnitDisplayType:(int)arg1;
- (id)sectionNameForAdLayoutType:(long long)arg1;
- (id)getAppPolicy;
- (id)getFeedbackPolicy;
- (id)getCustomPolicy;
- (id)getPlacementPolicy;
- (id)getUnitPolicyForDisplayType:(int)arg1;
- (id)getRenderingPolicyForLayoutType:(long long)arg1;
- (id)unitPolicyPathKeyForUnitDisplayType:(int)arg1;
- (id)renderingPolicyPathKeyForLayoutType:(long long)arg1;
- (id)keyForPath:(id)arg1;
- (id)lookupDictionary:(id)arg1 forPathFallingBack:(id)arg2;
- (id)convertManifests:(id)arg1 toPoliciesOfType:(Class)arg2;
- (_Bool)isASubSectionKey:(id)arg1;
- (void)assignListener:(id)arg1;
- (void)recursivelyMergeManifestsOf:(Class)arg1 fromPayload:(id)arg2 intoDictionary:(id)arg3;
- (void)issueNotificationsForAllPoliciesTo:(id)arg1;
- (void)markLoadingComplete;
- (void)loadPoliciesIfNeeded;
- (void)preloadPolicies;
- (id)initForDeviceConfiguration:(id)arg1 dataLoader:(Class)arg2;

@end

