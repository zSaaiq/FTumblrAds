//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP9ComposeUI26LinkSocialNetworkProviding_-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr22SocialNetworkConnector : NSObject <_TtP9ComposeUI26LinkSocialNetworkProviding_>
{
    MISSING_TYPE *session;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *socialSettingsEventProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)linkSocialNetwork:(long long)arg1 blog:(id)arg2 fromViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic, readonly) _Bool canLinkSocialAccounts;
- (id)initWithSession:(id)arg1 coreDataController:(id)arg2 socialSettingsEventProvider:(id)arg3;

@end

