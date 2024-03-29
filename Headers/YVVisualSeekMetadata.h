//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YVVisualSeekMetadata : NSObject
{
    _Bool _imagesReady;
    _Bool _downloadBegan;
    double _period;
    NSArray *_spriteSheets;
    struct CGSize _frameSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *spriteSheets; // @synthesize spriteSheets=_spriteSheets;
@property(nonatomic) _Bool downloadBegan; // @synthesize downloadBegan=_downloadBegan;
@property(nonatomic) _Bool imagesReady; // @synthesize imagesReady=_imagesReady;
@property(nonatomic) double period; // @synthesize period=_period;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
- (void)downloadImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadVisualSeekImages;

@end

