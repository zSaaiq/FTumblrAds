//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDynamicBehavior.h>

@protocol TMToastBoundsDetectionBehaviorDelegate, UIDynamicItem;

@interface TMToastBoundsDetectionBehavior : UIDynamicBehavior
{
    id <TMToastBoundsDetectionBehaviorDelegate> _delegate;
    id <UIDynamicItem> _item;
    struct CGRect _detectionBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect detectionBounds; // @synthesize detectionBounds=_detectionBounds;
@property(readonly, nonatomic) id <UIDynamicItem> item; // @synthesize item=_item;
@property(nonatomic) __weak id <TMToastBoundsDetectionBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithItem:(id)arg1;

@end

