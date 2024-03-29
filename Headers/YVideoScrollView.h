//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol YVideoScrollViewDelegate;

@interface YVideoScrollView : UIScrollView
{
    _Bool _hitTestOnControl;
}

@property(nonatomic) _Bool hitTestOnControl; // @synthesize hitTestOnControl=_hitTestOnControl;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateScrollEnabled;
- (_Bool)allowedToScroll;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <YVideoScrollViewDelegate> delegate; // @dynamic delegate;

@end

