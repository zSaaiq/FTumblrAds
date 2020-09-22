//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDImageTransformer-Protocol.h"

@class NSString;

@interface SDImageCroppingTransformer : NSObject <SDImageTransformer>
{
    struct CGRect _rect;
}

+ (id)transformerWithRect:(struct CGRect)arg1;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)transformedImageWithImage:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSString *transformerKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
