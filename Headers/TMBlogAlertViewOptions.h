//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, TMBlog, _TtC10LinkRouter10LinkRouter, _TtC6Tumblr19ClientSideAdSources;
@protocol TMSession, TMTumblrCoreDataController, _TtP9Analytics14EventBuffering_;

@interface TMBlogAlertViewOptions : NSObject
{
    _Bool _displaysAdminOptions;
    NSString *_blogName;
    NSMutableArray *_mutableOptions;
    TMBlog *_blog;
    id <TMSession> _session;
    id <TMTumblrCoreDataController> _coreDataController;
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
    _TtC10LinkRouter10LinkRouter *_linkRouter;
    _TtC6Tumblr19ClientSideAdSources *_clientSideAdSources;
}

+ (id)actionOptionsWithBlog:(id)arg1 allowsEditAppearance:(_Bool)arg2 analyticsBuffer:(id)arg3 linkRouter:(id)arg4 session:(id)arg5 coreDataController:(id)arg6 clientSideAdSources:(id)arg7;
+ (id)messageOptionsWithBlog:(id)arg1 analyticsBuffer:(id)arg2 linkRouter:(id)arg3 session:(id)arg4 coreDataController:(id)arg5 clientSideAdSources:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC6Tumblr19ClientSideAdSources *clientSideAdSources; // @synthesize clientSideAdSources=_clientSideAdSources;
@property(readonly, nonatomic) _TtC10LinkRouter10LinkRouter *linkRouter; // @synthesize linkRouter=_linkRouter;
@property(readonly, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(readonly, nonatomic) id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(nonatomic) _Bool displaysAdminOptions; // @synthesize displaysAdminOptions=_displaysAdminOptions;
@property(retain, nonatomic) TMBlog *blog; // @synthesize blog=_blog;
@property(retain, nonatomic) NSMutableArray *mutableOptions; // @synthesize mutableOptions=_mutableOptions;
@property(copy, nonatomic) NSString *blogName; // @synthesize blogName=_blogName;
@property(readonly, nonatomic) NSString *alertTitle;
- (id)submissionTitle;
- (id)blogAskTitle;
@property(readonly, nonatomic) NSArray *options;
- (void)addOptionWithTitle:(id)arg1 type:(long long)arg2 count:(unsigned long long)arg3;
- (void)addOptionWithTitle:(id)arg1 type:(long long)arg2;
- (id)initWithBlog:(id)arg1 allowsAsking:(_Bool)arg2 allowsSubmission:(_Bool)arg3 allowsUnfollowing:(_Bool)arg4 allowsSubscribing:(_Bool)arg5 allowsUnsubscribing:(_Bool)arg6 allowsBlocking:(_Bool)arg7 allowsSharingBlog:(_Bool)arg8 allowsAdminOptions:(_Bool)arg9 allowsMessaging:(_Bool)arg10 allowsEditAppearance:(_Bool)arg11 analyticsBuffer:(id)arg12 linkRouter:(id)arg13 session:(id)arg14 coreDataController:(id)arg15 clientSideAdSources:(id)arg16 reportBlogEnabled:(_Bool)arg17;

@end

