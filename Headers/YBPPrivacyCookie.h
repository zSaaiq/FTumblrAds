//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YAActor.h"

@class NSArray, NSMutableArray;
@protocol YBPOOCCookieProtocol;

@interface YBPPrivacyCookie : YAActor
{
    _Bool _isReady;
    id <YBPOOCCookieProtocol> _delegate;
    NSArray *_OOCCookieArray;
    NSMutableArray *_domainArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *domainArray; // @synthesize domainArray=_domainArray;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *OOCCookieArray; // @synthesize OOCCookieArray=_OOCCookieArray;
@property(nonatomic) __weak id <YBPOOCCookieProtocol> delegate; // @synthesize delegate=_delegate;
- (id)getValueFromConsetDictionary:(id)arg1 withKey:(id)arg2;
- (id)prepareOCC:(id)arg1;
- (void)prepareAndSyncOOCCookie:(id)arg1;
- (void)removeDomain:(id)arg1;
- (void)addDomain:(id)arg1;
- (void)setCookie:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)forceRefresh:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 withConfiguration:(id)arg2;

@end
