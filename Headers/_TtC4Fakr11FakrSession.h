//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TMNetworkActivityVisiblityCounter;

@interface _TtC4Fakr11FakrSession : NSObject
{
    MISSING_TYPE *session;
    MISSING_TYPE *host;
    MISSING_TYPE *outgoingRequests;
    MISSING_TYPE *networkActivityVisibilityCounter;
}

- (void).cxx_destruct;
- (id)copyWithNewConfiguration:(id)arg1;
- (_Bool)canSignRequests;
@property(nonatomic, retain) TMNetworkActivityVisiblityCounter *networkActivityVisibilityCounter; // @synthesize networkActivityVisibilityCounter;
- (id)paramaterizedRequestFromRequest:(id)arg1;
- (id)taskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)taskWithRequest:(id)arg1 incrementalHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithSession:(id)arg1 host:(id)arg2;
- (id)init;

@end

