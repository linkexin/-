//
//  DGAaimaView.h
//  animaByIdage
//
//  Created by chuangye on 15-3-11.
//  Copyright (c) 2015年 chuangye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DGEarthView.h"
@interface DGAaimaView : UIView
@property (nonatomic, assign) CGFloat CloudY;
@property(nonatomic,assign)CGFloat BigCloudY;
@property(nonatomic,assign)CGFloat letterY;
@property(nonatomic,strong)DGEarthView *ainmeView;

-(void)DGAaimaView:(DGAaimaView*)animView BigCloudSpeed:(CGFloat)BigCS smallCloudSpeed:(CGFloat)SmaCS earthSepped:(CGFloat)eCS huojianSepped:(CGFloat)hCS littleSpeed:(CGFloat)LCS;

-(void)start;

@end
