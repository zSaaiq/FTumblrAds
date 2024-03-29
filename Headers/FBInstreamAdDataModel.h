//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAdDataModel.h"

@class FBAdImage, NSNumber, NSString, NSURL, UIColor;

@interface FBInstreamAdDataModel : FBAdDataModel
{
    _Bool _adChoicesDisabled;
    _Bool _autoplay;
    _Bool _countdownEnabled;
    _Bool _persistentAdDetails;
    UIColor *_accentColor;
    FBAdImage *_adChoicesIcon;
    NSURL *_adChoicesLinkURL;
    NSString *_adChoicesText;
    UIColor *_backgroundColor;
    NSString *_callToActionText;
    NSURL *_callToActionURL;
    NSString *_countdownFormat;
    FBAdImage *_icon;
    FBAdImage *_image;
    NSURL *_impressionLoggingURL;
    NSURL *_nativeImpressionLoggingURL;
    long long _orientation;
    NSNumber *_skippableSeconds;
    NSString *_subtitle;
    UIColor *_textColor;
    NSString *_title;
    NSURL *_videoHDURL;
    NSURL *_videoURL;
    NSURL *_videoLoggingURL;
}

@property(readonly, copy, nonatomic) NSURL *videoLoggingURL; // @synthesize videoLoggingURL=_videoLoggingURL;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) NSURL *videoHDURL; // @synthesize videoHDURL=_videoHDURL;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSNumber *skippableSeconds; // @synthesize skippableSeconds=_skippableSeconds;
@property(readonly, nonatomic) _Bool persistentAdDetails; // @synthesize persistentAdDetails=_persistentAdDetails;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSURL *nativeImpressionLoggingURL; // @synthesize nativeImpressionLoggingURL=_nativeImpressionLoggingURL;
@property(readonly, copy, nonatomic) NSURL *impressionLoggingURL; // @synthesize impressionLoggingURL=_impressionLoggingURL;
@property(readonly, nonatomic) FBAdImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) FBAdImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *countdownFormat; // @synthesize countdownFormat=_countdownFormat;
@property(readonly, nonatomic) _Bool countdownEnabled; // @synthesize countdownEnabled=_countdownEnabled;
@property(readonly, copy, nonatomic) NSURL *callToActionURL; // @synthesize callToActionURL=_callToActionURL;
@property(readonly, copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(readonly, copy, nonatomic) NSString *adChoicesText; // @synthesize adChoicesText=_adChoicesText;
@property(readonly, copy, nonatomic) NSURL *adChoicesLinkURL; // @synthesize adChoicesLinkURL=_adChoicesLinkURL;
@property(readonly, nonatomic) FBAdImage *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
@property(readonly, nonatomic) _Bool adChoicesDisabled; // @synthesize adChoicesDisabled=_adChoicesDisabled;
@property(readonly, copy, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithMetadata:(id)arg1;
- (id)init;

@end

