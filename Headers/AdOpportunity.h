//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AnalyticsEvent.h"

@class NSString;

@interface AdOpportunity : AnalyticsEvent
{
    _Bool _isTaken;
    NSString *_playContext;
    NSString *_adPosition;
    NSString *_subType;
    NSString *_networkName;
}

- (void).cxx_destruct;
@property _Bool isTaken; // @synthesize isTaken=_isTaken;
@property(retain, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(retain, nonatomic) NSString *subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *adPosition; // @synthesize adPosition=_adPosition;
@property(retain, nonatomic) NSString *playContext; // @synthesize playContext=_playContext;
- (id)init;

@end

