//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdPolicyManifest.h"

@class NSArray, NSNumber, UIColor;

@interface YMAdUnitPolicyManifest : YMAdPolicyManifest
{
    UIColor *_backgroundColor;
    NSNumber *_borderWidth;
    UIColor *_borderColor;
    NSNumber *_cornerRadius;
    NSNumber *_adMargin;
    NSArray *_paddingArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *paddingArray; // @synthesize paddingArray=_paddingArray;
@property(retain, nonatomic) NSNumber *adMargin; // @synthesize adMargin=_adMargin;
@property(retain, nonatomic) NSNumber *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSNumber *borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)readPaddingArray;
- (id)manifestMergingFromManifest:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

