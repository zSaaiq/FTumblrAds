//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, YMAdUI;
@protocol YMAdStreamQueueDelegate, YMAdUnitControllerDelegate;

@interface YMAdStreamQueue : NSObject
{
    _Bool _loadPending;
    id <YMAdStreamQueueDelegate> _delegate;
    YMAdUI *_adUI;
    NSArray *_unitIDs;
    id <YMAdUnitControllerDelegate> _unitControllerDelegate;
    NSMutableArray *_unitQueue;
    NSDate *_lastFetch;
}

+ (id)createWithUnitIDs:(id)arg1 unitControllerDelegate:(id)arg2 delegate:(id)arg3 adUI:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastFetch; // @synthesize lastFetch=_lastFetch;
@property(nonatomic) _Bool loadPending; // @synthesize loadPending=_loadPending;
@property(retain, nonatomic) NSMutableArray *unitQueue; // @synthesize unitQueue=_unitQueue;
@property(nonatomic) __weak id <YMAdUnitControllerDelegate> unitControllerDelegate; // @synthesize unitControllerDelegate=_unitControllerDelegate;
@property(copy, nonatomic) NSArray *unitIDs; // @synthesize unitIDs=_unitIDs;
@property(retain, nonatomic) YMAdUI *adUI; // @synthesize adUI=_adUI;
@property(nonatomic) __weak id <YMAdStreamQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)dismissControllersBasedOnDomain:(id)arg1;
- (void)reload;
- (id)dequeueAdUnitController;
- (id)initWithUnitIDs:(id)arg1 unitControllerDelegate:(id)arg2 delegate:(id)arg3 adUI:(id)arg4;

@end
