//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface YVPlayerPosition : NSObject
{
    NSDate *_programDate;
    CDStruct_1b6d18a9 _time;
}

+ (id)playerPositionWithTime:(CDStruct_1b6d18a9)arg1 programDate:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *programDate; // @synthesize programDate=_programDate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (id)debugDescription;
- (id)description;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 programDate:(id)arg2;

@end
