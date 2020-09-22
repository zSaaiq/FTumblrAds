//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperationQueue, NSURL;

@interface TMOutgoingRequestStore : NSObject
{
    NSURL *_fileURL;
    NSMutableArray *_outgoingRequests;
    NSOperationQueue *_internalStateQueue;
}

+ (id)storeInTumblrSecurityApplicationGroupSharedContainer;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *internalStateQueue; // @synthesize internalStateQueue=_internalStateQueue;
@property(retain, nonatomic) NSMutableArray *outgoingRequests; // @synthesize outgoingRequests=_outgoingRequests;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)removeOutgoingRequestAndAttachments:(id)arg1;
- (void)writeToDisk;
- (void)readFromDisk;
- (_Bool)containsRequest:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)deleteAllRequests;
- (void)removeRequest:(id)arg1;
- (void)deleteRequest:(id)arg1;
- (void)addRequestsFromArray:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)allRequests;
- (id)init;
- (id)initWithSecurityApplicationGroupIdentifier:(id)arg1;

@end

