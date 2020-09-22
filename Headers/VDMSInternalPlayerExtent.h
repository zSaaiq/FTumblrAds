//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YVProcessExtent.h"

#import "YVContainerExtentStoreSessionContext-Protocol.h"
#import "YVPlayerExtentStoreSessionContext-Protocol.h"

@class NSString, YVMeasure;

@interface VDMSInternalPlayerExtent : YVProcessExtent <YVContainerExtentStoreSessionContext, YVPlayerExtentStoreSessionContext>
{
    YVMeasure *_resolvedMuted;
    YVMeasure *_activeSession;
    YVMeasure *_frame;
    YVMeasure *_windowState;
    YVMeasure *_friendlyObstructionViews;
    YVMeasure *_chromeView;
    YVMeasure *_alternateOverlays;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YVMeasure *alternateOverlays; // @synthesize alternateOverlays=_alternateOverlays;
@property(readonly, nonatomic) YVMeasure *chromeView; // @synthesize chromeView=_chromeView;
@property(readonly, nonatomic) YVMeasure *friendlyObstructionViews; // @synthesize friendlyObstructionViews=_friendlyObstructionViews;
@property(readonly, nonatomic) YVMeasure *windowState; // @synthesize windowState=_windowState;
@property(readonly, nonatomic) YVMeasure *frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) YVMeasure *activeSession; // @synthesize activeSession=_activeSession;
@property(readonly, nonatomic) YVMeasure *resolvedMuted; // @synthesize resolvedMuted=_resolvedMuted;
- (void)setActiveStoreSession:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setupInGraph;
- (id)initWithGraph:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
