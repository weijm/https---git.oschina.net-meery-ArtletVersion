//
//  Util.h
//  公共方法类
//
//  Created wjm  on 15/7/3.
//  Copyright (c) 2015年 lyk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Util : NSObject
/**
 获取不同设备字体的大小
 */
+(float)myFontSize:(float)fontSize;
/**
 获取不同设备视图的宽度
 */
+(float)myXOrWidth:(float)xOrWidth;
/**
 获取不同设备的视图高度
 */
+(float)myYOrHeight:(float)yOrHeight;
/**
 正则表达式 手机号码验证
 */
//+ (BOOL)isMobileNumber:(NSString *)mobileNum;

/**
 根据数组中的类名称，title，image 生成tabbar的Viewcontrollers
 */
+(NSMutableArray*)generateViewControllerByName:(NSDictionary*)classInfoDic;
/**
 获取bundle下文件的路径
 */
+(NSString*)getBundlePath:(NSString*)fileName;
/**
 根据颜色获取对应色值的图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 随机生成颜色
 */
+(UIColor *) randomColor;
/**
 随机生成匹配度
 */
+(NSInteger)randomRate;
/**
 根据总数和每行显示的个数计算行数
 */
+(int)getRow:(int)total eachCount:(int)count;

#pragma mark - 判断字符串是否符合要求
/**
 判断字符串是否为空
 */
+(NSString*)getCorrectString:(NSString*)string;
/**
 验证码密码
 */
+(BOOL)checkPassWord:(NSString *)passWord;
/**
 检查手机号码
 */
+ (BOOL)checkTelephone:(NSString *)phone;
/**
 校验网址正确
 */
+(BOOL)checkWebSite:(NSString*)string;
/**
 提示信息
 */
+(void)showPrompt:(NSString*)promptString;
/**
 检测设备
 */
+(BOOL)checkDevice:(NSString*)name;
/**
 判断字符串是整数
 */
+(BOOL)isPureInt:(NSString*)string;


#pragma mark - 文件路径
/**
 输出bug内容
 */
+(void)printBugContent;
/**
 获取document下得子文件
 */
+(NSArray*)getSubFileInDocument;
/**
 获取document的路径
 */
+(NSString*)documentPath;
/**
 复制原文件到指定目录
 */
+(BOOL)copyFile:(NSString*)originalPath To:(NSString*)targetPath;
/**
 用户的数据库文件路径
 */
+(NSString*)getSQLitePath;
/**
 图片保存路径
 */
+(NSString *)getFileDir;
/**
 判断图片是否存在
 */
+(BOOL)isExistsFile:(NSString*)filePath;

/**
 将json转换为字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

/**
 计算字符长度
 */
+(int)convertToInt:(NSString*)strtemp;

/**
 获取职位名称
 */
+(NSString*)getPositionTitle:(NSString*)title;
/**
 去掉占位符
 */
+ (BOOL)stringContainsEmoji:(NSString *)string;

/**
 获取lab的宽度
 */
+(float)getWidth:(NSString*)str FontSize:(float)fontSize AndHeight:(float)height;
/**
 获取lab的高度
 */
+(float)getHeight:(NSString*)str FontSize:(float)fontSize AndWidth:(float)width paragraphLine:(float)linespacing;
/**
 获取lab的样式
 */
+(NSDictionary*)getLabAttribute:(float)fontSize paragraphLine:(float)linespacing;
/**
 设置lab中的某些字的颜色 大小
 */
+(void)setLabel:(UILabel*)lab stytleStr:(NSString*)subStr subFontSize:(float)fontSize subColor:(UIColor*)subColor;
/**
 获取标签的高度
 */
+(float)getMarkHeight:(NSArray*)marksArr AndWidth:(float)totWidth;
@end

