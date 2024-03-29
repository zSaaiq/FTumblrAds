//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface O2FetchItemResult : NSObject
{
    _Bool _isSucceded;
    NSString *_vastXML;
    unsigned long long _status;
}

+ (id)successResultWithVASTXML:(id)arg1;
+ (id)failureWithEmptyResponse;
+ (id)failureWithNetworkError;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *vastXML; // @synthesize vastXML=_vastXML;
@property(readonly, nonatomic) _Bool isSucceded; // @synthesize isSucceded=_isSucceded;
- (id)initWithStatus:(unsigned long long)arg1 vastXML:(id)arg2 isSucceeded:(_Bool)arg3;

@end

