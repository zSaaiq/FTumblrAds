//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IFlurryConsentObserver, OS_dispatch_queue;

@interface FlurryConsentObserverData : NSObject
{
    id <IFlurryConsentObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <IFlurryConsentObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 withQueue:(id)arg2;

@end

