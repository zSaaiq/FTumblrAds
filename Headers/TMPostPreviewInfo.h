//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface TMPostPreviewInfo : NSObject
{
    int _postState;
    NSString *_previewText;
    NSString *_blogName;
    UIImage *_previewImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) NSString *blogName; // @synthesize blogName=_blogName;
@property(readonly, nonatomic) int postState; // @synthesize postState=_postState;
@property(readonly, nonatomic) NSString *previewText; // @synthesize previewText=_previewText;
- (id)initWithPreviewText:(id)arg1 postState:(int)arg2 blogName:(id)arg3 previewImage:(id)arg4;

@end

