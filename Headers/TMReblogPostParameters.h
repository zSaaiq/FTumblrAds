//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPostParameters.h"

@class NSNumber, NSString;

@interface TMReblogPostParameters : TMPostParameters
{
    _Bool _originalPostWasTextWithNoTitle;
    NSString *_reblogKey;
    NSString *_originatingBlogName;
    long long _reblogType;
    NSNumber *_carouselIndex;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *carouselIndex; // @synthesize carouselIndex=_carouselIndex;
@property(nonatomic) long long reblogType; // @synthesize reblogType=_reblogType;
@property(nonatomic) _Bool originalPostWasTextWithNoTitle; // @synthesize originalPostWasTextWithNoTitle=_originalPostWasTextWithNoTitle;
@property(copy, nonatomic) NSString *originatingBlogName; // @synthesize originatingBlogName=_originatingBlogName;
@property(copy, nonatomic) NSString *reblogKey; // @synthesize reblogKey=_reblogKey;
- (id)init;
- (id)dictionaryRepresentation;

@end
