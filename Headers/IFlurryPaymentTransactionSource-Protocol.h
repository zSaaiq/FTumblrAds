//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SKPaymentTransaction;

@protocol IFlurryPaymentTransactionSource <NSObject>
- (void)recordTransaction:(SKPaymentTransaction *)arg1 statusCallback:(void (^)(int))arg2;
- (void)setIAPReportingEnabled:(_Bool)arg1;
@end
