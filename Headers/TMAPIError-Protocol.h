//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol TMAPIError
@property(nonatomic, readonly) NSString *authToken;
@property(nonatomic, readonly) long long minimumRequiredAge;
@property(nonatomic, readonly) _Bool needsAge;
@property(nonatomic, readonly) _Bool isConsentBlocking;
@property(nonatomic, readonly) NSString *consentProvider;
@property(nonatomic, readonly) _Bool needsConsent;
@property(nonatomic, readonly) long long code;
@property(nonatomic, readonly) NSString *detail;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) _Bool logout;
@end
