//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NBNetDTextMarkParam : NSObject
{
    unsigned int _size;
    unsigned int _transparency;
    unsigned int _position;
    unsigned int _fonttype;
    NSString *_text;
    NSString *_color;
}

@property(nonatomic) unsigned int fonttype; // @synthesize fonttype=_fonttype;
@property(nonatomic) unsigned int position; // @synthesize position=_position;
@property(nonatomic) unsigned int transparency; // @synthesize transparency=_transparency;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (id)buildIndexKey;

@end

