//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IFlurryAdViewController-Protocol.h"

@class NSString, UIView;
@protocol IFlurryAd, IFlurryNativeAd;

@interface FlurryAdWindowBasedMraidViewController : UIViewController <IFlurryAdViewController>
{
    _Bool _allowRotation;
    id <IFlurryAd> _ad;
    UIView *_adView;
    id <IFlurryNativeAd> _nativeAd;
}

@property(nonatomic) _Bool allowRotation; // @synthesize allowRotation=_allowRotation;
@property(retain, nonatomic) id <IFlurryNativeAd> nativeAd; // @synthesize nativeAd=_nativeAd;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) id <IFlurryAd> ad; // @synthesize ad=_ad;
- (void).cxx_destruct;
- (_Bool)userDidTapView:(struct CGPoint)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)adjustToOrientation:(long long)arg1;
- (void)removeWindow;
- (void)loadAd:(id)arg1;
- (void)loadAd;
- (void)createWindow;
- (void)loadView;
- (id)initWithAd:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
