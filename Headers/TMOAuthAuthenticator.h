//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TMAPIApplicationCredentials;
@protocol TMOAuthAuthenticatorDelegate, TMSession;

@interface TMOAuthAuthenticator : NSObject
{
    id <TMSession> _session;
    TMAPIApplicationCredentials *_applicationCredentials;
    id <TMOAuthAuthenticatorDelegate> _delegate;
    CDUnknownBlockType _threeLeggedOAuthCallback;
    NSString *_threeLeggedOAuthTokenSecret;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *threeLeggedOAuthTokenSecret; // @synthesize threeLeggedOAuthTokenSecret=_threeLeggedOAuthTokenSecret;
@property(copy, nonatomic) CDUnknownBlockType threeLeggedOAuthCallback; // @synthesize threeLeggedOAuthCallback=_threeLeggedOAuthCallback;
@property(readonly, nonatomic) __weak id <TMOAuthAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TMAPIApplicationCredentials *applicationCredentials; // @synthesize applicationCredentials=_applicationCredentials;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
- (id)signAccessTokenRequest:(id)arg1 withOAuthToken:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (void)authenticate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1 applicationCredentials:(id)arg2 delegate:(id)arg3;

@end
