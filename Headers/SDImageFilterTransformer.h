//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDImageTransformer-Protocol.h"

@class CIFilter, NSString;

@interface SDImageFilterTransformer : NSObject <SDImageTransformer>
{
    CIFilter *_filter;
}

+ (id)transformerWithFilter:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CIFilter *filter; // @synthesize filter=_filter;
- (id)transformedImageWithImage:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSString *transformerKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

