//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface YVideoOverlayProxy : NSObject
{
    _Bool _viewRequested;
    UIView *_overlayView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool viewRequested; // @synthesize viewRequested=_viewRequested;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (void)reset;

@end

