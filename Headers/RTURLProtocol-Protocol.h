//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;

@protocol RTURLProtocol <NSObject>
- (void)replyWithData:(NSData *)arg1 headers:(NSDictionary *)arg2;
- (void)replyWithData:(NSData *)arg1;
- (void)replyWithErrorNotImplemented;
- (void)replyWithErrorNotFound;
- (void)replyWithStatus:(long long)arg1 headers:(NSDictionary *)arg2;
- (void)replyWithStatus:(long long)arg1;
@end

