//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVVideoCompositing-Protocol.h"

@class MISSING_TYPE, NSDictionary;

@interface _TtC12KanvasCamera15VideoCompositor : NSObject <AVVideoCompositing>
{
    MISSING_TYPE *shouldCancelAllRequests;
    MISSING_TYPE *internalRenderContextDidChange;
    MISSING_TYPE *firstFrame;
    MISSING_TYPE *renderingQueue;
    MISSING_TYPE *renderContextQueue;
    MISSING_TYPE *renderContext;
    MISSING_TYPE *asyncVideoCompositionRequests;
    MISSING_TYPE *renderer;
    MISSING_TYPE *startTime;
    MISSING_TYPE *dimensions;
}

- (void).cxx_destruct;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)renderContextChanged:(id)arg1;
- (id)init;
@property(nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;

@end
