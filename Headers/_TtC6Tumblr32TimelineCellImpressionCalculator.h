//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TMContentOffsetCalculator;
@protocol _TtP10CoreTumblr19ImpressionReceiving_;

@interface _TtC6Tumblr32TimelineCellImpressionCalculator : NSObject
{
    MISSING_TYPE *serveId;
    MISSING_TYPE *placementId;
    MISSING_TYPE *additionalParameters;
    MISSING_TYPE *impressionReceiver;
    MISSING_TYPE *contentOffsetCalculator;
}

- (void).cxx_destruct;
- (id)init;
- (void)contentOffsetCalculator:(id)arg1 didBeginIntersectingCellRect:(struct CGRect)arg2;
- (void)updateWithRect:(struct CGRect)arg1;
- (void)setupWithServeId:(id)arg1 placementId:(id)arg2;
- (void)setupWithServeId:(id)arg1 placementId:(id)arg2 additionalParameters:(id)arg3;
- (id)initWithImpressionReceiver:(id)arg1 contentOffsetCalculator:(id)arg2;
@property(nonatomic, retain) TMContentOffsetCalculator *contentOffsetCalculator; // @synthesize contentOffsetCalculator;
@property(nonatomic, retain) id <_TtP10CoreTumblr19ImpressionReceiving_> impressionReceiver; // @synthesize impressionReceiver;

@end

