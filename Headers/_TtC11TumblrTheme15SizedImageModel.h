//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC11TumblrTheme15SizedImageModel : NSObject
{
    MISSING_TYPE *mediaUrlTemplate;
    MISSING_TYPE *width;
    MISSING_TYPE *sizes;
}

+ (_Bool)supportsSecureCoding;
+ (id)createForThemeWithHeaderImageSizes:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)imageURLStringWithFloatWidth:(double)arg1;
- (id)imageURLStringWithWidth:(long long)arg1;
- (id)firstSizeHeaderURLString;
- (id)initWithMediaUrlTemplate:(id)arg1 width:(long long)arg2 sizes:(id)arg3;
@property(nonatomic, readonly) NSArray *sizes;
@property(nonatomic, readonly) long long width; // @synthesize width;
@property(nonatomic, readonly) NSString *mediaUrlTemplate;

@end

