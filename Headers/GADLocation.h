//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface GADLocation : NSObject <NSCopying>
{
    double _timestamp;
    NSDictionary *_dictionaryRepresentation;
    NSString *_locationDescription;
    double _latitude;
    double _longitude;
    double _accuracy;
}

@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) _Bool isPreciseLocation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *locationDescription;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocationDescription:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3;

@end

