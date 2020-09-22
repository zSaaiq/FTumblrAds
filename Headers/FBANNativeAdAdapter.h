//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBDisplayAdAdapter.h"

#import "FBAdCommandProcessorDelegate-Protocol.h"

@class FBAdCommandProcessor, NSString, UIViewController;

@interface FBANNativeAdAdapter : FBDisplayAdAdapter <FBAdCommandProcessorDelegate>
{
    _Bool _hasLoggedImpression;
    _Bool _hasLoggedImpressionMiss;
    FBAdCommandProcessor *_commandProcessor;
    UIViewController *_rootViewController;
}

+ (void)initialize;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) FBAdCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(nonatomic) _Bool hasLoggedImpressionMiss; // @synthesize hasLoggedImpressionMiss=_hasLoggedImpressionMiss;
@property(nonatomic) _Bool hasLoggedImpression; // @synthesize hasLoggedImpression=_hasLoggedImpression;
- (void).cxx_destruct;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)willPresentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (id)logger;
- (void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2;
- (void)onClickForViewController:(id)arg1 withExtraData:(id)arg2;
- (void)onImpressionMissWithExtraData:(id)arg1 withPostData:(id)arg2;
- (void)onImpressionWithExtraData:(id)arg1 withPostData:(id)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1;
- (id)adDataModel;
- (void)loadAdData:(id)arg1 forSize:(struct FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 placementDefinition:(id)arg5 dataModelType:(id)arg6 rewardData:(id)arg7 extraHint:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

