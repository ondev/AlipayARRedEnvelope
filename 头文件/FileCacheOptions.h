//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FileCacheOptions : NSObject
{
    NSString *_business;
    unsigned long long _cacheType;
    unsigned long long _tag;
}

@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (id)init;

@end

