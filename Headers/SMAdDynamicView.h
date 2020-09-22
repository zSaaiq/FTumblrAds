//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SMAdView.h"

#import "SMAdDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, SMAdDynamicViewFlowLayout, UICollectionView, UIImageView, UIPageControl;

@interface SMAdDynamicView : SMAdView <SMAdDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_slideShow;
    UIImageView *_backgroundImg;
    UIPageControl *_pageControl;
    SMAdDynamicViewFlowLayout *_layout;
    long long _numberOfItems;
    NSArray *_ctaBGColors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *ctaBGColors; // @synthesize ctaBGColors=_ctaBGColors;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(retain, nonatomic) SMAdDynamicViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIImageView *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(retain, nonatomic) UICollectionView *slideShow; // @synthesize slideShow=_slideShow;
- (void)scrollViewDidScroll:(id)arg1;
- (void)adTapped;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)getCTABackgroundColorAtIndex:(long long)arg1;
- (id)getIndicatorColor;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)buildConstraints;
- (id)createAdView;
- (void)createPageControl;
- (void)changeBackgroundImage;
- (void)instrumentAdView;
- (void)createSlideShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

