//
//  RootViewController.m
//  Artlets
//
//  Created by lyk on 16/6/18.
//  Copyright © 2016年 lyk. All rights reserved.
//

#import "RootViewController.h"

@interface RootViewController ()

@end

@implementation RootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
#pragma mark - 初始化视频上的所有子视图
//初始化所有视图
-(void)loadSubViewInVedio
{
    //整个子视图的背景
    UIView *subBg = [[UIView alloc] initWithFrame:CGRectMake(0, 0, kWidth, kHeight)];
    subBg.backgroundColor = [UIColor grayColor];
    [self.view addSubview:subBg];
    
    float btW = (kWidth-[Util myXOrWidth:15]*3)/2;
    
}
//初始化登录 注册按钮视图
-(void)loadBt:(UIView*)subBg
{
    
}
@end
