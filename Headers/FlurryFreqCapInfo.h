//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface FlurryFreqCapInfo : NSObject <NSCoding>
{
    int _capType;
    NSString *_capId;
    long long _serveTime;
    long long _expirationTime;
    long long _streamCapDurationMillis;
    int _views;
    int _capRemaining;
    int _totalCap;
    int _capDurationType;
    long long _lastViewedTime;
}

+ (int)frequencyCapTypeStringToEnum:(id)arg1;
+ (id)frequencyCapTypeEnumToString:(int)arg1;
+ (id)frequencyCapTypeArrayInstance;
@property(nonatomic) int capDurationType; // @synthesize capDurationType=_capDurationType;
@property(nonatomic) int capRemaining; // @synthesize capRemaining=_capRemaining;
@property(nonatomic) int totalCap; // @synthesize totalCap=_totalCap;
@property(nonatomic) int views; // @synthesize views=_views;
@property(nonatomic) long long streamCapDurationMillis; // @synthesize streamCapDurationMillis=_streamCapDurationMillis;
@property(nonatomic) long long expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) long long lastViewedTime; // @synthesize lastViewedTime=_lastViewedTime;
@property(nonatomic) long long serveTime; // @synthesize serveTime=_serveTime;
@property(retain, nonatomic) NSString *capId; // @synthesize capId=_capId;
@property(nonatomic) int capType; // @synthesize capType=_capType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyForCapInfo;
- (id)initWithAdUnit:(id)arg1;

@end
