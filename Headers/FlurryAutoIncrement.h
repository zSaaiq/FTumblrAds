//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface FlurryAutoIncrement : NSObject <NSCoding>
{
    NSMutableDictionary *counters;
}

+ (void)setWatchInstance:(id)arg1;
+ (id)instance;
@property(retain, nonatomic) NSMutableDictionary *counters; // @synthesize counters;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)resetAll;
- (int)nextCountFor:(int)arg1;
- (id)init;

@end

