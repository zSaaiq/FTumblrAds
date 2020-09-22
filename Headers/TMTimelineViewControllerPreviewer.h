//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class NSString, TMBlogPreviewContainer, TMPostViewModelCache, UITableViewController, _TtC10LinkRouter10LinkRouter, _TtC22TimelineViewManagement21PostViewConfiguration, _TtC6Tumblr19ClientSideAdSources, _TtC8TumblrUI32TableViewTimelineObjectRetriever;
@protocol TMSession, TMTumblrCoreDataController, UIViewControllerPreviewing, _TtP9Analytics14EventBuffering_;

@interface TMTimelineViewControllerPreviewer : NSObject <UIViewControllerPreviewingDelegate>
{
    UITableViewController *_viewController;
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
    _TtC10LinkRouter10LinkRouter *_linkRouter;
    id <TMSession> _session;
    _TtC8TumblrUI32TableViewTimelineObjectRetriever *_timelineObjectRetriever;
    _TtC22TimelineViewManagement21PostViewConfiguration *_postViewConfiguration;
    TMPostViewModelCache *_postViewModelCache;
    id <TMTumblrCoreDataController> _coreDataController;
    _TtC6Tumblr19ClientSideAdSources *_clientSideAdSources;
    TMBlogPreviewContainer *_blogPreviewContainer;
    id <UIViewControllerPreviewing> _previewingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain, nonatomic) TMBlogPreviewContainer *blogPreviewContainer; // @synthesize blogPreviewContainer=_blogPreviewContainer;
@property(readonly, nonatomic) _TtC6Tumblr19ClientSideAdSources *clientSideAdSources; // @synthesize clientSideAdSources=_clientSideAdSources;
@property(readonly, nonatomic) id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(readonly, nonatomic) TMPostViewModelCache *postViewModelCache; // @synthesize postViewModelCache=_postViewModelCache;
@property(readonly, nonatomic) _TtC22TimelineViewManagement21PostViewConfiguration *postViewConfiguration; // @synthesize postViewConfiguration=_postViewConfiguration;
@property(readonly, nonatomic) _TtC8TumblrUI32TableViewTimelineObjectRetriever *timelineObjectRetriever; // @synthesize timelineObjectRetriever=_timelineObjectRetriever;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) _TtC10LinkRouter10LinkRouter *linkRouter; // @synthesize linkRouter=_linkRouter;
@property(readonly, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(readonly, nonatomic) __weak UITableViewController *viewController; // @synthesize viewController=_viewController;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)blogPreviewContextController;
- (_Bool)is3DTouchAvailable;
- (void)updatePreviewingContext;
- (id)initWithTimelineViewController:(id)arg1 coreDataController:(id)arg2 analyticsBuffer:(id)arg3 linkRouter:(id)arg4 session:(id)arg5 clientSideAdSources:(id)arg6 timelineObjectRetriever:(id)arg7 postViewConfiguration:(id)arg8 postViewModelCache:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

