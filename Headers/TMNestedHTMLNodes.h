//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TMHTMLElement;
@protocol TMHTMLNode;

@interface TMNestedHTMLNodes : NSObject
{
    id <TMHTMLNode> _rootNode;
    TMHTMLElement *_deepestElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TMHTMLElement *deepestElement; // @synthesize deepestElement=_deepestElement;
@property(retain, nonatomic) id <TMHTMLNode> rootNode; // @synthesize rootNode=_rootNode;
- (void)addChildNode:(id)arg1 deepestElement:(id)arg2;
- (void)addNestedTextNode:(id)arg1;
- (void)addNestedNodes:(id)arg1;
- (void)addNestedElement:(id)arg1;

@end
