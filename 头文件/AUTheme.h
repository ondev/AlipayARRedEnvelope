//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface AUTheme : NSObject
{
    NSDictionary *_dictionary;
}

@property(copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (double)cornerRadiusForKey:(id)arg1;
- (double)spaceForKey:(id)arg1;
- (struct CGSize)iconSizeForKey:(id)arg1;
- (id)fontForKey:(id)arg1;
- (id)colorForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

