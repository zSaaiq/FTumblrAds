//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdMiddleTierAdContentManifest.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface YMAdMiddleTierFlurryAdContentManifest : YMAdMiddleTierAdContentManifest
{
    NSString *_identifier;
    NSString *_interactionType;
    NSString *_clickURLFormat;
    NSNumber *_forceNativeBrowser;
    NSDictionary *_diagnostics;
    NSArray *_assetList;
    NSDictionary *_uiInfo;
    NSNumber *_durationSeconds;
    NSNumber *_visiblePercentThreshold;
}

+ (id)createWithFlurryAd:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *visiblePercentThreshold; // @synthesize visiblePercentThreshold=_visiblePercentThreshold;
@property(copy, nonatomic) NSNumber *durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(copy, nonatomic) NSDictionary *uiInfo; // @synthesize uiInfo=_uiInfo;
@property(copy, nonatomic) NSArray *assetList; // @synthesize assetList=_assetList;
@property(copy, nonatomic) NSDictionary *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(copy, nonatomic) NSNumber *forceNativeBrowser; // @synthesize forceNativeBrowser=_forceNativeBrowser;
@property(copy, nonatomic) NSString *clickURLFormat; // @synthesize clickURLFormat=_clickURLFormat;
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)max;
- (id)min;
- (id)layoutType;
- (id)clickURLString;
- (id)landingPageURL;
- (id)creativeID;
- (id)displayType;
- (id)inventorySourceID;
- (id)sponsoredByLabel;
- (id)sponsor;
- (id)summary;
- (id)assetId;
- (id)assetIndex;
- (id)headline;
- (id)flashSaleCountdownMilliSec;
- (_Bool)isFlashSaleAd;
- (void)parseTileAssets;
- (void)parseFeedbackAssets:(id)arg1;
- (void)parseCallToActionAssets;
- (void)parseVideoAssets;
- (void)parseImageAssets;
- (id)fieldFromDictionary:(id)arg1 forKey:(id)arg2 ifOfType:(Class)arg3;
- (id)findSponsoredAdAssetFromFlurryManagedUIAd:(id)arg1;
- (id)initWithFlurryAd:(id)arg1;

@end

