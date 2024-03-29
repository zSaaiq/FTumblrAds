//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FlurryStreamComponentsConfigManagerDelegate, IFlurryEpochFrameSource, IFlurryErrorFrameSource, IFlurryEventFrameSource, IFlurryPaymentTransactionSource, IFlurrySessionInitInfoSource, IFlurryStreamFlushSource;

@protocol IFlurryStreamComponentsConfigManager <NSObject>
@property(nonatomic) __weak id <FlurryStreamComponentsConfigManagerDelegate> delegate;
@property(readonly, nonatomic) id <IFlurryPaymentTransactionSource> transactionSource;
@property(readonly, nonatomic) id <IFlurryStreamFlushSource> streamFlushSource;
@property(readonly, nonatomic) id <IFlurrySessionInitInfoSource> sessionInitInfoSource;
@property(readonly, nonatomic) id <IFlurryErrorFrameSource> errorFrameSource;
@property(readonly, nonatomic) id <IFlurryEpochFrameSource> epochFrameSource;
@property(readonly, nonatomic) id <IFlurryEventFrameSource> eventFrameSource;
@end

