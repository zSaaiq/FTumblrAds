//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YMAdCustomPolicy, YMAdPlacementPolicy, YMAdPolicyFactory, YMAdRenderingPolicy, YMAdUnitPolicy;

@protocol YMAdPolicyFactoryListener <NSObject>

@optional
- (void)policyFactory:(YMAdPolicyFactory *)arg1 didLoadCustomPolicy:(YMAdCustomPolicy *)arg2;
- (void)policyFactory:(YMAdPolicyFactory *)arg1 didLoadPlacementPolicy:(YMAdPlacementPolicy *)arg2;
- (void)policyFactory:(YMAdPolicyFactory *)arg1 didLoadUnitPolicy:(YMAdUnitPolicy *)arg2 withKey:(NSString *)arg3;
- (void)policyFactory:(YMAdPolicyFactory *)arg1 didLoadRenderingPolicy:(YMAdRenderingPolicy *)arg2 withKey:(NSString *)arg3;
@end

