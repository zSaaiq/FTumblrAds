//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBInstreamAdDataModel, NSString;
@protocol FBVideoAdContentViewDelegate;

@interface FBVideoAdContentView : UIView
{
    _Bool _countdownEnabled;
    id <FBVideoAdContentViewDelegate> _delegate;
    NSString *_countdownFormat;
    FBInstreamAdDataModel *_dataModel;
}

+ (id)timeStringFromDate:(id)arg1 duration:(double)arg2;
+ (id)dateFormatter;
@property(retain, nonatomic) FBInstreamAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(copy, nonatomic) NSString *countdownFormat; // @synthesize countdownFormat=_countdownFormat;
@property(nonatomic) _Bool countdownEnabled; // @synthesize countdownEnabled=_countdownEnabled;
@property(nonatomic) __weak id <FBVideoAdContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)startFromRootViewController:(id)arg1;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) CDStruct_1b6d18a9 skipRemainingTime;
@property(readonly, nonatomic) _Bool skippable;
@property(readonly, nonatomic) _Bool isAutoplay;
- (id)formattedCountdownFromRemainingSeconds:(unsigned long long)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
- (id)init;

@end

