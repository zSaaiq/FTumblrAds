//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10GIFCreator21OverlayGestureManager : NSObject
{
    MISSING_TYPE *layersView;
    MISSING_TYPE *effectsView;
    MISSING_TYPE *toolsView;
    MISSING_TYPE *dataController;
    MISSING_TYPE *gestureView;
    MISSING_TYPE *layerStartRotation;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)handleRotate:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;

@end
