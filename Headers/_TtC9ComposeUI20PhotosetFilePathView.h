//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PSPhotoDescriptor-Protocol.h"

@class MISSING_TYPE, NSNumber, NSString;

@interface _TtC9ComposeUI20PhotosetFilePathView : UIView <PSPhotoDescriptor>
{
    MISSING_TYPE *cachedImageURL;
    MISSING_TYPE *imageView;
    MISSING_TYPE *orderNumber;
    MISSING_TYPE *isAvailable;
    MISSING_TYPE *uniqueIdentifier;
    MISSING_TYPE *aspectRatio;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithCachedImageURL:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) double aspectRatio; // @synthesize aspectRatio;
@property(nonatomic, readonly) NSString *uniqueIdentifier;
@property(nonatomic, readonly) _Bool isAvailable; // @synthesize isAvailable;
@property(nonatomic, retain) NSNumber *orderNumber; // @synthesize orderNumber;

@end

