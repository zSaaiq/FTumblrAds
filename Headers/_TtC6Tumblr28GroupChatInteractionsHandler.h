//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr28GroupChatInteractionsHandler : _TtCs12_SwiftObject
{
    MISSING_TYPE *groupChatConfigurations;
    MISSING_TYPE *viewController;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *session;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *clientSideAdSources;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *shareEventProvider;
    MISSING_TYPE *eventProvider;
    MISSING_TYPE *applicationCoordinator;
    MISSING_TYPE *groupChatMessageUpdateCoordinator;
    MISSING_TYPE *screenIdentifier;
    MISSING_TYPE *replyToBlogHandler;
}

- (void)displayDirectMessageViewControllerTo:(id)arg1 blogName:(id)arg2;
- (void)displayBlogViewControllerFor:(id)arg1;
- (void)reportBlogWith:(id)arg1 using:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)blockBlogWith:(id)arg1 using:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

