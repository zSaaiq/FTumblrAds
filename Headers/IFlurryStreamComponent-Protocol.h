//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol IFlurryStreamComponent, IFlurryStreamMessage;

@protocol IFlurryStreamComponent <NSObject>
- (void)registerNextStageComponent:(id <IFlurryStreamComponent>)arg1;
- (NSArray *)supportedFrameTypes;
- (void)sendStreamMessage:(id <IFlurryStreamMessage>)arg1;
@end

