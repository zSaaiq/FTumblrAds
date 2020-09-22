//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YVProcessExtent.h"

#import "YVContainerExtentStoreSessionContext-Protocol.h"

@class NSString, YVMeasure, YVPlayerExtent, YVProcessNode, YVResourceNode, YVideoContainerView;

@interface YVContainerExtent : YVProcessExtent <YVContainerExtentStoreSessionContext>
{
    YVideoContainerView *_containerView;
    YVPlayerExtent *_playerExtent;
    YVMeasure *_chromeMute;
    YVMeasure *_containerTryingToPlay;
    YVResourceNode *_resolvedMuted;
    YVMeasure *_activeSession;
    YVMeasure *_frame;
    YVMeasure *_chromeView;
    YVMeasure *_alternateOverlays;
    YVResourceNode *_active;
    YVProcessNode *_muteAnalyticsSideEffect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YVProcessNode *muteAnalyticsSideEffect; // @synthesize muteAnalyticsSideEffect=_muteAnalyticsSideEffect;
@property(retain, nonatomic) YVResourceNode *active; // @synthesize active=_active;
@property(readonly, nonatomic) YVMeasure *alternateOverlays; // @synthesize alternateOverlays=_alternateOverlays;
@property(readonly, nonatomic) YVMeasure *chromeView; // @synthesize chromeView=_chromeView;
@property(readonly, nonatomic) YVMeasure *frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) YVMeasure *activeSession; // @synthesize activeSession=_activeSession;
@property(readonly, nonatomic) YVResourceNode *resolvedMuted; // @synthesize resolvedMuted=_resolvedMuted;
@property(readonly, nonatomic) YVMeasure *containerTryingToPlay; // @synthesize containerTryingToPlay=_containerTryingToPlay;
@property(readonly, nonatomic) YVMeasure *chromeMute; // @synthesize chromeMute=_chromeMute;
@property(readonly, nonatomic) __weak YVPlayerExtent *playerExtent; // @synthesize playerExtent=_playerExtent;
@property(readonly, nonatomic) __weak YVideoContainerView *containerView; // @synthesize containerView=_containerView;
- (void)updateFrame:(struct CGRect)arg1;
- (void)chromeMuteToggle;
- (void)tryingToPlayUpdated:(_Bool)arg1;
- (void)sessionActivated:(id)arg1;
- (id)initWithGraph:(id)arg1 containerView:(id)arg2 playerExtent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

