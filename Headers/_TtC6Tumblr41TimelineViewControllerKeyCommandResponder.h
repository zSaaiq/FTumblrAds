//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP22TimelineViewManagement24TMPostsKeyCommandHandler_-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr41TimelineViewControllerKeyCommandResponder : NSObject <_TtP22TimelineViewManagement24TMPostsKeyCommandHandler_>
{
    MISSING_TYPE *timelineViewController;
    MISSING_TYPE *postDelegate;
    MISSING_TYPE *tableViewScroller;
    MISSING_TYPE *tableView;
    MISSING_TYPE *timelineObjectRetriever;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *clientSideAdSources;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *session;
    MISSING_TYPE *screenIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)displayNotesKeyCommandWasReceived;
- (void)fastReblogKeyCommandWasReceived;
- (id)postFor:(id)arg1;
- (void)likePostKeyCommandWasReceived;
- (void)previousPageKeyCommandWasReceived;
- (void)nextPageKeyCommandWasReceived;
- (void)previousPostKeyCommandWasReceived;
- (void)nextPostKeyCommandWasReceived;
- (id)initWithTimelineViewController:(id)arg1 postDelegate:(id)arg2 timelineObjectRetriever:(id)arg3 coreDataController:(id)arg4 linkRouter:(id)arg5 clientSideAdSources:(id)arg6 analyticsBuffer:(id)arg7 session:(id)arg8 screenIdentifier:(id)arg9;

@end

