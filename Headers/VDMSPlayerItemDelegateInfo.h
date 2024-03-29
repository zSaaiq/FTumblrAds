//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSNumber, YVTime;

@interface VDMSPlayerItemDelegateInfo : NSObject
{
    _Bool _isPlaying;
    _Bool _isBusy;
    _Bool _atEnd;
    _Bool _reachedEnd;
    NSNumber *_playbackPosition;
    NSNumber *_lastPlayedPosition;
    NSNumber *_targetPosition;
    YVTime *_playbackDuration;
    NSDate *_currentDate;
    NSNumber *_indicatedBitrate;
    NSError *_errorNew;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *errorNew; // @synthesize errorNew=_errorNew;
@property(nonatomic) _Bool reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property(nonatomic) _Bool atEnd; // @synthesize atEnd=_atEnd;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) NSNumber *indicatedBitrate; // @synthesize indicatedBitrate=_indicatedBitrate;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) YVTime *playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(retain, nonatomic) NSNumber *targetPosition; // @synthesize targetPosition=_targetPosition;
@property(retain, nonatomic) NSNumber *lastPlayedPosition; // @synthesize lastPlayedPosition=_lastPlayedPosition;
@property(retain, nonatomic) NSNumber *playbackPosition; // @synthesize playbackPosition=_playbackPosition;

@end

