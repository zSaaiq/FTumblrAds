//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdDataModel, FBNativeAdDataModel, UIView;
@protocol FBDisplayAdAdapterDelegate;

@interface FBDisplayAdAdapter : NSObject
{
    _Bool _needsImpressionClickHandler;
    UIView *_adView;
    FBNativeAdDataModel *_nativeAdData;
    id <FBDisplayAdAdapterDelegate> _delegate;
}

@property(nonatomic) __weak id <FBDisplayAdAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needsImpressionClickHandler; // @synthesize needsImpressionClickHandler=_needsImpressionClickHandler;
@property(retain, nonatomic) FBNativeAdDataModel *nativeAdData; // @synthesize nativeAdData=_nativeAdData;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)onClickForViewController:(id)arg1 withExtraData:(id)arg2;
- (void)onImpressionMissWithExtraData:(id)arg1 withPostData:(id)arg2;
- (void)onImpressionWithExtraData:(id)arg1 withPostData:(id)arg2;
- (void)unregisterView;
- (void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1;
- (_Bool)setRewardData:(id)arg1;
- (void)loadAdData:(id)arg1 forSize:(struct FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 placementDefinition:(id)arg5 dataModelType:(id)arg6 rewardData:(id)arg7 extraHint:(id)arg8;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) FBAdDataModel *adDataModel;
- (id)initWithDelegate:(id)arg1;

@end
