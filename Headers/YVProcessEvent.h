//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, YVProcessGraph;

@interface YVProcessEvent : NSObject
{
    unsigned long long _sequence;
    NSDate *_timestamp;
    NSString *_impulse;
    YVProcessGraph *_graph;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak YVProcessGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSString *impulse; // @synthesize impulse=_impulse;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
- (_Bool)happenedSince:(unsigned long long)arg1 before:(unsigned long long)arg2;
- (_Bool)happenedSince:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool justHappened;
- (id)initWithGraph:(id)arg1 impulse:(id)arg2 sequence:(unsigned long long)arg3 timestamp:(id)arg4;

@end

