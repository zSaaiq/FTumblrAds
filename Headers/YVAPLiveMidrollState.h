//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, VDMSBreak, YVAPMidrollCommand;

@interface YVAPLiveMidrollState : NSObject
{
    _Bool _wantsToPlay;
    YVAPMidrollCommand *_command;
    VDMSBreak *_adBreak;
    NSMutableArray *_possibleAds;
    NSTimer *_resumeContentTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *resumeContentTimer; // @synthesize resumeContentTimer=_resumeContentTimer;
@property(retain, nonatomic) NSMutableArray *possibleAds; // @synthesize possibleAds=_possibleAds;
@property(retain, nonatomic) VDMSBreak *adBreak; // @synthesize adBreak=_adBreak;
@property(nonatomic) _Bool wantsToPlay; // @synthesize wantsToPlay=_wantsToPlay;
@property(retain, nonatomic) YVAPMidrollCommand *command; // @synthesize command=_command;
- (id)init;

@end
