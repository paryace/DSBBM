//
//  ZhuCeViewController.h
//  DSBBM
//
//  Created by bisheng on 14-8-19.
//  Copyright (c) 2014年 qt. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UserViewController : UIViewController<UITextFieldDelegate,CLLocationManagerDelegate>

@property (nonatomic,strong) NSString * name;

@property (nonatomic,strong) UIImage * t;

@property (nonatomic,strong) NSString * sr;

@property BOOL xb;

@property (nonatomic,strong) NSString * number;

@end
