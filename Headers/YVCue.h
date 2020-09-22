//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, YVTime;

@interface YVCue : NSObject
{
    NSDictionary *_underlyingContent;
    NSDate *__startDate;
    NSDate *__endDate;
    YVTime *__startTime;
    YVTime *__endTime;
    long long _underlyingType;
    NSDictionary *_parsedContent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *parsedContent; // @synthesize parsedContent=_parsedContent;
@property(readonly, nonatomic) long long underlyingType; // @synthesize underlyingType=_underlyingType;
@property(readonly, nonatomic) YVTime *_endTime; // @synthesize _endTime=__endTime;
@property(readonly, nonatomic) YVTime *_startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) NSDate *_endDate; // @synthesize _endDate=__endDate;
@property(readonly, nonatomic) NSDate *_startDate; // @synthesize _startDate=__startDate;
@property(readonly, nonatomic) NSDictionary *underlyingContent; // @synthesize underlyingContent=_underlyingContent;
@property(readonly, nonatomic) _Bool isPoint;
@property(readonly, nonatomic) _Bool isTimeRange;
@property(readonly, nonatomic) _Bool isDateRange;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double startTime;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEmbeddedMetadataItem:(id)arg1;
- (id)initWithDateRangeMetadataGroup:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 underlyingType:(long long)arg3 underlyingContent:(id)arg4 parsedContent:(id)arg5;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2 underlyingType:(long long)arg3 underlyingContent:(id)arg4 parsedContent:(id)arg5;

@end
