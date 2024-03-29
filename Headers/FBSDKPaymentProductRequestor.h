//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class NSDateFormatter, NSMutableSet, NSSet, NSString, SKPaymentTransaction, SKProductsRequest;

@interface FBSDKPaymentProductRequestor : NSObject <SKProductsRequestDelegate>
{
    NSMutableSet *_originalTransactionSet;
    NSSet *_eventsWithReceipt;
    NSDateFormatter *_formatter;
    SKPaymentTransaction *_transaction;
    SKProductsRequest *_productRequest;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) SKProductsRequest *productRequest; // @synthesize productRequest=_productRequest;
@property(retain, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)fetchDeviceReceipt;
- (void)logImplicitTransactionEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
- (void)logImplicitPurchaseTransaction:(id)arg1 ofProduct:(id)arg2;
- (void)logImplicitSubscribeTransaction:(id)arg1 ofProduct:(id)arg2;
- (void)cleanUp;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)durationOfSubscriptionPeriod:(id)arg1;
- (_Bool)hasStartTrial:(id)arg1;
- (_Bool)isStartTrial:(id)arg1 ofProduct:(id)arg2;
- (void)clearOriginalTransactionID:(id)arg1;
- (void)appendOriginalTransactionID:(id)arg1;
- (id)getEventParametersOfProduct:(id)arg1 withTransaction:(id)arg2;
- (_Bool)isSubscription:(id)arg1;
- (void)logTransactionEvent:(id)arg1;
- (id)getTruncatedString:(id)arg1;
- (void)resolveProducts;
- (id)initWithTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

