//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMHTMLNodeToMarkupTagConverter-Protocol.h"

@class MISSING_TYPE, NSArray;

@interface _TtC10CoreTumblr21AnchorMarkupConverter : NSObject <TMHTMLNodeToMarkupTagConverter>
{
    MISSING_TYPE *tagNames;
    MISSING_TYPE *baseURL;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBaseURL:(id)arg1;
@property(nonatomic, copy) NSArray *tagNames;
- (id)tagDescriptorFromNode:(id)arg1 parentNode:(id)arg2 childIndex:(long long)arg3 indexedChildCount:(unsigned long long)arg4;

@end

