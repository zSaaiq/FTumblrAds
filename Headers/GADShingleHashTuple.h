//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GADShingleHashTuple : NSObject
{
    NSArray *_shingle;
    unsigned long long _hashValue;
}

@property(readonly, nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
@property(readonly, copy, nonatomic) NSArray *shingle; // @synthesize shingle=_shingle;
- (void).cxx_destruct;
- (id)init;
- (id)initWithShingle:(id)arg1 hashValue:(unsigned long long)arg2;

@end

