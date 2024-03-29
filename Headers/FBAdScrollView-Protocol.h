//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAdUpdatableView-Protocol.h"

@class NSArray;
@protocol FBAdScrollViewDelegate;

@protocol FBAdScrollView <FBAdUpdatableView>
@property(nonatomic) double xInset;
@property(nonatomic) double yPadding;
@property(nonatomic) double xPadding;
@property(readonly, nonatomic) unsigned long long maximumNativeAdCount;
@property(nonatomic) __weak id <FBAdScrollViewDelegate> delegate;
@property(copy, nonatomic) CDUnknownBlockType childViewProvider;
@property(copy, nonatomic) NSArray *data;
@end

