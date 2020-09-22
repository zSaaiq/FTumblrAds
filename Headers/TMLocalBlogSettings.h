//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface TMLocalBlogSettings : NSObject <NSSecureCoding>
{
    _Bool _autopostToTwitter;
    _Bool _autopostToFacebook;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool autopostToFacebook; // @synthesize autopostToFacebook=_autopostToFacebook;
@property(nonatomic) _Bool autopostToTwitter; // @synthesize autopostToTwitter=_autopostToTwitter;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initAutopostToTwitter:(_Bool)arg1 toFacebook:(_Bool)arg2;

@end
