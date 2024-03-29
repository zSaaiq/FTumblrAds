//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YAActor.h"

@class NSMutableArray, YI13NNetworkSerializer;

@interface YI13NMemoryBuffer : YAActor
{
    long long _maxEventBufferCount;
    NSMutableArray *_flushCallBackArray;
    NSMutableArray *_eventBuffer;
    YI13NNetworkSerializer *_networkSerializer;
    long long _numOfFlushes;
}

- (void).cxx_destruct;
@property(nonatomic) long long numOfFlushes; // @synthesize numOfFlushes=_numOfFlushes;
@property(retain, nonatomic) YI13NNetworkSerializer *networkSerializer; // @synthesize networkSerializer=_networkSerializer;
@property(retain, nonatomic) NSMutableArray *eventBuffer; // @synthesize eventBuffer=_eventBuffer;
@property(retain, nonatomic) NSMutableArray *flushCallBackArray; // @synthesize flushCallBackArray=_flushCallBackArray;
@property(nonatomic) long long maxEventBufferCount; // @synthesize maxEventBufferCount=_maxEventBufferCount;
- (void)flush:(CDUnknownBlockType)arg1;
- (_Bool)flushSynchronous;
- (void)addEvent:(id)arg1;
- (id)initWithConfiguration:(id)arg1 withNetworkSerializer:(id)arg2;
- (id)init;

@end

