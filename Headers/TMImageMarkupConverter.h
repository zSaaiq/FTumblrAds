//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMHTMLNodeToMarkupTagConverter-Protocol.h"

@class NSArray, NSString;

@interface TMImageMarkupConverter : NSObject <TMHTMLNodeToMarkupTagConverter>
{
}

- (id)tagDescriptorFromNode:(id)arg1 parentNode:(id)arg2 childIndex:(long long)arg3 indexedChildCount:(unsigned long long)arg4;
@property(readonly, nonatomic) NSArray *tagNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

