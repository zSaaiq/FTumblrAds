//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface O2VRMResponseModel : NSObject
{
    NSString *_videoID;
    NSString *_playerID;
    NSString *_buyingCompanyID;
    NSString *_generalSlot;
    NSString *_sessionID;
    NSString *_experience;
    NSString *_bucket;
    NSArray *_pods;
    unsigned long long _backendVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long backendVersion; // @synthesize backendVersion=_backendVersion;
@property(readonly, copy, nonatomic) NSArray *pods; // @synthesize pods=_pods;
@property(readonly, copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(readonly, copy, nonatomic) NSString *experience; // @synthesize experience=_experience;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy, nonatomic) NSString *generalSlot; // @synthesize generalSlot=_generalSlot;
@property(readonly, copy, nonatomic) NSString *buyingCompanyID; // @synthesize buyingCompanyID=_buyingCompanyID;
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(readonly, copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (id)initWithVideoID:(id)arg1 playerID:(id)arg2 buyingCompanyID:(id)arg3 generalSlot:(id)arg4 sessionID:(id)arg5 pods:(id)arg6 backendVersion:(unsigned long long)arg7 experience:(id)arg8 bucket:(id)arg9;

@end
