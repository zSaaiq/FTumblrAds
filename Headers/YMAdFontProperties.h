//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface YMAdFontProperties : NSObject <NSCopying>
{
    NSString *_normalFontName;
    NSString *_boldFontName;
    NSNumber *_fontSize;
}

+ (id)createWithFontProperties:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *boldFontName; // @synthesize boldFontName=_boldFontName;
@property(copy, nonatomic) NSString *normalFontName; // @synthesize normalFontName=_normalFontName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFontProperties:(id)arg1;

@end

