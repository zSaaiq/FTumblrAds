//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADCSIVariableTiming : NSObject
{
    NSString *_name;
    double _start;
    double _length;
}

@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)resigningActive;
@property(readonly, nonatomic) _Bool isValid;
- (void)dealloc;
- (id)initWithName:(id)arg1 startTime:(double)arg2;
- (id)init;

@end
