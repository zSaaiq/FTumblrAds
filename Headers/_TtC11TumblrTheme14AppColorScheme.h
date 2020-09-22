//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMNavigationBarStyleDefining-Protocol.h"
#import "_TtP11TumblrTheme22StatusBarStyleDefining_-Protocol.h"

@class MISSING_TYPE, UIColor;

@interface _TtC11TumblrTheme14AppColorScheme : NSObject <TMNavigationBarStyleDefining, _TtP11TumblrTheme22StatusBarStyleDefining_>
{
    MISSING_TYPE *paletteType;
    MISSING_TYPE *background;
    MISSING_TYPE *backgroundTint;
    MISSING_TYPE *primary;
    MISSING_TYPE *primaryTint;
    MISSING_TYPE *mainText;
    MISSING_TYPE *detailText;
    MISSING_TYPE *textOnPrimary;
    MISSING_TYPE *detailTextOnPrimary;
    MISSING_TYPE *tintColor;
    MISSING_TYPE *separator;
    MISSING_TYPE *searchBar;
    MISSING_TYPE *borderColor;
    MISSING_TYPE *inactiveButtonBackground;
    MISSING_TYPE *inactiveButtonText;
    MISSING_TYPE *_navBarAppearance;
}

+ (_Bool)supportsSecureCoding;
+ (id)lowContrastAppColorScheme;
+ (id)darkModeAppColorScheme;
+ (id)defaultAppColorScheme;
+ (id)systemDefaultAppColorScheme;
+ (void)setCurrent:(id)arg1;
+ (id)current;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createPaletteCopy;
@property(nonatomic, readonly) long long statusBarStyle;
@property(nonatomic, readonly) UIColor *navigationBarBadgeBackgroundColor;
@property(nonatomic, readonly) UIColor *navigationBarBackgroundTintColor;
@property(nonatomic, readonly) UIColor *navigationBarTintColor;
@property(nonatomic, readonly) UIColor *navigationBarSubtitleColor;
@property(nonatomic, readonly) UIColor *navigationBarTitleColor;
@property(nonatomic, readonly) long long navigationBarStyle;
@property(nonatomic) long long navigationBarAppearance;
@property(nonatomic, readonly) long long postFormStatusBarStyle;
@property(nonatomic, readonly) UIColor *postFormTextColor;
@property(nonatomic, readonly) UIColor *postFormBackgroundColor;
@property(nonatomic, readonly) UIColor *inactiveButtonText; // @synthesize inactiveButtonText;
@property(nonatomic, readonly) UIColor *inactiveButtonBackground; // @synthesize inactiveButtonBackground;
@property(nonatomic, readonly) UIColor *borderColor; // @synthesize borderColor;
@property(nonatomic, readonly) UIColor *searchBar; // @synthesize searchBar;
@property(nonatomic, readonly) UIColor *separator; // @synthesize separator;
@property(nonatomic, readonly) UIColor *tintColor; // @synthesize tintColor;
@property(nonatomic, readonly) UIColor *detailTextOnPrimary; // @synthesize detailTextOnPrimary;
@property(nonatomic, readonly) UIColor *textOnPrimary; // @synthesize textOnPrimary;
@property(nonatomic, readonly) UIColor *detailText; // @synthesize detailText;
@property(nonatomic, readonly) UIColor *mainText; // @synthesize mainText;
@property(nonatomic, readonly) UIColor *primaryTint; // @synthesize primaryTint;
@property(nonatomic, readonly) UIColor *primary; // @synthesize primary;
@property(nonatomic, readonly) UIColor *backgroundTint; // @synthesize backgroundTint;
@property(nonatomic, readonly) UIColor *background; // @synthesize background;
@property(nonatomic, readonly) long long paletteType; // @synthesize paletteType;

@end

