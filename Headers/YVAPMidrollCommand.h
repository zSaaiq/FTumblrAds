//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YVAPMidrollCommand : NSObject
{
    NSString *_command;
    NSString *_adLabel;
    NSString *_adBreakId;
    long long _adBreakNumber;
    double _targetDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double targetDuration; // @synthesize targetDuration=_targetDuration;
@property(nonatomic) long long adBreakNumber; // @synthesize adBreakNumber=_adBreakNumber;
@property(retain, nonatomic) NSString *adBreakId; // @synthesize adBreakId=_adBreakId;
@property(retain, nonatomic) NSString *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
- (_Bool)refersToSameAdBreakAs:(id)arg1;
- (id)initWithAdBreakDetails:(id)arg1;

@end
