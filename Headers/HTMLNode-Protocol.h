//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol HTMLNode;

@protocol HTMLNode <NSObject>
@property(readonly, nonatomic) unsigned int nodetype;
@property(readonly, copy, nonatomic) NSArray *children;
@property(readonly, nonatomic) id <HTMLNode> parent;
@property(readonly, copy, nonatomic) NSString *tagName;
@property(readonly, copy, nonatomic) NSString *className;
@property(readonly, nonatomic) id <HTMLNode> previousSibling;
@property(readonly, nonatomic) id <HTMLNode> nextSibling;
@property(readonly, copy, nonatomic) NSString *rawContents;
@property(readonly, copy, nonatomic) NSString *allContents;
@property(readonly, copy, nonatomic) NSString *contents;
@property(readonly, nonatomic) id <HTMLNode> firstChild;
- (NSArray *)findChildrenWithAttribute:(NSString *)arg1 matchingName:(NSString *)arg2 allowPartial:(_Bool)arg3;
- (id <HTMLNode>)findChildWithAttribute:(NSString *)arg1 matchingName:(NSString *)arg2 allowPartial:(_Bool)arg3;
- (NSArray *)findChildrenOfClass:(NSString *)arg1;
- (id <HTMLNode>)findChildOfClass:(NSString *)arg1;
- (id <HTMLNode>)findChildTag:(NSString *)arg1;
- (NSArray *)findChildTags:(NSString *)arg1;
- (NSString *)getAttributeNamed:(NSString *)arg1;
@end

