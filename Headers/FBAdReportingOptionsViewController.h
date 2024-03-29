//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBAdReportingOptionsContentView, NSArray, NSString;

@interface FBAdReportingOptionsViewController : UIViewController
{
    CDUnknownBlockType _onDismiss;
    CDUnknownBlockType _onBack;
    CDUnknownBlockType _onSelect;
    FBAdReportingOptionsContentView *_bodyView;
    NSString *_titleText;
    NSString *_heading;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) FBAdReportingOptionsContentView *bodyView; // @synthesize bodyView=_bodyView;
@property(copy, nonatomic) CDUnknownBlockType onSelect; // @synthesize onSelect=_onSelect;
@property(copy, nonatomic) CDUnknownBlockType onBack; // @synthesize onBack=_onBack;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
- (void).cxx_destruct;
- (void)setupBodyViewWithLayoutType:(long long)arg1;
- (id)initWithTitle:(id)arg1 heading:(id)arg2 items:(id)arg3 layoutType:(long long)arg4;

@end

