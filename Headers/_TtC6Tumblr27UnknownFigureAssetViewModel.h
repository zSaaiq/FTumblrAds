//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL, TMFigureAssetAttribution, UIView;
@protocol _TtP6Tumblr33FigureAssetViewModelEventDelegate_;

@interface _TtC6Tumblr27UnknownFigureAssetViewModel : NSObject
{
    MISSING_TYPE *figureID;
    MISSING_TYPE *url;
    MISSING_TYPE *figureType;
    MISSING_TYPE *contentHeight;
    MISSING_TYPE *contentWidth;
    MISSING_TYPE *containerWidth;
    MISSING_TYPE *attribution;
    MISSING_TYPE *$__lazy_storage_$_figureAssetView;
    MISSING_TYPE *eventDelegate;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (void)unknownMediaTappedWithButton:(id)arg1;
- (id)initWithFigureAsset:(id)arg1 containerWidth:(double)arg2;
@property(nonatomic) __weak id <_TtP6Tumblr33FigureAssetViewModelEventDelegate_> eventDelegate; // @synthesize eventDelegate;
@property(nonatomic, retain) UIView *figureAssetView;
@property(nonatomic, retain) TMFigureAssetAttribution *attribution; // @synthesize attribution;
@property(nonatomic) double containerWidth; // @synthesize containerWidth;
@property(nonatomic) double contentWidth; // @synthesize contentWidth;
@property(nonatomic) double contentHeight; // @synthesize contentHeight;
@property(nonatomic) unsigned long long figureType; // @synthesize figureType;
@property(nonatomic, copy) NSURL *url;
@property(nonatomic, copy) NSString *figureID;

@end

