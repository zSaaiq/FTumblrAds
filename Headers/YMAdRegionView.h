//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YMAdThemableViewComponent-Protocol.h"

@class NSString, YMAdView;

@interface YMAdRegionView : UIView <YMAdThemableViewComponent>
{
    YMAdView *_rootView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak YMAdView *rootView; // @synthesize rootView=_rootView;
- (void)applyFontOptions:(id)arg1;
- (void)applyViewOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

