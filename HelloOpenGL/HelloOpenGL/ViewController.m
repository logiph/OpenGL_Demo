//
//  ViewController.m
//  HelloOpenGL
//
//  Created by logiph on 8/10/16.
//  Copyright © 2016 logiph. All rights reserved.
//

#import "ViewController.h"
#import "OpenGLView.h"


@interface ViewController ()

@property(nonatomic, strong) OpenGLView *glView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    CGRect screenBounds = [[UIScreen mainScreen] bounds];
    self.glView = [[OpenGLView alloc] initWithFrame:screenBounds];
    
    [self.view addSubview:self.glView];
    
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
