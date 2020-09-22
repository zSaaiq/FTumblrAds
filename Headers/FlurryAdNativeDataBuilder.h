//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdActor.h"

@class FlurryAd, FlurryAdManager, FlurryAdTargeting, NSMutableArray, NSString;
@protocol IFlurryAdNativeDataBuilder;

@interface FlurryAdNativeDataBuilder : FlurryAdActor
{
    _Bool _autoPlayWifi;
    _Bool _autoPlayCellular;
    _Bool _autoPlay;
    _Bool _autoLoop;
    _Bool _isVideo;
    _Bool _isTileAd;
    NSMutableArray *_mutableAssetList;
    NSString *_tileRendererURL;
    NSString *_templateInfo;
    NSString *_tileAssetsJson;
    FlurryAdManager *_adManager;
    NSString *_space;
    FlurryAd *_ad;
    FlurryAdTargeting *_targeting;
    id <IFlurryAdNativeDataBuilder> _adNativeDelegate;
}

@property(nonatomic) __weak id <IFlurryAdNativeDataBuilder> adNativeDelegate; // @synthesize adNativeDelegate=_adNativeDelegate;
@property(retain, nonatomic) FlurryAdTargeting *targeting; // @synthesize targeting=_targeting;
@property(retain, nonatomic) FlurryAd *ad; // @synthesize ad=_ad;
@property(copy, nonatomic) NSString *space; // @synthesize space=_space;
@property(retain, nonatomic) FlurryAdManager *adManager; // @synthesize adManager=_adManager;
@property(copy, nonatomic) NSString *tileAssetsJson; // @synthesize tileAssetsJson=_tileAssetsJson;
@property(nonatomic) _Bool isTileAd; // @synthesize isTileAd=_isTileAd;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool autoLoop; // @synthesize autoLoop=_autoLoop;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool autoPlayCellular; // @synthesize autoPlayCellular=_autoPlayCellular;
@property(nonatomic) _Bool autoPlayWifi; // @synthesize autoPlayWifi=_autoPlayWifi;
@property(copy, nonatomic) NSString *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(copy, nonatomic) NSString *tileRendererURL; // @synthesize tileRendererURL=_tileRendererURL;
@property(retain, nonatomic) NSMutableArray *mutableAssetList; // @synthesize mutableAssetList=_mutableAssetList;
- (void).cxx_destruct;
- (void)prepareSpaceForAd:(id)arg1;
- (id)getCachableAssetList;
- (_Bool)ready;
- (void)block_fetchAd:(id)arg1 andTargeting:(id)arg2;
- (void)fetchAdWithAdDelegate:(id)arg1 andTargeting:(id)arg2;
- (void)dealloc;
- (id)initWithSpace:(id)arg1 dataBuilderDelegate:(id)arg2;

@end

