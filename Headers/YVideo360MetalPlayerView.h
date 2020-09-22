//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YVideoPlayerView.h"

@class YVideo360MetalView;

@interface YVideo360MetalPlayerView : YVideoPlayerView
{
    YVideo360MetalView *_metalView;
    double _lastPinchScale;
    double _touchTrackingPitch;
    double _touchTrackingRoll;
    struct CGPoint _lastPanPoint;
}

- (void).cxx_destruct;
@property(nonatomic) double touchTrackingRoll; // @synthesize touchTrackingRoll=_touchTrackingRoll;
@property(nonatomic) double touchTrackingPitch; // @synthesize touchTrackingPitch=_touchTrackingPitch;
@property(nonatomic) double lastPinchScale; // @synthesize lastPinchScale=_lastPinchScale;
@property(nonatomic) struct CGPoint lastPanPoint; // @synthesize lastPanPoint=_lastPanPoint;
@property(retain, nonatomic) YVideo360MetalView *metalView; // @synthesize metalView=_metalView;
- (void)pinchGestureRecognizerFired:(id)arg1;
- (void)panGestureRecognizerFired:(id)arg1;
- (void)updateTouchTrackingValues;
- (struct CGRect)playerFrame;
- (void)updatePixelBuffer:(struct __CVBuffer *)arg1;
- (void)pauseRendering;
- (void)resumeRendering;
- (_Bool)needsPixelBufferUpdates;
- (void)tearDown;
- (id)initWithFrame:(struct CGRect)arg1;

@end
