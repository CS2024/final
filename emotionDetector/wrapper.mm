//
//  wrapper.m
//  emotionDetector
//
//  Created by James Bischoff  on 11/25/15.
//  Copyright (c) 2015 CS2024. All rights reserved.
//

#import "wrapper.h"
#include "CPP.hpp"

//wrapper function invokes C++ code
@implementation Wrapper
- (StringPtr) emote_wrapped {
    CPP cpp;
    cpp.emote();
    return 0;
}
@end
