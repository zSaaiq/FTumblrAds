//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YAActor.h"

#import "OPrivacyClient-Protocol.h"
#import "YBPAOCookieProtocol-Protocol.h"
#import "YBPBCookieProtocol-Protocol.h"
#import "YBPOOCCookieProtocol-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, YADeferredQueue, YBPAOCookie, YBPBCookie, YBPCookieData, YBPPrivacyCookie;

@interface YBPBCookieProvider : YAActor <YBPBCookieProtocol, YBPAOCookieProtocol, OPrivacyClient, YBPOOCCookieProtocol>
{
    _Bool _isCookiesAvailableQueuePaused;
    NSDictionary *_configuration;
    CDUnknownBlockType _consentObserverCallback;
    YBPCookieData *_cookieData;
    NSMutableArray *_observerArray;
    YADeferredQueue *_cookiesAvailable;
    NSMutableDictionary *_cookiesDict;
    YBPBCookie *_YBPBCookieObj;
    YBPAOCookie *_YBPAOCookieObj;
    YBPPrivacyCookie *_YBPPrivacyCookieObj;
    NSString *_eLSID;
    NSString *_GUID;
    NSString *_gucCookie;
}

+ (void)wipe;
+ (id)sharedInstanceWithConfiguration:(id)arg1 withNetworkingSession:(id)arg2;
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *gucCookie; // @synthesize gucCookie=_gucCookie;
@property(copy, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(copy, nonatomic) NSString *eLSID; // @synthesize eLSID=_eLSID;
@property(retain, nonatomic) YBPPrivacyCookie *YBPPrivacyCookieObj; // @synthesize YBPPrivacyCookieObj=_YBPPrivacyCookieObj;
@property(retain, nonatomic) YBPAOCookie *YBPAOCookieObj; // @synthesize YBPAOCookieObj=_YBPAOCookieObj;
@property(retain, nonatomic) YBPBCookie *YBPBCookieObj; // @synthesize YBPBCookieObj=_YBPBCookieObj;
@property(retain, nonatomic) NSMutableDictionary *cookiesDict; // @synthesize cookiesDict=_cookiesDict;
@property(nonatomic) _Bool isCookiesAvailableQueuePaused; // @synthesize isCookiesAvailableQueuePaused=_isCookiesAvailableQueuePaused;
@property(retain, nonatomic) YADeferredQueue *cookiesAvailable; // @synthesize cookiesAvailable=_cookiesAvailable;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) YBPCookieData *cookieData; // @synthesize cookieData=_cookieData;
@property(copy, nonatomic) CDUnknownBlockType consentObserverCallback; // @synthesize consentObserverCallback=_consentObserverCallback;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (void)dealloc;
- (void)notifyObserver;
- (id)identifiers;
- (void)didChangeCookieStorage:(id)arg1;
- (void)cookieDidChange;
- (_Bool)isGDPRCompliant;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)forceRefreshAsync:(CDUnknownBlockType)arg1;
- (void)forceRefresh;
- (void)setCookies:(id)arg1 onQueue:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)setGUID:(id)arg1 witheLSID:(id)arg2 onQueue:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)setBCookie:(id)arg1 withAOCookie:(id)arg2 onQueue:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1 withNetworkingSession:(id)arg2 withBCookie:(id)arg3 withAOCookie:(id)arg4 withOOCCookie:(id)arg5 withCookieData:(id)arg6 withCookieArray:(id)arg7;
- (id)initWithConfiguration:(id)arg1 withNetworkingSession:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDescription:(id)arg1 target:(id)arg2;
- (id)initWithDescription:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

