//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YMAdViewProtocols-Protocol.h"

@class NSString, YMAdActionProxyExpandable, YMAdActionProxyFeedback, YMAdActionProxyVideo, YMAdContainerView;
@protocol YMAdUnitViewInternalDelegate;

@interface YMAdUnitView : UIView <YMAdViewProtocols>
{
    NSString *_reuseIdentifier;
    id <YMAdUnitViewInternalDelegate> _delegate;
    YMAdActionProxyVideo *_videoProxy;
    YMAdActionProxyFeedback *_feedbackProxy;
    YMAdActionProxyExpandable *_expandableProxy;
    YMAdContainerView *_containerView;
}

+ (id)createWithContainerView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YMAdContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) YMAdActionProxyExpandable *expandableProxy; // @synthesize expandableProxy=_expandableProxy;
@property(retain, nonatomic) YMAdActionProxyFeedback *feedbackProxy; // @synthesize feedbackProxy=_feedbackProxy;
@property(retain, nonatomic) YMAdActionProxyVideo *videoProxy; // @synthesize videoProxy=_videoProxy;
@property(nonatomic) __weak id <YMAdUnitViewInternalDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (id)videoPlaying;
- (id)expandableView;
- (id)feedbackView;
- (void)setInternalDelegate:(id)arg1;
- (void)respondToScrollViewEvent:(double)arg1 scrollOffsetY:(double)arg2;
- (void)setFontScale:(double)arg1;
- (void)warmupWithAdUnit:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservationOnContainerFrame;
- (void)setObservationOnContainerFrame;
- (void)setInstrumentationTag:(id)arg1;
- (void)setAdUnitWidth:(double)arg1;
- (void)setFontOptions:(id)arg1;
- (void)setViewOptions:(id)arg1;
- (void)setupProxies;
- (void)dealloc;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

