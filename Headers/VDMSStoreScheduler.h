//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VDMSStoreScheduler : NSObject
{
    unsigned long long _sequence;
    NSMutableArray *_jobQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *jobQueue; // @synthesize jobQueue=_jobQueue;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
- (void)schedule:(CDUnknownBlockType)arg1;
- (id)init;

@end

