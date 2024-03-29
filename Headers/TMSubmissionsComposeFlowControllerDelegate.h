//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMComposeFlowControllerDelegate-Protocol.h"

@class LinkRouter, NSString, TMComposeFlowController;
@protocol EventBuffering, TMSession, TMTumblrCoreDataController;

@interface TMSubmissionsComposeFlowControllerDelegate : NSObject <TMComposeFlowControllerDelegate>
{
    TMComposeFlowController *_composeFlowController;
    id <EventBuffering> _analyticsBuffer;
    id <TMTumblrCoreDataController> _coreDataController;
    LinkRouter *_linkRouter;
    id <TMSession> _session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) LinkRouter *linkRouter; // @synthesize linkRouter=_linkRouter;
@property(readonly, nonatomic) id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(readonly, nonatomic) id <EventBuffering> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(retain, nonatomic) TMComposeFlowController *composeFlowController; // @synthesize composeFlowController=_composeFlowController;
- (void)composeFlowControllerDidFinish:(id)arg1;
- (void)composeFlowControllerDidCancel:(id)arg1;
- (void)composeFlowControllerWillPresentComposeUI:(id)arg1 forComposeType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAnalyticsBuffer:(id)arg1 coreDataController:(id)arg2 linkRouter:(id)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

