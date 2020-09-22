//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, _TtC10LinkRouter10LinkRouter, _TtC6Tumblr19ClientSideAdSources, _TtC9Analytics20SupplyLoggingManager;
@protocol TMSession, TMTumblrCoreDataController, _TtP9Analytics14EventBuffering_;

@interface TMBlogPreviewController : NSObject
{
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
    UIViewController *_sourceViewController;
    _TtC10LinkRouter10LinkRouter *_linkRouter;
    id <TMSession> _session;
    id <TMTumblrCoreDataController> _coreDataController;
    _TtC6Tumblr19ClientSideAdSources *_clientSideAdSources;
    _TtC9Analytics20SupplyLoggingManager *_supplyLoggingManager;
}

+ (id)blogPreviewViewContainerWithViewController:(id)arg1 sourceViewController:(id)arg2 cancelCallback:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC9Analytics20SupplyLoggingManager *supplyLoggingManager; // @synthesize supplyLoggingManager=_supplyLoggingManager;
@property(readonly, nonatomic) _TtC6Tumblr19ClientSideAdSources *clientSideAdSources; // @synthesize clientSideAdSources=_clientSideAdSources;
@property(readonly, nonatomic) id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) _TtC10LinkRouter10LinkRouter *linkRouter; // @synthesize linkRouter=_linkRouter;
@property(readonly, nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(readonly, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
- (void)stopPreviewingBlogPreviewContainer:(id)arg1;
- (void)startPreviewingBlogPreviewContainer:(id)arg1;
- (id)blogViewControllerWithBlogName:(id)arg1 postID:(id)arg2 managedObjectContext:(id)arg3 cancelCallback:(CDUnknownBlockType)arg4;
- (id)initWithAnalyticsBuffer:(id)arg1 coreDataController:(id)arg2 sourceViewController:(id)arg3 linkRouter:(id)arg4 session:(id)arg5 clientSideAdSources:(id)arg6 supplyLoggingManager:(id)arg7;

@end
