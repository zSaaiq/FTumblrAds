//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSNumber, TMOutgoingRequest;

@protocol TMOutgoingRequestDelegate <NSObject>
- (void)outgoingRequestFailed:(TMOutgoingRequest *)arg1 error:(NSError *)arg2 apiErrors:(NSArray *)arg3 isRetryable:(_Bool)arg4 wasAuthorized:(_Bool)arg5;
- (void)outgoingRequestSucceeded:(TMOutgoingRequest *)arg1 response:(NSDictionary *)arg2;
- (void)outgoingRequestDidSendData:(TMOutgoingRequest *)arg1 uploadProgress:(NSNumber *)arg2;
@end

