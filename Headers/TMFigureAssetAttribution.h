//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface TMFigureAssetAttribution : NSObject
{
    NSString *_title;
    NSURL *_attributionURL;
    NSURL *_attributionIconURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *attributionIconURL; // @synthesize attributionIconURL=_attributionIconURL;
@property(readonly, nonatomic) NSURL *attributionURL; // @synthesize attributionURL=_attributionURL;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)initWithFigureAsset:(id)arg1;

@end

