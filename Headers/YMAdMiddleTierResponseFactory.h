//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdDiagnosing.h"

@class NSArray, YMAdManager, YMAdPolicyFactory;

@interface YMAdMiddleTierResponseFactory : YMAdDiagnosing
{
    YMAdManager *_adManager;
    NSArray *_adFilters;
    YMAdPolicyFactory *_policyFactory;
}

+ (id)createWithManager:(id)arg1 diagnostics:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YMAdPolicyFactory *policyFactory; // @synthesize policyFactory=_policyFactory;
@property(copy, nonatomic) NSArray *adFilters; // @synthesize adFilters=_adFilters;
@property(nonatomic) __weak YMAdManager *adManager; // @synthesize adManager=_adManager;
- (id)parseStyles:(id)arg1;
- (id)constructAttributedTextFromComponents:(id)arg1;
- (id)loadPlacementPolicy;
- (id)loadUnitPolicyForDisplayType:(int)arg1;
- (long long)parseAdInteractionTypeString:(id)arg1;
- (id)createVideoFromManifest:(id)arg1;
- (id)createAppFromManifest:(id)arg1;
- (id)createCallToActionFromManifest:(id)arg1;
- (id)createFeedbackFromManifest:(id)arg1;
- (id)createPhotoFromManifest:(id)arg1;
- (id)createImageFromManifest:(id)arg1;
- (id)createAdFromManifest:(id)arg1 withLanguageCode:(id)arg2 withRequest:(id)arg3;
- (void)parseFromManifest:(id)arg1 request:(id)arg2 layoutType:(long long *)arg3 interactionType:(long long *)arg4;
- (id)runFilters:(id)arg1 filters:(id)arg2 adUnit:(id)arg3;
- (id)createAds:(id)arg1 withLanguageCode:(id)arg2 forAdUnit:(id)arg3 forRequest:(id)arg4;
- (int)parseUnitDisplayTypeString:(id)arg1;
- (long long)parseAdLayoutTypeString:(id)arg1;
- (int)parseUnitLayoutTypeString:(id)arg1;
- (id)createAdUnitWithIdentifier:(id)arg1 request:(id)arg2 fromManifest:(id)arg3 withLanguageCode:(id)arg4;
- (id)createAdUnits:(id)arg1 request:(id)arg2 withLanguageCode:(id)arg3;
- (id)createFromManifest:(id)arg1 request:(id)arg2 withLanguageCode:(id)arg3;
- (id)initWithManager:(id)arg1 diagnostics:(id)arg2 policyFactory:(id)arg3;

@end

