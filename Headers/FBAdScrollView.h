//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdScrollView-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBAdTouchPassthroughView, FBGradientView, NSArray, NSMapTable, NSPointerArray, NSString, UIScrollView, UIViewController;
@protocol FBAdScrollViewDelegate;

@interface FBAdScrollView : UIView <UIScrollViewDelegate, FBAdScrollView>
{
    _Bool _animationEnabled;
    _Bool _debugMode;
    _Bool _loading;
    CDUnknownBlockType _childViewProvider;
    NSArray *_data;
    id <FBAdScrollViewDelegate> _delegate;
    unsigned long long _maximumNativeAdCount;
    double _xInset;
    double _xPadding;
    double _yPadding;
    UIViewController *_rootViewController;
    UIScrollView *_scrollView;
    FBAdTouchPassthroughView *_hitTestView;
    NSPointerArray *_cellViews;
    NSMapTable *_cellMapping;
    FBGradientView *_leftGradientView;
    FBGradientView *_rightGradientView;
}

+ (void)initialize;
@property(nonatomic) __weak FBGradientView *rightGradientView; // @synthesize rightGradientView=_rightGradientView;
@property(nonatomic) __weak FBGradientView *leftGradientView; // @synthesize leftGradientView=_leftGradientView;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSMapTable *cellMapping; // @synthesize cellMapping=_cellMapping;
@property(retain, nonatomic) NSPointerArray *cellViews; // @synthesize cellViews=_cellViews;
@property(nonatomic) __weak FBAdTouchPassthroughView *hitTestView; // @synthesize hitTestView=_hitTestView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic, getter=isAnimationEnabled) _Bool animationEnabled; // @synthesize animationEnabled=_animationEnabled;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) double yPadding; // @synthesize yPadding=_yPadding;
@property(nonatomic) double xPadding; // @synthesize xPadding=_xPadding;
@property(nonatomic) double xInset; // @synthesize xInset=_xInset;
@property(readonly, nonatomic) unsigned long long maximumNativeAdCount; // @synthesize maximumNativeAdCount=_maximumNativeAdCount;
@property(nonatomic) __weak id <FBAdScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType childViewProvider; // @synthesize childViewProvider=_childViewProvider;
- (void).cxx_destruct;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)nativeAdForView:(id)arg1;
- (void)mapData:(id)arg1 toView:(id)arg2;
- (void)detachAllNativeAds:(id)arg1;
- (void)removeAllCells:(id)arg1;
- (void)removeAllCells;
- (unsigned long long)count;
- (unsigned long long)addCellForData:(id)arg1 withPosition:(unsigned long long)arg2;
- (void)addAllCells;
- (void)populate:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)childViewForData:(id)arg1 withPosition:(unsigned long long)arg2;
- (void)loadPage:(unsigned long long)arg1;
- (void)loadPages;
- (double)paddingTotal;
- (double)paddingforPage:(unsigned long long)arg1;
- (void)animateWithFade:(_Bool)arg1 view:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)positionGradient;
- (void)setupContentSize;
- (void)repositionScrollView;
- (double)ratio;
- (void)setupScrollViewSize;
- (struct CGRect)scrollFrame;
- (void)dealloc;
- (void)updateView:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)commonInitialization;
- (void)loadCells;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

