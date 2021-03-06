//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BEEPhotoVerticalPreviewView, UIImage, UIImageView, UIView;

@protocol BEEPhotoVerticalPreviewViewDelegate <NSObject>
- (UIView *)headerViewInVerticalPreviewView:(BEEPhotoVerticalPreviewView *)arg1;
- (UIView *)footerViewInVerticalPreviewView:(BEEPhotoVerticalPreviewView *)arg1;
- (void)verticalPreviewView:(BEEPhotoVerticalPreviewView *)arg1 didEditImage:(UIImage *)arg2 atPos:(long long)arg3 itemView:(UIImageView *)arg4;
- (void)verticalPreviewView:(BEEPhotoVerticalPreviewView *)arg1 didTapedImage:(long long)arg2 itemView:(UIImageView *)arg3;
- (void)verticalPreviewView:(BEEPhotoVerticalPreviewView *)arg1 didDeleteImage:(long long)arg2 itemView:(UIImageView *)arg3;
@end

