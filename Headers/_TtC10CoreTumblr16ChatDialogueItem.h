//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC10CoreTumblr16ChatDialogueItem : NSObject
{
    MISSING_TYPE *label;
    MISSING_TYPE *name;
    MISSING_TYPE *phrase;
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 name:(id)arg2 phrase:(id)arg3;
@property(nonatomic, readonly) NSString *phrase;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *label;

@end

