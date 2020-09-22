//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdUpdatableView-Protocol.h"

@class FBAdIconView, FBAdOptionsView, FBNativeAdBase, FBNativeAdViewAttributes, NSString, UIButton, UILabel;

@interface FBAdBannerTemplateHeaderView : UIView <FBAdUpdatableView>
{
    _Bool _loaded;
    FBNativeAdBase *_nativeAdBase;
    FBNativeAdViewAttributes *_attributes;
    UILabel *_headerTitleLabel;
    UILabel *_headerBodyLabel;
    UIButton *_ctaButton;
    FBAdIconView *_iconView;
    FBAdOptionsView *_adOptionsView;
    long long _type;
}

@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak FBAdOptionsView *adOptionsView; // @synthesize adOptionsView=_adOptionsView;
@property(nonatomic) __weak FBAdIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(nonatomic) __weak UILabel *headerBodyLabel; // @synthesize headerBodyLabel=_headerBodyLabel;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(nonatomic) __weak FBNativeAdViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) __weak FBNativeAdBase *nativeAdBase; // @synthesize nativeAdBase=_nativeAdBase;
- (void).cxx_destruct;
- (void)layoutBigBanner;
- (void)layoutSmallBanner;
- (void)updateView:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)createView;
- (id)initWithFrame:(struct CGRect)arg1 nativeAdBase:(id)arg2 attributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
