//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSStoreData-Protocol.h"

@class NSDate, NSNumber, NSString, VDMSAdBreakItemStoreData, VDMSMediaItemStoreData, VDMSSourceVariantStoreData, YVideoSession;

@interface VDMSPlayerItemStoreData : NSObject <VDMSStoreData>
{
    _Bool _isPlaying;
    _Bool _isBusy;
    _Bool _inEndState;
    VDMSPlayerItemStoreData *_transactionPair;
    VDMSAdBreakItemStoreData *_adBreakItem;
    VDMSMediaItemStoreData *_mediaItem;
    VDMSSourceVariantStoreData *_selectedVariant;
    YVideoSession *_videoSession;
    NSNumber *_playbackPosition;
    NSNumber *_lastNonScrubPlaybackPosition;
    NSNumber *_lastPlayedPosition;
    NSNumber *_targetPlaybackPosition;
    NSNumber *_targetSeekOriginator;
    NSNumber *_indicatedBitrate;
    NSNumber *_playbackDuration;
    NSDate *_currentDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(nonatomic) _Bool inEndState; // @synthesize inEndState=_inEndState;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) NSNumber *playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(retain, nonatomic) NSNumber *indicatedBitrate; // @synthesize indicatedBitrate=_indicatedBitrate;
@property(retain, nonatomic) NSNumber *targetSeekOriginator; // @synthesize targetSeekOriginator=_targetSeekOriginator;
@property(retain, nonatomic) NSNumber *targetPlaybackPosition; // @synthesize targetPlaybackPosition=_targetPlaybackPosition;
@property(retain, nonatomic) NSNumber *lastPlayedPosition; // @synthesize lastPlayedPosition=_lastPlayedPosition;
@property(retain, nonatomic) NSNumber *lastNonScrubPlaybackPosition; // @synthesize lastNonScrubPlaybackPosition=_lastNonScrubPlaybackPosition;
@property(retain, nonatomic) NSNumber *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(retain, nonatomic) YVideoSession *videoSession; // @synthesize videoSession=_videoSession;
@property(retain, nonatomic) VDMSSourceVariantStoreData *selectedVariant; // @synthesize selectedVariant=_selectedVariant;
@property(nonatomic) __weak VDMSMediaItemStoreData *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) __weak VDMSAdBreakItemStoreData *adBreakItem; // @synthesize adBreakItem=_adBreakItem;
@property(nonatomic) __weak VDMSPlayerItemStoreData *transactionPair; // @synthesize transactionPair=_transactionPair;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)transactionCopy;
- (void)copyFromStoreData:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithAdBreakItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

