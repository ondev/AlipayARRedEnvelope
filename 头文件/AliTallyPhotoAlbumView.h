//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface AliTallyPhotoAlbumView : UIView
{
    NSMutableArray *_imageViewList;
    long long _numberOfPhotoes;
}

@property(nonatomic) long long numberOfPhotoes; // @synthesize numberOfPhotoes=_numberOfPhotoes;
@property(retain, nonatomic) NSMutableArray *imageViewList; // @synthesize imageViewList=_imageViewList;
- (void).cxx_destruct;
- (void)resetImageViewArray;
- (void)buildSubViews;
- (id)initWithFrame:(struct CGRect)arg1 withNumberOfPhotoes:(long long)arg2;

@end

