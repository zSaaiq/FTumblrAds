//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlurryAdHttpAsyncTaskDelegate-Protocol.h"

@class NSDate, NSHTTPCookie, NSString;

@interface GeminiCookieManager : NSObject <FlurryAdHttpAsyncTaskDelegate>
{
    NSString *_bid;
    NSHTTPCookie *_bCookie;
    NSHTTPCookie *_aoCookie;
    NSDate *_bidCreated;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *bidCreated; // @synthesize bidCreated=_bidCreated;
@property(retain, nonatomic) NSHTTPCookie *aoCookie; // @synthesize aoCookie=_aoCookie;
@property(retain, nonatomic) NSHTTPCookie *bCookie; // @synthesize bCookie=_bCookie;
@property(retain, nonatomic) NSString *bid; // @synthesize bid=_bid;
- (void).cxx_destruct;
- (id)cookieHeaders;
- (void)bCookieFromDictionary:(id)arg1;
- (id)encodedYqlQuery;
- (id)yqlQuery;
- (void)requestSuccessful:(id)arg1 withResponse:(id)arg2;
- (void)requestDidCancel:(id)arg1 withResponse:(id)arg2;
- (void)requestDidFail:(id)arg1 withResponse:(id)arg2;
- (void)fetchCookie:(id)arg1;
- (_Bool)bidExpired;
- (void)loadBCookie;
- (void)networkStatusChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

