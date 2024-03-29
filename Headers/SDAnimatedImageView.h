//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "CALayerDelegate-Protocol.h"

@class CALayer, NSString, SDAnimatedImagePlayer, UIImage;

@interface SDAnimatedImageView : UIImageView <CALayerDelegate>
{
    _Bool _initFinished;
    NSString *_runLoopMode;
    unsigned long long _maxBufferSize;
    double _playbackRate;
    _Bool _shouldCustomLoopCount;
    _Bool _shouldIncrementalLoad;
    _Bool _clearBufferWhenStopped;
    _Bool _resetFrameIndexWhenStopped;
    _Bool _shouldAnimate;
    _Bool _isProgressive;
    UIImage *_currentFrame;
    unsigned long long _currentFrameIndex;
    unsigned long long _currentLoopCount;
    SDAnimatedImagePlayer *_player;
    CALayer *_imageViewLayer;
}

+ (id)defaultRunLoopMode;
- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *imageViewLayer; // @synthesize imageViewLayer=_imageViewLayer;
@property(retain, nonatomic) SDAnimatedImagePlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool isProgressive; // @synthesize isProgressive=_isProgressive;
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(nonatomic) _Bool resetFrameIndexWhenStopped; // @synthesize resetFrameIndexWhenStopped=_resetFrameIndexWhenStopped;
@property(nonatomic) _Bool clearBufferWhenStopped; // @synthesize clearBufferWhenStopped=_clearBufferWhenStopped;
@property(nonatomic) _Bool shouldIncrementalLoad; // @synthesize shouldIncrementalLoad=_shouldIncrementalLoad;
@property(nonatomic) _Bool shouldCustomLoopCount; // @synthesize shouldCustomLoopCount=_shouldCustomLoopCount;
@property(nonatomic) unsigned long long currentLoopCount; // @synthesize currentLoopCount=_currentLoopCount;
@property(nonatomic) unsigned long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(retain, nonatomic) UIImage *currentFrame; // @synthesize currentFrame=_currentFrame;
- (void)displayLayer:(id)arg1;
- (id)progressiveAnimatedCoderForImage:(id)arg1;
- (void)updateIsProgressiveWithImage:(id)arg1;
- (void)updateShouldAnimate;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
@property(nonatomic) long long animationRepeatCount; // @dynamic animationRepeatCount;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
@property(nonatomic) double playbackRate;
@property(nonatomic) unsigned long long maxBufferSize;
@property(copy, nonatomic) NSString *runLoopMode;
- (void)setImage:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 context:(id)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 context:(id)arg4;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)sd_setImageWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

