//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSHTTPCookieStorage.h>

@interface NSHTTPCookieStorage (YBPExtension)
+ (_Bool)YBPCheckCookieDomainAndExpiry:(id)arg1;
+ (id)YBPGenerateHTTPCookieObjectWithName:(id)arg1 withCookieValue:(id)arg2 withExpiryDate:(id)arg3;
+ (id)YBPGenerateHTTPCookieObjectWithName:(id)arg1 withCookieValue:(id)arg2 withExpiryDate:(id)arg3 withDomain:(id)arg4;
+ (void)YBPDeleteCookieFromCookieStorage:(id)arg1;
+ (void)YBPAddCookieToCookieStorage:(id)arg1;
+ (id)YBPGetCookieFromCookieStorageWithName:(id)arg1 withDomain:(id)arg2;
+ (id)YBPGetCookieFromCookieStorageWithName:(id)arg1;
@end

