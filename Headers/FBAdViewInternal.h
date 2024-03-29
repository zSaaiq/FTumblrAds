//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAdView.h"

#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBAdContentContainerDelegate-Protocol.h"
#import "FBAdViewNavigationPolicy-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"

@class FBAdCommandProcessor, FBAdPlacementDefinition, FBAdViewabilityValidator, FBAdWebKitContentContainer, FBHTMLAdDataModel, NSString, UIViewController;
@protocol FBAdViewInternalDelegate;

@interface FBAdViewInternal : FBAdView <FBAdCommandProcessorDelegate, FBAdViewabilityValidatorDelegate, FBAdContentContainerDelegate, FBAdViewNavigationPolicy>
{
    _Bool _adValid;
    _Bool _modalViewPresenting;
    _Bool _markupImpressionEventReceived;
    _Bool _isImpressionSent;
    long long _orientation;
    UIViewController *_rootViewControllerInternal;
    id <FBAdViewInternalDelegate> _internalDelegate;
    FBAdCommandProcessor *_commandHandler;
    FBAdViewabilityValidator *_viewabilityValidator;
    FBAdPlacementDefinition *_placementDefinition;
    FBAdWebKitContentContainer *_adContentContainer;
    double _firstImpressionTime;
    NSString *_requestId;
    struct FBAdSize _adSizeType;
}

@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) double firstImpressionTime; // @synthesize firstImpressionTime=_firstImpressionTime;
@property(nonatomic) struct FBAdSize adSizeType; // @synthesize adSizeType=_adSizeType;
@property(retain, nonatomic) FBAdWebKitContentContainer *adContentContainer; // @synthesize adContentContainer=_adContentContainer;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(retain, nonatomic) FBAdCommandProcessor *commandHandler; // @synthesize commandHandler=_commandHandler;
@property(nonatomic) _Bool isImpressionSent; // @synthesize isImpressionSent=_isImpressionSent;
@property(nonatomic) __weak id <FBAdViewInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak UIViewController *rootViewControllerInternal; // @synthesize rootViewControllerInternal=_rootViewControllerInternal;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isMarkupImpressionEventReceived) _Bool markupImpressionEventReceived; // @synthesize markupImpressionEventReceived=_markupImpressionEventReceived;
@property(nonatomic, getter=isModalViewPresenting) _Bool modalViewPresenting; // @synthesize modalViewPresenting=_modalViewPresenting;
- (void).cxx_destruct;
- (id)contentContainerViewabilityValidator;
- (void)adDidFailToLoadWithError:(id)arg1;
- (void)adDidLogClick;
- (void)adWantsToLogImpression:(id)arg1 withExtraData:(id)arg2;
- (void)adDidLoad;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)willPresentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
- (void)finishHandlingClick;
- (void)handleClickWithExtraData:(id)arg1;
- (_Bool)processFBAdSchemeLink:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3;
- (_Bool)processRequestURL:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3;
- (void)didMoveToSuperview;
- (id)logger;
@property(readonly, nonatomic) FBHTMLAdDataModel *offsiteAd;
- (void)disableViewabilityValidation;
- (void)ensureViewabilityValidation;
- (void)openAdChoicesURL:(id)arg1 adDataModel:(id)arg2;
- (void)createAdContentContainer;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)validRectForFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)loadAd;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (id)initWithAdData:(id)arg1 placementDefinition:(id)arg2 adSize:(struct FBAdSize)arg3 rootViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

