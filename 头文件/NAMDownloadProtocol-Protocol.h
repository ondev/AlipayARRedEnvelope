//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol NAMDownloadProtocol <NSObject>
- (void)cancel:(id)arg1;
- (id)downloadUrl:(NSURL *)arg1 process:(void (^)(float, unsigned long long, unsigned long long))arg2 finish:(void (^)(NSString *, NSError *))arg3;
@end

