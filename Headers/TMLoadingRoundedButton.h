//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMRoundedButton.h"

@class UIActivityIndicatorView, UIColor;

@interface TMLoadingRoundedButton : TMRoundedButton
{
    _Bool _loading;
    UIColor *_activityIndicatorTintColor;
    UIActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIColor *activityIndicatorTintColor; // @synthesize activityIndicatorTintColor=_activityIndicatorTintColor;
- (void)setLoading:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createActivityIndicatorView;

@end
