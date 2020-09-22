//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBDSignalValueOrError, NSDictionary;

@interface FBBDCollectedSignal : NSObject
{
    _Bool _isOffsite;
    double _timeEpsilon;
    double _time;
    NSDictionary *_context;
    FBBDSignalValueOrError *_valueOrError;
}

@property(readonly, nonatomic) FBBDSignalValueOrError *valueOrError; // @synthesize valueOrError=_valueOrError;
@property(readonly, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long dataSize;
- (_Bool)isEqualToCollectedSignal:(id)arg1 withFlags:(unsigned long long)arg2;
@property(readonly, nonatomic) NSDictionary *collectedSignalDict;
- (id)initWithTime:(double)arg1 withContext:(id)arg2 withValueOrError:(id)arg3 withIsOffsiteFlag:(_Bool)arg4 withTimeEpsilon:(double)arg5;

@end

