//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface FNFPlayerExponentialBackoffTimer : NSObject
{
    int _baseDuration;
    int _maxExponent;
    _Bool _isRandomized;
    _Bool _isSuspended;
    int _currentExponent;
    NSDate *_fireDate;
}

@property(nonatomic) int currentExponent; // @synthesize currentExponent=_currentExponent;
@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void).cxx_destruct;
- (void)_clear;
- (void)_cancel;
- (double)scheduleNextTimer:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (double)scheduleNextTimer:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithBaseDuration:(int)arg1 maxExponent:(int)arg2 isRandomized:(_Bool)arg3;
- (id)initWithBaseDuration:(int)arg1 maxExponent:(int)arg2;

@end
