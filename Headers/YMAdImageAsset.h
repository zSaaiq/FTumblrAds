//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdAsset.h"

@class UIImage;

@interface YMAdImageAsset : YMAdAsset
{
    UIImage *_image;
}

+ (id)doCreate:(id)arg1 preloaded:(_Bool)arg2;
+ (_Bool)createNeedsMainThread;
+ (id)typeName;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 fromData:(id)arg2 preloaded:(_Bool)arg3;

@end

