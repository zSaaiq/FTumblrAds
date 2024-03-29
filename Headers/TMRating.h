//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMRating : NSObject
{
    int _numberOfReviews;
    double _rating;
}

@property(readonly, nonatomic) int numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;
@property(readonly, nonatomic) double rating; // @synthesize rating=_rating;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) NSString *detailLabelText;
@property(readonly, nonatomic) int reviewCount;
@property(readonly, nonatomic) double numberOfStars;
- (id)initWithRating:(double)arg1 numberOfReviews:(int)arg2;
- (id)init;

@end

