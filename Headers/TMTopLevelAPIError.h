//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMAPIError-Protocol.h"

@class NSString;

@interface TMTopLevelAPIError : NSObject <TMAPIError>
{
    _Bool _logout;
    _Bool _needsConsent;
    _Bool _needsAge;
    _Bool _isConsentBlocking;
    NSString *_detail;
    NSString *_title;
    long long _code;
    long long _minimumRequiredAge;
    NSString *_authToken;
    NSString *_consentProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *consentProvider; // @synthesize consentProvider=_consentProvider;
@property(readonly, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(readonly, nonatomic) _Bool isConsentBlocking; // @synthesize isConsentBlocking=_isConsentBlocking;
@property(readonly, nonatomic) long long minimumRequiredAge; // @synthesize minimumRequiredAge=_minimumRequiredAge;
@property(readonly, nonatomic) _Bool needsAge; // @synthesize needsAge=_needsAge;
@property(readonly, nonatomic) _Bool needsConsent; // @synthesize needsConsent=_needsConsent;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) _Bool logout; // @synthesize logout=_logout;
- (id)initWithLogout:(_Bool)arg1 title:(id)arg2 detail:(id)arg3 code:(long long)arg4 needsConsent:(_Bool)arg5 isConsentBlocking:(_Bool)arg6 needsAge:(_Bool)arg7 minimumRequiredAge:(long long)arg8 consentProvider:(id)arg9 authToken:(id)arg10;

@end

