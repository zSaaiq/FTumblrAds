//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDImageTransformer-Protocol.h"

@class NSString, UIColor;

@interface SDImageRoundCornerTransformer : NSObject <SDImageTransformer>
{
    double _cornerRadius;
    unsigned long long _corners;
    double _borderWidth;
    UIColor *_borderColor;
}

+ (id)transformerWithRadius:(double)arg1 corners:(unsigned long long)arg2 borderWidth:(double)arg3 borderColor:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) unsigned long long corners; // @synthesize corners=_corners;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)transformedImageWithImage:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSString *transformerKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

