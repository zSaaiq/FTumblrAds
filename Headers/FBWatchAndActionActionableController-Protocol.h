//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FBNativeAdDataModel, UIView;
@protocol FBWatchAndActionActionableControllerDelegate;

@protocol FBWatchAndActionActionableController
@property(readonly, nonatomic) UIView *view;
@property(nonatomic) __weak id <FBWatchAndActionActionableControllerDelegate> delegate;
- (void)prepareForPresentation;
- (id)initWithDataModel:(FBNativeAdDataModel *)arg1;
@end

