//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, UIColor;

@interface TMCustomizeColorGroup : NSObject
{
    MISSING_TYPE *color;
    MISSING_TYPE *variations;
}

+ (id)blackWhiteGroup;
+ (id)pickerGroup;
+ (id)allGroups;
- (void).cxx_destruct;
- (id)init;
- (id)variationContaining:(id)arg1;
- (long long)indexOf:(id)arg1;
- (_Bool)contains:(id)arg1;
@property(nonatomic, copy) NSArray *variations;
@property(nonatomic, readonly) UIColor *color; // @synthesize color;

@end

