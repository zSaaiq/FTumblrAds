//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"

@class NSString;

@interface GADInAppPurchaseTransactionReporter : NSObject <SKPaymentTransactionObserver>
{
    _Bool _reportingEnabled;
    _Bool _wasDisabled;
}

+ (id)sharedInstance;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)reportTransactionsFromArray:(id)arg1 sharedParameters:(id)arg2;
- (void)reportTransactionsFromArray:(id)arg1;
- (_Bool)wasDisabled;
@property(readonly, nonatomic) _Bool shouldBeEnabled;
- (void)disableReporting;
- (void)enableReporting;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

