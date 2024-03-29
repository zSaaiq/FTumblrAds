//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMConnectorDelegate-Protocol.h"
#import "GADMSlotDelegate-Protocol.h"

@class GADAdType, GADMAdNetworkConnector, GADMConfig, GADSlot, NSMutableArray, NSString, NSTimer;

@interface GADMAdManager : NSObject <GADMSlotDelegate, GADMConnectorDelegate>
{
    NSMutableArray *_adNetworkConfigQueue;
    GADMAdNetworkConnector *_lastConnectorNotifiedForAClick;
    id _lastMediatedInterstitial;
    long long _pendingActionGroup;
    NSMutableArray *_failedAdapterNamesAndDurations;
    _Bool _fillStatusPingsSent;
    _Bool _requestInProgress;
    GADMConfig *_config;
    GADAdType *_adType;
    GADMAdNetworkConnector *_requestingConnector;
    GADMAdNetworkConnector *_receivedConnector;
    GADSlot *_slot;
    NSTimer *_adNetworkTimeoutTimer;
}

@property(retain, nonatomic) NSTimer *adNetworkTimeoutTimer; // @synthesize adNetworkTimeoutTimer=_adNetworkTimeoutTimer;
@property(nonatomic) _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) GADMAdNetworkConnector *receivedConnector; // @synthesize receivedConnector=_receivedConnector;
@property(retain, nonatomic) GADMAdNetworkConnector *requestingConnector; // @synthesize requestingConnector=_requestingConnector;
@property(retain, nonatomic) GADAdType *adType; // @synthesize adType=_adType;
@property(retain, nonatomic) GADMConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)mediationTimeRecorder;
- (void)endCSITimingWithFailedAdapter:(id)arg1;
- (void)endCSITimingWithSucceededAdapter:(id)arg1;
- (void)startCSITiming;
- (_Bool)connectorShouldReturnMediatedAd:(id)arg1;
- (void)adRequestFailedFromConnector:(id)arg1 withError:(id)arg2;
- (void)updateAdapterTimingsForConnector:(id)arg1 error:(id)arg2;
- (void)adRequestReturnsFromConnector:(id)arg1 withMediatedAd:(id)arg2;
- (void)adRequestReturnsFromConnector:(id)arg1 withInterstitial:(id)arg2;
- (void)adRequestReturnsFromConnector:(id)arg1 withView:(id)arg2;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (_Bool)changeAdTypeTo:(id)arg1;
- (void)mediateForAdType:(id)arg1 config:(id)arg2;
- (_Bool)shouldProcessResponseFromConnector:(id)arg1;
- (void)adNetworkTimeoutHandler:(id)arg1;
- (void)resetRequestingState;
- (void)notifyDelegateOfFailureToReceiveWithError:(id)arg1;
- (void)reportNoFill;
- (id)dequeueAdNetworkConfig;
- (void)makeAdRequest;
- (void)cancelPendingActions;
- (void)cancel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

