//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSURL, UIColor;

@interface YMAdViewOptions : NSObject <NSCopying>
{
    _Bool _shouldShowAvatar;
    UIColor *_backgroundColor;
    UIColor *_headlineColor;
    UIColor *_summaryColor;
    UIColor *_buttonColor;
    UIColor *_buttonTextColor;
    UIColor *_buttonBackgroundColor;
    NSNumber *_buttonTextSize;
    NSURL *_buttonIcon;
    UIColor *_linkColor;
    UIColor *_sponsorTextColor;
    UIColor *_sponsorColor;
    UIColor *_stateLabelColor;
    UIColor *_appNameColor;
    UIColor *_appCategoryColor;
    UIColor *_expandCloseTextColor;
    NSNumber *_backgroundOpacity;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowAvatar; // @synthesize shouldShowAvatar=_shouldShowAvatar;
@property(copy, nonatomic) NSNumber *backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
@property(copy, nonatomic) UIColor *expandCloseTextColor; // @synthesize expandCloseTextColor=_expandCloseTextColor;
@property(copy, nonatomic) UIColor *appCategoryColor; // @synthesize appCategoryColor=_appCategoryColor;
@property(copy, nonatomic) UIColor *appNameColor; // @synthesize appNameColor=_appNameColor;
@property(copy, nonatomic) UIColor *stateLabelColor; // @synthesize stateLabelColor=_stateLabelColor;
@property(copy, nonatomic) UIColor *sponsorColor; // @synthesize sponsorColor=_sponsorColor;
@property(copy, nonatomic) UIColor *sponsorTextColor; // @synthesize sponsorTextColor=_sponsorTextColor;
@property(copy, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(copy, nonatomic) NSURL *buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(copy, nonatomic) NSNumber *buttonTextSize; // @synthesize buttonTextSize=_buttonTextSize;
@property(copy, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(copy, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(copy, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(copy, nonatomic) UIColor *summaryColor; // @synthesize summaryColor=_summaryColor;
@property(copy, nonatomic) UIColor *headlineColor; // @synthesize headlineColor=_headlineColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)merge:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewOptions:(id)arg1;

@end

