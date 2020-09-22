//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TMHeartView : UIView
{
    _Bool _liked;
    double _startOffset;
    double _endOffset;
    double _animationDuration;
}

@property(nonatomic, getter=isLiked) _Bool liked; // @synthesize liked=_liked;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
- (id)_createRightHeartPath;
- (id)_createLeftHeartPath;
- (id)_createHeartPath;
- (id)_createHeartLayerWithPath:(id)arg1 color:(id)arg2;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)_unlikeAnimateFromPoint:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_likeAnimateFromPoint:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateFromPoint:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

