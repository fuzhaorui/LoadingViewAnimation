//
//  ShapeLoadingView.h
//  TestEducation
//
//  Created by tracy wang on 15/12/4.
//  Copyright © 2015年 tracy wang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShapeLoadingView : UIView
{


    
    
    
    UIImageView *_shapView;
    
    UIImageView *_shadowView;
    
    
    
    
    float _toValue;
    float _fromValue;
    
    
    
    float _scaletoValue;
    float _scalefromValue;
    
    
    

}

- (id)initWithFrame:(CGRect)frame title:(NSString *)title;



-(void) step;

-(void) startAnimating;

-(void) stopAnimating;



@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com
