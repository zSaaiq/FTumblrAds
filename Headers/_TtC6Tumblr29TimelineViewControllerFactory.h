//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP13CommunityHubs27CommunityHubTimelineCreator_-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr29TimelineViewControllerFactory : NSObject <_TtP13CommunityHubs27CommunityHubTimelineCreator_>
{
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *timelineRepository;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *clientSideAdSources;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *session;
    MISSING_TYPE *supplyLoggingManager;
    MISSING_TYPE *defaultTopPadding;
}

- (void).cxx_destruct;
- (id)init;
- (id)genericTimelineViewControllerFor:(id)arg1 emptyViewMessage:(id)arg2;
- (id)createCommunityHubTimelineWithCommunityHubType:(long long)arg1 communityHubName:(id)arg2 dataDisplayViewDelegateUpdater:(id)arg3 appColorScheme:(id)arg4 isInitialLoadedCommunityHub:(_Bool)arg5 timelineScrollEventHandler:(id)arg6 emptyViewProvider:(id)arg7 communityHubConfigurations:(id)arg8;
- (id)queueTimelineViewControllerWithBlogUUID:(id)arg1;
- (id)initWithCoreDataController:(id)arg1 analyticsBuffer:(id)arg2 linkRouter:(id)arg3 session:(id)arg4 clientSideAdSources:(id)arg5 supplyLoggingManager:(id)arg6;

@end
