//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9PostForms31PostFormVideoBlockYahooMetadata : NSObject
{
    MISSING_TYPE *uuid;
    MISSING_TYPE *width;
    MISSING_TYPE *height;
    MISSING_TYPE *devID;
    MISSING_TYPE *siteID;
    MISSING_TYPE *yvapID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSString *yvapID;
@property(nonatomic, readonly) NSString *siteID;
@property(nonatomic, readonly) NSString *devID;
@property(nonatomic, readonly) long long height; // @synthesize height;
@property(nonatomic, readonly) long long width; // @synthesize width;
@property(nonatomic, readonly) NSString *uuid;

@end
